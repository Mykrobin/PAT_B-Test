// PAT_1024_��ѧ������ 
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
	// ��������ֵķ��ţ������������ 
	if (S[0] == '-')
		printf("%c",S[0]); 
	while (S[i]!='E') i++;
	// ��ȡE���������
	strcpy(S_num, S+i+1); 
	// puts(S_num);
	// ת��Ϊ�������� 
	exp = atoi(S_num);
	// printf("%d\n",exp);
	// ָ�����������ۣ�����ʱ 
	if (exp<0) 
	{
		printf("0.");
		// ��С����������0
		for (j=exp; j<-1; j++) 
			printf("0"); 
		// ��������ŵ�E֮��ĳ�С��������ַ�
		for (i=1; S[i]!='E'; i++) 
		{
			if (S[i]!='.')
				printf("%c",S[i]);
		}
	}
	// ָ��Ϊ��ʱ 
	else
	{
		// ��¼С���㵽E֮����ַ�������
		for (i=2; S[i]!='E'; i++)
		{
			if (S[i]!='.')
				len++;
		 } 
		 // ���� 
		 // printf("%d\n",len);
		 // �Ƚ� ָ��exp �� ����len �Ĵ�С
		 // exp>len ������㣬������� С���� 
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
		 // exp < len �ڵ�expλ���С���� 
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
