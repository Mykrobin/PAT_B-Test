//  换个格式输出整数 （15 分）
//  让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 
//  来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。
//  例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。

# include <stdio.h>

int main(void)
{
	int val;   //  记录输入的数据
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
