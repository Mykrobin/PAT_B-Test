// 1069 微博转发抽奖
# include <stdio.h>
# include <string.h>
# define Max 1000
int main(void)
{
	char Str[Max][30]; // 存储已经中奖的名称 
	char str_s[30];
	int i, j, M, N, S, num=0;
	// int flag_0 = 0; // 记录最终是否有人中奖
	int flag_1 = 0; // 记录该用户是否中过奖 
	
	scanf("%d %d %d",&M, &N, &S);
	getchar();
	// 如果转发人数少于初始中间编号，则不会有人中奖 
	if (M<S)
	{
		printf("Keep going...\n");
		return 0;
	}
	
	for (i=1; i<=M; i++)
	{
		flag_1 = 0;
		gets(str_s);
		// 有可能中奖的编号 
		if (S == (i>S?i%N:i))
		{
			//  判断是否中过奖				
			for (j=0; j<num; j++)
			{
				if (0 == strcmp(Str[j], str_s))
				{	
					flag_1 = 1;
					break;
				} 
			}
			// 中过奖
			if (1 == flag_1) 
			{
				M--;
				i--;
			}
			else // 没中过 
			{
				puts(str_s);
				// 记录该中奖用户
				strcpy(Str[num++],str_s); 
			} 
		}
	}
		
	return 0;
}
