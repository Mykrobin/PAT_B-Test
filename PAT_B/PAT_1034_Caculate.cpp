//  PAT_1034_Caculate

# include <stdio.h>
# include <math.h>

int Max_Common(int , int ) ;
void printf_Std(int , int ); // ��׼��ʽ��� 

int main(void)
{
	int a1,a2,b1,b2;
	int n1, n2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	
	// ��׼��ʽ���
	// a1/b1 �Ǹ��ٷ���
	// a1 b1 ֮�������Լ�� 
	n1 = Max_Common(abs(a1),abs(b1));
	n2 = Max_Common(abs(a2),abs(b2));
	// �����������ȫ��ת��Ϊ��� 
	a1 = a1/n1;
	a2 = a2/n2;
	b1 = b1/n1;
	b2 = b2/n2;
	
	if (abs(a1) > abs(b1)) 
	{
		// ����Ǹ��������������
		if (a1%b1 == 0)
		if (a1*b1 >= 0)
		{
			printf("%d %d/%d ",a1/b1,a1%b1,b1);	
		}
		else
		{
			printf("(%d %d/%d)",a1/b1, abs(a1%b1), b1);
		}
	}
	else
	{
		// ����Ǹ��������������
		if (a1*b1 >= 0)
		{
			printf("%d/%d ",a1%b1,b1);	
		}
		else
		{
			printf("(-%d/%d) ",abs(a1), abs(b1));
		}
	} 
	
	return 0;
}

// �������������Լ�������û�����Լ��������1
int Max_Common(int a, int b)
{
	// �ҳ�ab�������� 
	int r;
	while (r = a%b)
	{
		a = b;
		b = r;
	}
	
	return b;
}

void printf_Std(long n, long d)
{
    if(d == 0) { printf("Inf"); return; }

    /* record the sign and make them positive */
    int inegative = 1;
    if(n < 0) { n = -n; inegative *= -1; }
    if(d < 0) { d = -d; inegative *= -1; }

    /* reduce the fraction */
    long gcd = Max_Common(n, d);
    n /= gcd;
    d /= gcd;

    /* print */
    if(inegative == -1)  printf("(-");
    if(n / d && n % d)   printf("%ld %ld/%ld", n / d, n % d, d); /* mixed fractions */
    else if(n % d)       printf("%ld/%ld", n % d, d);            /* proper fractions */
    else                 printf("%ld", n / d);                   /* integers */
    if(inegative == -1)  printf(")");
}
