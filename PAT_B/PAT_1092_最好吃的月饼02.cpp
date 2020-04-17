// 1092 最好吃的月饼02 ERROR 
# include <stdio.h>
# define Max 101

int main(void)
{
	int N, M, val;
	int i, j;
	int max,num_max=0; // 分别记录最大值和最大值出现的次数 
	int Sum[Max] = {0};
	scanf("%d %d",&N, &M);
	// 计算每种的销量 
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
		{
			scanf("%d",&val);
			Sum[j] += val;
		}
	}
	max = Sum[0]; 
	for (i=0; i<N; i++)
	{
		// 计算最大值的数值以及最大值出现的次数 
		if (max == Sum[i])
		{
			num_max++;
		}
		else if (Sum[i] > max)
		{
			num_max = 0;
			max = Sum[i];
			num_max++;
		}
	}
	// 输出最终结果
	printf("%d\n",max);
	for(i=0; i<N; i++)
	{
		if (num_max>0 && Sum[i]==max)
		{
			printf("%d",i+1);
			num_max--;
			if (num_max > 0)
			{
				printf(" ");
			}
		}
	}	
	
	return 0;
}
