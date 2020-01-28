//  PAT_1029_Broken_Key_02

#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[85], s2[85];
	int i, j;
	int table[130]={0};
	gets(S1);
	gets(S2);
	// 转化为大写 
	for(i=0;i<strlen(s1);i++)
	{
		 if(s1[i]>='a'&&s1[i]<='z')
		 	s1[i]=s1[i]-32; 
	}
	for(i=0;i<strlen(s2);i++)
	{	
		 if(s2[i]>='a'&&s2[i]<='z')
			 s2[i]=s2[i]-32; 
	}
	 
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<strlen(s2);j++)
		{ 
	  	   if(s1[i]==s2[j])
		    	break;  
		}
		if(j==strlen(s2)  &&  table[s1[i]]==0)
		{
			table[s1[i]]=1;
			printf("%c",s1[i]);
		}
	}
	printf("\n");
	
	return 0;
}

