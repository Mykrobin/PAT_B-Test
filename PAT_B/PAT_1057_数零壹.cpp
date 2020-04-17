// PAT_1057_ÊıÁãÒ¼

#include <stdio.h>
#include <string.h>
int main()
{
    int A0=0, A1=0, i;
    int len;
    long N = 0;
    char S[10010];
    
    gets(S);
    len = strlen(S);    

	for (i=0; i<len; i++)
	{
		if (S[i]>='a'&&S[i]<='z')
			N += S[i]-'a'+1;
		else if (S[i]>='A'&&S[i]<='Z')
			N += S[i]-'A'+1;
	}
    
    while (N!=0)
    {
    	if (N%2 == 0)
    		A0 ++;
    	else
    		A1 ++;
    	N /= 2;
	}
	
	printf("%d %d\n",A0, A1);

    return 0;
}
