// PAT_1049_数列的片段和 

# include <stdio.h>
# define Max 100010

int main(void)
{
	int N;
	int i;
	double val; // 记录输入的数据 
	double sum = 0; // 最终求解的和 
	
	scanf("%d",&N);
	
	// 求权值
	for (i=1; i<=N; i++)
	{
		scanf("%lf",&val);
		sum += val * i * (N-i+1);
	}
	
	printf("%.2f",sum);
	
	return 0;
}
