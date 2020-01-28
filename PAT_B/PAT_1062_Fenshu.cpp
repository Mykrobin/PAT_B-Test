// PAT_1062_Fenshu

# include <stdio.h>
# define Max_Size 1000

int Is_Common(int a, int b);

int main(void)
{
	int N1, N2, M1, M2, K;
	int i, l=0;
	int A[Max_Size];
	
	scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K); 
	
	for (i=0; i<Max_Size; i++)
	{
		A[i] = 0;
	}
	
	for (i=1; i<K; i++)
	{
		// 首先判断是否是最简分数 
		if (Is_Common(i,K))
		{
			// 满足最简分数，则继续判断大小 
			if ((i*M1>K*N1 && i*M2<K*N2) || (i*M1<K*N1 && i*M2>K*N2))
			{
				A[l] = i;
				l++;	
			}
		}
		else
			continue; 
	}
	
	for (i=0; i<Max_Size; i++)
	{
		printf("%d/%d",A[i],K);
		if (A[i+1] != 0)
		{
			printf(" ");
		}
		else
			break;
	}
	
	return 0;
}

int Is_Common(int a, int b)
{
	int r;
	while ((r=a%b) != 0)
	{
		a = b;
		b = r;
	}
	
	// 最大公约数为1 
	if (b == 1)
	{
		return 1;
	 } 
	 else 
	 	return 0;
}
