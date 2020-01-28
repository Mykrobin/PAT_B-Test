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

// ������תΪ���� 
void Mars2Earth()
{
	char AS[4]={""}, BS[4]={""};  
	int num1=0, num2=0;
	int len, i;
	len = strlen(S); 
	// �ж�λ��������ַ������ȴ��� 4������ʮλ 
	// BS �洢ǰ��λ 
	strncpy(BS, S, 3);
	if (len > 4)
		strcpy(AS, S+4);	
	// ת��
	for (i=1; i<=12; i++)
	{
		if (!strcmp(BS, a[i]) || !strcmp(AS, a[i]))
			num2 = i;
		if (!strcmp(BS, b[i]))
			num1 = i;
	} 
	
	printf("%d",num1*13+num2);
}

// ��������תΪ������ 
void Earth2Mars(int num)
{
	// �ж�ʮλ�Ƿ���� 
	if (num/13 != 0)
		printf("%s",b[num/13]);
	// ���ƿո����� 
	if (num%13 != 0 && num>13)
		printf(" ");
	// �жϸ�λ�Ƿ����		
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
    	// ���ݵ�һλ�ж��ǵ������ֻ��ǻ����� 
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
