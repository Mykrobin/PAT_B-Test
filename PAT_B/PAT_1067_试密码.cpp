// 1067 试密码 
// 要点：1. 题目中的密码没有空格，但是用户输入时可能会键入空格 
//       2. 标准密码的长度是20， 但是用户键入的密码可能会大于20 
# include <stdio.h>
# include <stdlib.h> 
# include <string.h>

int main(void)
{
	char PassW[22], temp[52];
	int num;
	// 读入标准密码以及允许尝试的次数 
	scanf("%s %d",PassW,&num);
	getchar();
	while (1)
	{
		gets(temp);
		num--; 
		// 如果仅输入一个# 则停止输入
		if (0 == strcmp("#", temp)) 
		{
			break;
		}
		// 比较字符串是否相等
		// 如果相等 
		if (0 == strcmp(PassW, temp) && num>=0)
		{
			printf("Welcome in");
			// 结束循环 
			break;
		}
		else if (0 != strcmp(PassW, temp) && num>=0)
		{
			printf("Wrong password: %s\n",temp);
			// 次数用尽，账户锁定 
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
