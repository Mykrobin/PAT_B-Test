//  1009 ˵���� ��20 �֣�
//  ����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

# include <stdio.h> 
# include <string.h>
// # include <stdlib.h>

int main(void)
{
	char S[100];
	int tail, head;
	
	// �����ַ��� 
	gets(S);
	
	int len = strlen(S);
	
	head = tail = len-1;
	
	for (int i=len-1; i>=0; i--)
	{
		if (S[i] == ' ' || i==0)
		{
			head = i;
			for (head; head<=tail;head++)
			{
				if (S[head] != ' ')
					printf("%c",S[head]);
			}
			tail = i;	
			if (i != 0)
				printf(" ");
		}	
	} 

	return 0;
}
