//  Guess Number from 3*n+1 -> 1

# include <stdio.h>

int main(void)
{
	int n;  // 输入一个整数
	int temp = 0; // 记录 n 转化到 1 总共进行了多少次的运算
	
	scanf("%d",&n);
	
	while (n != 1)
	{
		if (n%2 == 0)
		{
			n = n/2;
		}
		else
		{
			n = (3*n+1)/2;
		}
		temp++;
	 } 
	 
	 printf("%d\n",temp);
	
	return 0;
}
