//  1009 ˵���� ��20 �֣�
//  ����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
//  ʱ��  2019��2��6�� 

# include <stdio.h> 
# include <stdlib.h>

int main(void)
{
	char S[100];
	char ch;
	int i, j;
	int n; // ��¼�ַ����ĳ��� 
	int new_head, head, tail;
	
	for (i=0; i<100; i++)	
	{
		S[i] = getchar();
		if (S[i] == 10) // ���з���ASCII��ֵΪ 10  ��������ֹͣ���� 
			break;
	}
	n = i;
	new_head = 0;
	
	for (i=0; i<n; i++)	
	{
		tail = i;
		//  �����ȥ���һ��֮��������ַ� 
		if (S[i] == 32)
		{
			tail--;
			head = new_head;
			for (j=head; j<tail; j++)
			{
				ch = S[head];
				S[head] = S[tail];
				S[tail] = ch;
				head++;
				tail--;
				if (head>=tail)
				  break;
			 }
			 new_head = i+1;
		}
		//  �������һ������ 
		if (i == n-1) 
		{
			tail = n-1;
			head = new_head;
			for (j=head; j<tail; j++)
			{
				ch = S[head];
				S[head] = S[tail];
				S[tail] = ch;
				head++;
				tail--;
				if (head>=tail)
				  break;
			 }
		}
	} 
	
	for (i=n-1; i>=0; i--)
	{
		printf("%c",S[i]);
	}
	
	return 0;
}
