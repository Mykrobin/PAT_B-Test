// 1052 卖个萌
# include <stdio.h>
# include <stdlib.h>
# define L 20

int hand=0, eye=0, mou=0;
char c,hands[L][L],eyes[L][L],mouse[L][L];
int h1,h2,e1,e2,m;
// 输入可用字符
void input_ch(void);
void output_ch(int);
int is_leagel(void);
void output(void); 

int main(void)
{
	int i,k;
	input_ch();
	scanf("%d",&k);
	output_ch(k);
//	output();  //查看输入内容 
	return 0;
}
/*
void output(void)
{
	int i;
	
	for (i=0; i<hand; i++)
	{
		printf("%s",hands[i]);
	}
	printf("\n");
	
	for (i=0; i<eye; i++)
	{
		printf("%s",eyes[i]);
	}
	printf("\n");
	
	for (i=0; i<mou; i++)
	{
		printf("%s",mouse[i]);
	}
	printf("\n");
}
*/
int is_leagel(void)
{
	if (h1>hand || h2>hand)
		return 0;
	else if (e1>eye || e2>eye)
		return 0;
	else if (m > mou)
		return 0;
	else if (h1<1 || h1<1 || e1<1 || e2<1 || m<1)
		return 0;
	else return 1;
}

void output_ch(int k)
{
	int i;
	
	for (i=0; i<k; i++)
	{
		scanf("%d %d %d %d %d",&h1,&e1,&m,&e2,&h2);
		if (!is_leagel())
			printf("Are you kidding me? @\\/@\n");
		else
		{
			printf("%s(%s%s%s)%s\n",hands[h1-1],eyes[e1-1],mouse[m-1],eyes[e2-1],hands[h2-1]);
		}	
	}
}

void input_ch(void)
{
	while ((c = getchar()) != '\n')
	{
		if (c == '[')
		{
			scanf("%[^]]",hands[hand++]);
		}
	}
	
	while ((c = getchar()) != '\n')
	{
		if (c == '[')
		{
			scanf("%[^]]",eyes[eye++]);
		}
	}
	
	while ((c = getchar()) != '\n')
	{
		if (c == '[')
		{
			scanf("%[^]]",mouse[mou++]);
		}
	}
}
