// PAT_1056_Sum_Count

# include <stdio.h> 
# include <stdlib.h>

int main(void)
{
	int N;
	int i, j;
	int Arr[10];
	int Sum=0;
	scanf("%d",&N);
	
	for (i=0; i<N; i++)
		scanf("%d",&Arr[i]);
	
	for (i=0; i<N; i++) 
	{
		for (j=0; j<N; j++)
		{
			if (i != j)
			{
				Sum += Arr[i]*10 + Arr[j];
			}
		}
	}
	
	printf("%d\n",Sum);
	
	return 0;
}
