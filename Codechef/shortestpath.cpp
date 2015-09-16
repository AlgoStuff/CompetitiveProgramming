#include <stdio.h>
#include <string.h>
#include <limits.h>
 
int minLength;
char net[127][127];
 
void minLengthpathLength(int row, int col, int i, int j, int pathLength)
{
	if (i == (row - 1) && j == (col - 1))
	{
		if (pathLength < minLength)
			minLength = pathLength;
		return;
	}
	if (i >= 0 && i < row && j >= 0 && j < col)
		if (net[i][j] == '0')
		{
			net[i][j] = '2';
			minLengthpathLength(row, col, i - 1, j - 1, pathLength + 1);
			minLengthpathLength(row, col, i - 1, j    , pathLength + 1);
			minLengthpathLength(row, col, i - 1, j + 1, pathLength + 1);
			minLengthpathLength(row, col, i    , j - 1, pathLength + 1);
			minLengthpathLength(row, col, i    , j + 1, pathLength + 1);
			minLengthpathLength(row, col, i + 1, j - 1, pathLength + 1);
			minLengthpathLength(row, col, i + 1, j    , pathLength + 1);
			minLengthpathLength(row, col, i + 1, j + 1, pathLength + 1);
			net[i][j] = '0';
		}
}
 
int main()
{
	int n, m, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", net[i]);
	m = strlen(net[0]);
	minLength = INT_MAX;
	minLengthpathLength(n, m, 0, 0, 1);
	printf("%d", minLength);
	return 0;
}
