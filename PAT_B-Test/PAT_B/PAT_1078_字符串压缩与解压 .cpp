// PAT_1078_�ַ���ѹ�����ѹ 

# include <stdio.h>
# include <string.h>

int main(void)
{
	char ch[1010];
	char Test;
	char a;
	int flag = 0;
	int sum = 0; // ��¼�ַ��ĸ��� 
	int i = 0; // ����ch �ı仯

	// �����ַ��� 
	Test = getchar();
	getchar();
	gets(ch);	
	
	while (ch[i] != '\0' && Test == 'D')
	{
		sum = 0;
		// ����������֣���ת��Ϊ�ַ� 
		if (ch[i]>='0' && ch[i]<='9')  
		{
			sum = ch[i] - '0';
			while (ch[i+1]>='0' && ch[i+1]<='9')
			{
				sum *= 10;
				i++;
				sum += ch[i] - '0';
			}	
			sum--;
			// ���
			while(sum != 0) 
			{
				printf("%c",ch[i+1]);
				sum--;
			}
		}
		else
		{
			printf("%c",ch[i]);
		}
			
		i++;
	}
	
	while (ch[i] != '\0' && Test == 'C')
	{
		sum = 1;
		a = ch[i];
		while (ch[i] == ch[i+1] && ch[i]!='\0')
		{
			sum++;
			i++;
		} 
		if (1 != sum)
			printf("%d%c",sum,a);
		else
			printf("%c",a);	
		i++;
	}
	
	return 0;
}
