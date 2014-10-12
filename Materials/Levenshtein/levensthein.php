<?php
function compare($S1,$S2,$a,$b,$limit)
{
  $S1=strtolower($S1);$S2=strtolower($S2);
  $n=strlen($S1);$m=strlen($S2);
  if($S1==$S2)
	return 0;
  if($limit==null)
	$limit=9999998;
  if(abs($n-$m)>$limit)
    return 9999999;
  
  $dist=array(array()); $ok=1; $current=1;
  for($i=1;$i<=$m;$i++)
  {	
	  $dist[0][$i]=$i;
  }
  for($i=1;$i<=$n;$i++)
  {
    $ok=0;
    $dist[$current][0]=$i;
    if($i-$limit>=1)
		$dist[$current][$i-$limit-1]=9999999;
    for($j=max($i-$limit,1);$j<=min($i+$limit,$m);$j++)
    {
        if(similar_text($S1[$i-1],$S2[$j-1]))
            $dist[$current][$j]=$dist[1-$current][$j-1];
        else
            $dist[$current][$j]=min($dist[1-$current][$j-1]+$b,$dist[1-$current][$j]+$a,$dist[$current][$j-1]+$a);
        if($dist[$current][$j]<=$limit)
            $ok=1;
    }
    if($i+$limit<=$m)
    {
		$dist[$current][$i+$limit+1]=9999999;
	}
    if(!$ok)
    {
        return 9999999;
	}
    $current=1-$current;
  }
  return $dist[1-$current][$m];
}
$handle = fopen ("php://stdin","r");
$t=fgets($handle);
$c = 0;
while($c < $t){
$line1 = fgets($handle);
$line2 = fgets($handle);
$line3 = fgets($handle);
$data   = preg_split('/\s+/', $line3);
$a = (int)$data[0];
$b = (int)$data[1];
$k = (int)$data[2];
$res=compare($line1,$line2,$a,$b,$k);
if($res > $k) echo "-1\n";
else echo "$res\n";
$c = $c+1;
}
?>
