//  1015 德才论 （16/25 分） // 运行超时 
//  现给出一批考生的德才分数，请根据司马光的理论给出录取排名。
//  输入格式：
//  输入第一行给出 3 个正整数，分别为：N 即考生总数；
//          L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；
//			H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
//			才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
//			德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
//			其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。
//随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。

# include <stdio.h>
# include <stdlib.h> 

int main(void)
{
	//  定义学生人数，最低录取线，优先录取线 
	int N, L, H;
	int *Num, *Dem, *Skill, *Temp, *Sum;
	int i, j;
	int N_Sum = 0;  //  合格的总人数 
	int A, B, C, D, E;
	
	scanf("%d%d%d",&N, &L, &H);
	//  动态分配内存，并输入考生信息
	Num = (int *)malloc(N*(sizeof(int)));
	Dem = (int *)malloc(N*(sizeof(int)));
	Skill = (int *)malloc(N*(sizeof(int)));
	Sum = (int *)malloc(N*(sizeof(int)));
	Temp = (int *)malloc(N*(sizeof(int)));  //  定义学生的档次 
	
	//  输入考生信息
	for (i=0; i<N; i++) 
	{
		scanf("%d",&Num[i]);
		scanf("%d",&Dem[i]);
		scanf("%d",&Skill[i]);
		Temp[i] = 0;
		Sum[i] = Dem[i] + Skill[i]; // 记录学生总分 
	}
	
	//  判断分别属于哪一类 
	for (i=0; i<N; i++) 
	{
		if (Dem[i]>=L && Skill[i]>=L)
		{
			Temp[i] = 1; // 表示可以录取 
			N_Sum++; 
			
			if (Dem[i]>=H && Skill[i]>=H)
			{
				Temp[i] = 5; // 表示优先录取  才德全尽
			}
			else if (Dem[i]>=H && Skill[i]<H) 
			{
				Temp[i] = 3; // 德胜才
			}
			else if (Dem[i]<H && Skill[i]<H && Dem[i]>=Skill[i])
			{
				Temp[i] = 2; // 才德兼亡
			}
		}
		else 
		{
			Temp[i] = -1; // 表示学生不合格 
		}
	}
	//  去掉不合格人的信息 
	if (N_Sum == 0)
	{
		printf("%d\n",N_Sum);
		return 0;
	}
		
	for (i=0; i<=N_Sum; i++) 
	{
		if (Temp[i] == -1)
		{
			for (j=i; j<=N_Sum; j++)
			{
				Num[j] = Num[j+1];
				Dem[j] = Dem[j+1];
				Skill[j] = Skill[j+1];
				Sum[j] = Sum[j+1];
				Temp[j] = Temp[j+1];
			}
			i--;  // 从此断点处重新检查，以免移动的是无效信息
		}
	}
	// 分段排序
	for (i=0; i<N_Sum; i++) 
	{
		for (j=i+1; j<N_Sum; j++)
		{
			if (Sum[i]<Sum[j])
			{
				A = Num[j];
				B = Dem[j];
				C = Skill[j];
				D = Sum[j];
				E = Temp[j];
				
				Num[j] = Num[i];
				Dem[j] = Dem[i];
				Skill[j] = Skill[i];
				Sum[j] = Sum[i];
				Temp[j] = Temp[i];
				
				Num[i] = A;  
				Dem[i] = B;  
				Skill[i] = C;
				Sum[i] = D;  
				Temp[i] = E;
			}
			else if(Sum[i] == Sum[j])
			{
				if (Dem[i] < Dem[j])
				{
					A = Num[j];
					B = Dem[j];
					C = Skill[j];
					D = Sum[j];
					E = Temp[j];
					
					Num[j] = Num[i];
					Dem[j] = Dem[i];
					Skill[j] = Skill[i];
					Sum[j] = Sum[i];
					Temp[j] = Temp[i];
					
					Num[i] = A;  
					Dem[i] = B;  
					Skill[i] = C;
					Sum[i] = D;  
					Temp[i] = E;
				}
				else if (Dem[i] == Dem[j])
				{
					if (Num[i] > Num[j])
					{
						A = Num[j];
						B = Dem[j];
						C = Skill[j];
						D = Sum[j];
						E = Temp[j];
						
						Num[j] = Num[i];
						Dem[j] = Dem[i];
						Skill[j] = Skill[i];
						Sum[j] = Sum[i];
						Temp[j] = Temp[i];
						
						Num[i] = A;  
						Dem[i] = B;  
						Skill[i] = C;
						Sum[i] = D;  
						Temp[i] = E;
					}
				}
				
			}
		} 
	}    
		
	//  调整所有学生顺序
	for (i=0; i<N_Sum; i++) 
	{
		for (j=i+1; j<N_Sum; j++)
		{
			if (Temp[i]<Temp[j])
			{
				A = Num[j];
				B = Dem[j];
				C = Skill[j];
				D = Sum[j];
				E = Temp[j];
				
				Num[j] = Num[i];
				Dem[j] = Dem[i];
				Skill[j] = Skill[i];
				Sum[j] = Sum[i];
				Temp[j] = Temp[i];
				
				Num[i] = A;  
				Dem[i] = B;  
				Skill[i] = C;
				Sum[i] = D;  
				Temp[i] = E;
			}
		} 
	}    
	printf("%d\n",N_Sum);
	//  输出合格学生信息 
	for (i=0; i<N_Sum; i++) 
	{
		printf("%d ",Num[i]);
		printf("%d ",Dem[i]);
		printf("%d\n",Skill[i]);
	}
	
	return 0;
}
