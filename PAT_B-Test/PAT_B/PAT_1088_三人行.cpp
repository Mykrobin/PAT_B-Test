// 1088 ������

# include <stdio.h>
# include <math.h>
// ������ұ����Լ�����ֵ��ϵ 
void print(int , double );

int main(void)
{
	int M,A,B; // �ֱ��ʾ�Լ��ͼ���
	double C; // ����һ�������� 
	int X,Y;
	int flag = 0; // ���޽�ı�־λ 
	scanf("%d %d %d",&M, &X, &Y);
	
	for (A = 99; A >= 10; A--) 
	{
		// �����ҵ�ֵB
        B = (A%10)*10 + A/10;
       	C = abs(A-B) * 1.0/X;
        if (B == C*Y) 
		{
            flag = 1;
            break;
        }
    }
	// ����н⣬���չ������ 
	if (1 == flag)
	{
		printf("%d",A);
		print(M,A);
		print(M,B);
		print(M,C);
	 } 
	 // ��������޽�
	 else
	 {
	 	printf("No Solution\n");
	  } 
	
	return 0;
 }
  
void print(int M, double N) 
{
    if (M == N) 
		printf(" Ping");
    else if (M < N) 
		printf(" Cong");
    else 
		printf(" Gai");
}

