// 1092 最好吃的月饼03 AC 
	// 标志位作用是 当读取到最大值时，第一个最大值前不用空格
	// 保证题目 行末无多余空格
	// 不用计算满足题目条件的max值数量 
# include <stdio.h>
# define Max 1000001

int main(void)
{
	int N, M, val;
	int i, j;
	int max,flag=0; // 分别记录最大值和 标志位
	// 标志位作用是 当读取到最大值时，第一个最大值前不用空格
	// 保证题目 行末无多余空格
	// 不用计算满足题目条件的max值数量 
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
		// 计算最大值的数值
		if (max < Sum[i])
		{
			max = Sum[i];
		}
	}
	// 输出最终结果
	printf("%d\n",max);
	for(i=0; i<N; i++)
	{
		if (Sum[i]==max)
		{
			// 通过标志位flag 控制输出格式 
			if(0 == flag)
			{
				flag = 1;
			 } 
			 else
			 {
			 	printf(" ");
			 }
			printf("%d",i+1);
		}
	}	
	
	return 0;
}
