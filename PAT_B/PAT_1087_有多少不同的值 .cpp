// PAT_1087_有多少不同的值 

# include <stdio.h> 

int main(void)
{
	int N;
	int i;
	int sum = 0;
	scanf("%d",&N);
	
	for (i=1; i<=N; i++)
	{
		if (i%2!=0 && i%3!=0 && i%5!=0)
			sum++;
	}
	
	printf("%d\n",N-sum+1);
	
	return 0;
}
