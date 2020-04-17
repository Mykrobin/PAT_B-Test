//  PAT乙级
//  PAT_1022_System
//  对10进制的数据家和结果进行进制转换 

# include <stdio.h>
# define Max 32

int main(void)
{
	long A, B, Sum;
	int i, D;
	int System[Max+1]; // 记录转换之后的数据 
	
	//  输入数据 
	scanf("%ld",&A);
	scanf("%ld",&B);
	scanf("%d",&D);
	
	//  计算A+B
	Sum = A+B;
	if (Sum == 0)
	{	
	printf("0");
		return 0;
	}
	
	
	// 进制转换
	
	for (i=Max; i>=0; i--)
	{
		System[i] = -1;
	}
	i=0;
	while (Sum != 0) 
	{
		System[i++] = Sum%D;
		Sum /= D;
	}
	
	for (i=Max; i>=0; i--)
	{
		if (System[i] != -1)
			printf("%d",System[i]);
	}

	
	return 0;
}
