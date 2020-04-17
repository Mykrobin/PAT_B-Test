//  1009 说反话 （20 分）
//  给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

# include <stdio.h> 
# include <string.h>
// # include <stdlib.h>

int main(void)
{
	char S[100];
	int tail, head;
	
	// 读入字符串 
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
