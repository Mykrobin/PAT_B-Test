//  1009 说反话 （20 分）
//  给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
//  时间  2019年2月6日 

# include <stdio.h> 
# include <stdlib.h>

int main(void)
{
	char S[100];
	char ch;
	int i, j;
	int n; // 记录字符串的长度 
	int new_head, head, tail;
	
	for (i=0; i<100; i++)	
	{
		S[i] = getchar();
		if (S[i] == 10) // 换行符的ASCII码值为 10  当遇到就停止输入 
			break;
	}
	n = i;
	new_head = 0;
	
	for (i=0; i<n; i++)	
	{
		tail = i;
		//  处理出去最后一组之外的所有字符 
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
		//  处理最后一个单词 
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
