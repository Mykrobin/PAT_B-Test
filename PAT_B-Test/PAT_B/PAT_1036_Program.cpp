// PAT_1036_Program

# include <stdio.h>

int main(void)
{
	int m, n;
	char ch;
	int i, j;
	scanf("%d %c",&n, &ch);
	
	// º∆À„¡– 
	m = (n%2==1)?(n+1)/2:n/2;

	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			if (i==0 || j==0 || i==m-1 || j==n-1) 
			{
				printf("%c",ch);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
