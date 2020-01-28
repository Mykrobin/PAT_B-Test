//  �����Բ��� ��20 �֣�
//  �á������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
//  �ָ�������������N������㲻����N���������������Եĸ�����

# include <stdio.h>
# include <math.h>

int Prime(int n);

int main(void)
{
	int n;
	int count = 0;
	scanf("%d",&n);
	
	for (int i=2; i<=n-2; i++)	
	{
			if (Prime(i) && Prime(i+2))
				count++;
	}
	printf("%d",count);
	return 0;
}

int Prime(int n)
{
	int i = 2;
	
	for (i; i<=sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
