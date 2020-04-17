// 1083 是否存在相等的差
# include <stdio.h>
# include <math.h>
# define Max 10001

int main(void)
{
	int i, N, temp;
	int Diff[Max] = {0}; // 记录不同种类差的个数 
	int val = 0; // 求差 
	int max = 0; // 记录val的最大值 
	scanf("%d",&N);
	
	for(i=1; i<=N; i++)
	{
		scanf("%d",&temp);
		val = abs(temp - i);
		Diff[val]++;
		if (max < val)
		{
			max = val; 
		}
	}
	// 倒序遍历到 Diff[0] 
	for (i=max; i>=0; i--)
	{
		if (Diff[i] >= 2)
		{
			printf("%d %d\n",i,Diff[i]);
		}
	}
	
	return 0;
}
