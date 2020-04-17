// PAT_1043_PATest

# include <stdio.h> 
# include <string.h> 

int main(void)
{
	char S[10010];
	int i = 0;
	int P=0, A=0, T=0, e=0, s=0, t=0;

	gets(S);
	
	while (S[i] != '\0')
	{
		if (S[i] == 'P')
		{
			P++;
		}
		else if (S[i] == 'A')
		{
			A++;
		}
		else if (S[i] == 'T')
		{
			T++;
		}
		else if (S[i] == 'e')
		{
			e++;
		}
		else if (S[i] == 's')
		{
			s++;
		}
		else if (S[i] == 't')
		{
			t++;
		}
		
		i++;
	}
	
	while (P+A+T+e+s+t != 0)
	{
		if (P!=0)
		{
			printf("P");
			P--;
		}
		if (A!=0)
		{
			printf("A");
			A--;
		}
		if (T!=0)
		{
			printf("T");
			T--;
		}
		if (e!=0)
		{
			printf("e");
			e--;
		}
		if (s!=0)
		{
			printf("s");
			s--;
		}
		if (t!=0)
		{
			printf("t");
			t--;
		}
	}
	
	return 0;
}
