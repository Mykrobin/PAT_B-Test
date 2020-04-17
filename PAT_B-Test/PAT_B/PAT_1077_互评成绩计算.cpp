// 1077 互评成绩计算
# include <stdio.h>
# define Max 101

int main(void)
{
	int N, len, num=0, i;
	int flag = -1; // flag标记为第一个有效的学生成绩 
	int M, sum=0, min_s, max_s;
	int Score[Max] = {0};
	scanf("%d %d",&N,&M);
	len = N;
	while (len > 0)
	{
		sum = 0.0;
		num = 0;
		flag = -1; // 每次都设初值为-1 
		// 每组进行单独遍历，找出有效成绩个数，找到最大最小值 
		for (i=0; i<N; i++)
		{
			// Score[0]为老师评分，不参与G1计算 
			scanf("%d",&Score[i]); 
			// 找到第一个有效的学生成绩 
			if (i>0 && flag==-1)
			{
				if (Score[i]>=0 && Score[i]<=M)
					flag = 0;
			}
			// 把找到的学生成绩记录为当前的最大最小值 
			if (0 == flag)
			{
				// 记录第一个有效的学生成绩 
				min_s = max_s = Score[i];
				flag = 1;
			}
			// 统计有效分数
			if (i>0 && Score[i]>=0 && Score[i]<=M)
			{
				sum += Score[i];
				// 有效分数的个数 
				num++;
				// 更新最大最小值 
				if (Score[i] > max_s)
					max_s = Score[i];
				if (Score[i] < min_s)
					min_s = Score[i];
			} 			 
		 } 
		 num -= 2;
		 // 总成绩计算
		 // 学生成绩为去掉最大最小值的平均值
		 // 总成绩为学生最终成绩和老师最终成绩均值
		 printf("%d\n",(int)(((((sum-min_s-max_s)*1.0/num)+Score[0])*1.0/2)+0.5)); 
		
		len--; // 计算下一组 
	}
	
	return 0;
}
