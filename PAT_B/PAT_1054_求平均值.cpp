# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// �ж������ǲ���һ������ 
/*1.��һλֻ���Ǹ��ź�����0-9������Ǹ��ţ����治��ֻ��0����-0���������0����������û��Ԫ�أ���0�����߸�С���㣻
  2.�ӵڶ�λ��ʼ�������Ԫ��ֻ����С�����������0-9��
  3.ֻ����һ��С���㣻
  4.С����ֻ�������3λ
����Ŀ��Ϊ123.�Ϸ���
*/
int Is_number(char *str)
{
	int flag = 1;
	float temp;
	int num=-1, count=0; // �ֱ��¼���һ��С�����λ�ú�С��������� 
	
	if (!(str[0]>='0'&&str[0]<='9' || str[0] == '-')) // ��һλ����0-9���߸��� �Ƿ� 
		flag = 0;
	else if (str[0] == '0') // ��һλ��0,�ڶ�λֻ����С�������û�� 
	{
		if (str[1]!='.' && str[1]!='\0')
			flag = 0;
	}
	else if (str[0] == '-') // ��һλΪ���� ����ֻ���� 0-9 
	{
		if (!(str[1]>'0'&&str[1]<='9' || str[1]=='0'&&str[2]=='.'))
			flag = 0;
	}
		
	if (flag == 1)
	{
		for (int i=1; i<strlen(str); i++)
		{
			if (!(str[i]>='0'&&str[i]<='9' || str[i]=='.'))
			{
				flag = 0;
				break;
			}
			
			if (str[i] == '.')
			{
				count++; // ��¼С����ĸ��� 
				num = i; // ��¼���һ��С�����λ�� 
			}	
		}
	}	 
	
	if (count > 1)
		  	flag = 0; // С�����������1�������Ϸ� 
	else if (count == 1)
	{
		if ((strlen(str) - num)>3)
			flag = 0;
	}
	
	if (flag == 1)
	{
		temp = atof(str);
		if (temp>1000 || temp<-1000)
			flag = 0;
	}
	
	return flag;
}

int main(void)
{
	int N; // �������ݵĸ���
	int M = 0; // ��¼������Ч�����ݸ��� 
	float sum = 0.0;
	char str[100];
	
	scanf("%d",&N);
	
	for (int i=0; i<N; i++)
	{
		scanf("%s",&str);
		if (Is_number(str))
		{
			M++; // ��¼��Ч����
			sum += atof(str);
		}
		else
		{
			printf("ERROR: %s is not a legal number\n",str);
		}
	}
		
	if (M == 0)
		printf("The average of 0 numbers is Undefined");
	else if (M == 1) 
		printf("The average of 1 number is %.2f",sum);
	else
		printf("The average of %d numbers is %.2f",M,sum/M);

		
	return 0;
}

