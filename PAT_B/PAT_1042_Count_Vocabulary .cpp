//  PAT_1042_Count_Vocabulary 

# include <stdio.h>
# include <string.h>

int main(void)
{
	int Voc[26];
	int num, max;
	char S[1001];
	int i;
	
	gets(S);
	
	for (i=0; i<26; i++)
	{
		Voc[i]=0;
	}
	
	i=0;
	while (S[i] != '\0')
	{
		if (S[i]>='a' && S[i]<='z')
		{
			num = S[i] - 'a';
			Voc[num]++;
		}
		else if (S[i]>='A' && S[i]<='Z')
		{
			num = S[i] - 'A';
			Voc[num]++;
		}
		i++;
	}

	max = 25;
	for (i=24; i>=0; i--)
	{
		if (Voc[i] >= Voc[max])
		{
			max = i;
		}
	}
	
	printf("%c %d",'a'+max,Voc[max]);
	
	return 0;
}
