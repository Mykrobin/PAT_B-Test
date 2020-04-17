// 1072 开学寄语
# include <stdio.h>

int main(void)
{
	int N, M;
	int i, j, k, len;
	char S[6];
	int Good[6]={0}, num;
	int sum_name=0, sum_good=0, flag=0;
	
	scanf("%d%d",&N, &M);
	// 记录违规物品编号 
	for (i=0; i<M; i++)
	{
		scanf("%d",&Good[i]);
	}
	// 输入学生姓名及所带物品编号 
	for (j=0; j<N; j++)
	{
		// 姓名 
		scanf("%s",S);
		// 物品数量 
		scanf("%d",&len);
		// 各个物品编号 
		flag = 0; // 如果该学生有违规物品，则输出姓名 
		for (i=0; i<len; i++)
		{
			scanf("%d",&num);
			for (k=0; k<M; k++)
			{
				if (flag == 0) 
					if (num==Good[k])
					{
						sum_name++;
						flag=1; // 已经输出了姓名
						printf("%s:",S); 
					}
				if (num == Good[k])
				{
					// 违规物品数量 
					sum_good++;
					printf(" %04d",num);
				}
			 }
			  
		}
		if (flag == 1)
			printf("\n");
	}
	printf("%d %d\n",sum_name, sum_good);
	
	return 0;
 } 
