// PAT_1044_Mars

# include <stdio.h>
# include <string.h>
# include <stdlib.h> 
# define Max 10

char *a[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly",
    "aug", "sep", "oct", "nov", "dec"};
char *b[] = {"***","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo",
    "syy", "lok", "mer", "jou"};
char S[Max];

// 火星文转为地球 
void Mars2Earth()
{
	char AS[4]={""}, BS[4]={""};  
	int num1=0, num2=0;
	int len, i;
	len = strlen(S); 
	// 判断位数，如果字符串长度大于 4，则有十位 
	// BS 存储前三位 
	strncpy(BS, S, 3);
	if (len > 4)
		strcpy(AS, S+4);	
	// 转化
	for (i=1; i<=12; i++)
	{
		if (!strcmp(BS, a[i]) || !strcmp(AS, a[i]))
			num2 = i;
		if (!strcmp(BS, b[i]))
			num1 = i;
	} 
	
	printf("%d",num1*13+num2);
}

// 地球文字转为火星文 
void Earth2Mars(int num)
{
	// 判断十位是否输出 
	if (num/13 != 0)
		printf("%s",b[num/13]);
	// 控制空格的输出 
	if (num%13 != 0 && num>13)
		printf(" ");
	// 判断个位是否输出		
	if (num%13 || num==0)
		printf("%s",a[num%13]);	
}

int main(void)
{
    int N, i;
    scanf("%d",&N);
    getchar();
    
    for (i=0; i<N; i++)
    {
    	gets(S);
    	// 根据第一位判断是地球数字还是火星文 
    	if (S[0]>='0' && S[0]<='9')
    	{
    		Earth2Mars(atoi(S));
		}
		else
			Mars2Earth();
		
		printf("\n");
	}

    return 0;
}
