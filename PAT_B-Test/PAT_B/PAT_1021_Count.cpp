//  PAT�Ҽ�
//  PAT_1021_Count
//  ����������ݰ�λ��֣������0-9���ֵĴ���

# include <stdio.h> 
# include <stdlib.h>
# include <string.h>

int main(void)
{
	char ch[1001]; // ��¼���������
	int i, len;
	int Count[10] = {0};
	
	// �����ַ���
	gets(ch);
	len = strlen(ch);
	
	//  ͳ��0-9���ֵĴ��� 
	for (i=0; i<len; i++)
	{
		Count[(ch[i]-'0')]++;
	}
	
	for (i=0; i<10; i++)
	{
		if (Count[i] != 0) 
			printf("%d:%d\n",i,Count[i]);
	}
	
	return 0;
}
