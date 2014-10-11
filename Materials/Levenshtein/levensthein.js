function minn(a,b,c)
{
	if(a>b)
		a=b;
	if(a<c)
		return a;
	return c;
}

function compare(S1,S2,limit)
{
	if(S1==null||S2==null||typeof(S1)!="string"||typeof(S2)!="string")
		return 9999999;
	if(limit==null)
		limit=9999999;
	if(Math.abs(S1.length-S2.length)>limit)
		return 9999999;
	S1=S1.toLowerCase();S2=S2.toLowerCase();
	if(S1==S2)
		return 0;
	var n=S1.length;var m=S2.length;
	dist=new Array(new Array(m+2), new Array(m+2));
	current=0;
	for(i=0;i<=m+1;i++)
	{
		dist[1][i]=i;
	}
	for(i=1;i<=n;i++)
	{
		ok=0;
		dist[current][0]=i;
		if(i-limit>=1)
			dist[current][i-limit-1]=9999999;
		for(j=Math.max(i-limit,1);j<=Math.min(i+limit,m);j++)
		{
			if(S1.substr(i-1,1)==S2.substr(j-1,1))
				dist[current][j]=dist[1-current][j-1];
			else
				dist[current][j]=minn(dist[1-current][j-1],dist[1-current][j],dist[current][j-1])+1;
			if(dist[current][j]<=limit)
				ok=1;
		}
		if(i+limit<=m)
		{
			dist[current][i+limit+1]=9999999;
		}
		if(!ok)
			return 9999999;
		current=1-current;
	}
	if(dist[1-current][m]>limit)
		return 9999999;
	return dist[1-current][m];
}

function search()
{
	document.getElementById('result').innerHTML=compare(document.getElementById('s1').value,document.getElementById('s2').value);
}

