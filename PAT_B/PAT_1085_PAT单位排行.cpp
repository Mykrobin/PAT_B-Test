// 1085 PAT单位排行
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 # include <ctype.h>
# define Max 10

typedef struct node{
	char S[10];
	int a=0;
	int b=0;
	int t=0;
}Name;

void str2lower(char * S)
{
	int len = strlen(S);
	int i;
	for (i=0; i<len; i++)
	{
		if (S[i]>='A' && S[i]<='Z')
			S[i] += ('a' - 'A');
	}
}

int Is_Appear(int len, Name name[Max], char Str[10])
{
	int i; 
	// 出现过
	 for (i=0; i<len; i++)
	 {
	 	if (0 == strcmp(name[i].S, Str))
	 	{
	 		printf("============\n");
	 		return 1;
		 }
	 }
	// 没有出现过 
	return 0;
}

int main(void)
{
	int N, i, Num, score;
	int k, j, len=0; // 记录 name 结构体的数量 
	char ch, str[10];
	Name name[Max];
	
	scanf("%d",&N); 
	getchar();
	
	for (i=0; i<N; i++)
	{
		scanf("%c%d%d%s",&ch, &Num, &score, str);
		// 转换为小写
		str2lower(str);
		// 判断是否出现过 
		if (Is_Appear(len,name,str))
		{
			len++;
			strcpy(name[len].S, str);
			if (ch == 'A')
				name[len].a += score;
			else if (ch == 'T')
				name[len].t += score;
			else
				name[len].b += score; 
			puts(name[len].S);
			printf("T = %d A = %d B = %d\n",name[len].t,name[len].a,name[len].b);
			printf("%d\n",len);
		}
	} 
	
	
	return 0;
}
