//  Get the number to Chinese
//  ������������ֵĺͲ��������ĺ���ƴ�� 
//  ��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

# include <stdio.h>

int main(void)
{
	//  ��¼��������������
	char NUM[1000];
	//  ��һ��������¼��λ֮��
	int sum = 0;
	//  ��ʾÿһλ��Ӧ�ĺ���ƴ�� 
	//  ������ switch ��������������
	//  ��һ����������ʾ�ֽ�������
	int flag[4] = {-1, -1, -1, -1};
	int i = 0;
	
	scanf("%s",NUM);  // ��һ���ַ�����¼�������� 
	//  ���ַ���ת��Ϊ������ʵ�ʲ��ò����� �����
	while (NUM[i] != '\0')
	{
		sum += NUM[i] - '0';
		i++;
	}
	//  ��sumת��Ϊ����ƴ��
	//  �����λ�������ζ�ȡ 
	//  �˴�����ʹ�õ���sum ��λ������ ������ԭ������������λ��i 
	
	//  ����sum ��ÿһλ ����һ����������ʾ�� 
	//  ��123 �������б�ʾΪ 3 2 1 -1 
	i = 0;
	while (sum >= 10)
	{
		flag[i] = sum%10;
		sum = sum/10;
		i++;
	 } 
	sum = sum - (sum/10);
	flag[i] = sum;
//	printf("%d\n",i);
//	printf("%d %d %d %d",flag[0], flag[1], flag[2], flag[3]);
	
	for (i=3; i>=0; i--)
	{
		if (flag[i] != -1)
		{
			// ע�� �˴���flag[i] ���������� �����÷��ű�ʾ 
		switch (flag[i])
		{
			case 1:
				printf("yi");break;
			case 2:
				printf("er");break;
			case 3:
				printf("san");break;
			case 4:
				printf("si");break;
			case 5:
				printf("wu");break;
			case 6:
				printf("liu");break;
			case 7:
				printf("qi");break;
			case 8:
				printf("ba");break;
			case 9:
				printf("jiu");break;
			case 0:
				printf("ling");break;
			default:
				break;
		}
		if (i>0) 
			printf(" ");
		}
		
	}
	
	return 0;
}
