//  PAT�Ҽ�
//  PAT_1022_System
//  ��10���Ƶ����ݼҺͽ�����н���ת�� 

# include <stdio.h>
# define Max 32

int main(void)
{
	long A, B, Sum;
	int i, D;
	int System[Max+1]; // ��¼ת��֮������� 
	
	//  �������� 
	scanf("%ld",&A);
	scanf("%ld",&B);
	scanf("%d",&D);
	
	//  ����A+B
	Sum = A+B;
	if (Sum == 0)
	{	
	printf("0");
		return 0;
	}
	
	
	// ����ת��
	
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
