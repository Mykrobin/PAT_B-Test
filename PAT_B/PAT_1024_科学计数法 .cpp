// PAT_1024_科学计数法 
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# define Max 100000

int main(void)
{
	char S[Max], S_num[Max]; 
	int i=0, j=0, exp, len=0;
	gets(S);
	// puts(S);
	// 输出该数字的符号（数不必输出） 
	if (S[0] == '-')
		printf("%c",S[0]); 
	while (S[i]!='E') i++;
	// 提取E后面的数字
	strcpy(S_num, S+i+1); 
	// puts(S_num);
	// 转化为整型数字 
	exp = atoi(S_num);
	// printf("%d\n",exp);
	// 指数分正负讨论，负数时 
	if (exp<0) 
	{
		printf("0.");
		// 在小数点后面输出0
		for (j=exp; j<-1; j++) 
			printf("0"); 
		// 输出正负号到E之间的除小数点外的字符
		for (i=1; S[i]!='E'; i++) 
		{
			if (S[i]!='.')
				printf("%c",S[i]);
		}
	}
	// 指数为正时 
	else
	{
		// 记录小数点到E之间的字符串长度
		for (i=2; S[i]!='E'; i++)
		{
			if (S[i]!='.')
				len++;
		 } 
		 // 长度 
		 // printf("%d\n",len);
		 // 比较 指数exp 和 长度len 的大小
		 // exp>len 在最后补零，不用输出 小数点 
		 if (exp >= len) 
		 {
		 	for (i=1; S[i]!='E'; i++)
		 	{
		 		if (S[i]!='.')
		 			printf("%c",S[i]);
			 }
			 for (i=0; i<exp-len; i++)
			 	printf("0");
		 }
		 // exp < len 在第exp位输出小数点 
		 else
		 {
		 	 for (i=1; S[i]!='E'; i++)
			 {
			 	if (S[i] != '.')
			 		printf("%c",S[i]);
			 	if (i==exp+2)
			 		printf(".");
		     }
			  
		 } 
	}
	 
	return 0;
}
