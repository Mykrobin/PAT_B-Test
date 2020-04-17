// PAT_1038_COUNT_GRADES_02 
// 运行超时，用空间换时间 
# include <stdio.h>
# include <stdlib.h>
# define Max 110 

int main(void)
{
	int n, k; 
	int i;
	int val;
	scanf("%d",&n);
	int Grades[110];
	// 将成绩数组初始化为0，代表给分数有多少人 
	for (i=0; i<Max; i++) 
	{
		Grades[i] = 0;
	}
	// 记录每个分数的人数 
	for (i=0; i<n; i++)
	{
		scanf("%d",&val);
		Grades[val] ++;
	}
	
	scanf("%d",&k);
	for (i=0; i<k; i++)
	{
		scanf("%d",&val);
		// 查找 
		printf("%d",Grades[val]);
		// 控制输出格式 
		if (i != k-1)
			printf(" ");
	}
	
		
	return 0;
}
