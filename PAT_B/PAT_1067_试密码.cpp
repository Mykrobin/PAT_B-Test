// 1067 ������ 
// Ҫ�㣺1. ��Ŀ�е�����û�пո񣬵����û�����ʱ���ܻ����ո� 
//       2. ��׼����ĳ�����20�� �����û������������ܻ����20 
# include <stdio.h>
# include <stdlib.h> 
# include <string.h>

int main(void)
{
	char PassW[22], temp[52];
	int num;
	// �����׼�����Լ������ԵĴ��� 
	scanf("%s %d",PassW,&num);
	getchar();
	while (1)
	{
		gets(temp);
		num--; 
		// ���������һ��# ��ֹͣ����
		if (0 == strcmp("#", temp)) 
		{
			break;
		}
		// �Ƚ��ַ����Ƿ����
		// ������ 
		if (0 == strcmp(PassW, temp) && num>=0)
		{
			printf("Welcome in");
			// ����ѭ�� 
			break;
		}
		else if (0 != strcmp(PassW, temp) && num>=0)
		{
			printf("Wrong password: %s\n",temp);
			// �����þ����˻����� 
			// printf("num === %d\n",num);
			if (0 == num)
			{
				printf("Account locked");
				break;
			}		
		} 
	}
	
	return 0;
}
