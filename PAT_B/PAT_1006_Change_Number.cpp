//  ������ʽ������� ��15 �֣�
//  ����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n 
//  ����ʾ��Ϊ��ĸ�λ���� n��<10����������ʽ�������һ�������� 3 λ����������
//  ���� 234 Ӧ�ñ����Ϊ BBSSS1234����Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��

# include <stdio.h>

int main(void)
{
	int val;   //  ��¼���������
	scanf("%d",&val);
	int Hun = 0, Ten = 0, Num = 0; 
	int i;
	
	if (val >= 100)
	{
		Hun = val/100;
		Ten = (val - Hun*100)/10;
		Num = val % 10;
	}
	else if (val >= 10)
	{
		Ten = val/10;
		Num = val%10;
	}
	else
		Num = val;
		
	for (i=0; i<Hun; i++)
	{
		printf("B");
	}
	for (i=0; i<Ten; i++)
	{
		printf("S");
	}
	for (i=0; i<Num; i++)
	{
		printf("%d",i+1);
	}
	
	return 0;
}
