// PAT_1018_���Ӽ�����

# include <stdio.h>

int win_lose(char A, char B)
{
	// ƽ�� 
	if (A==B)
		return 0;
	// ��ʤ�� 
	else if (A=='C'&&B=='J' || A=='J'&&B=='B' || A=='B'&&B=='C')
		return 1;
	// ��ʤ��
	else if (A=='J'&&B=='C' || A=='B'&&B=='J' || A=='C'&&B=='B')
		return -1; 
}

int main(void)
{
	int N; // ��¼��Ϸ���� 
	int flag;
	char ch1, ch2;
	int win=0, lose=0, draw=0;
	int A_C=0, A_J=0, A_B=0; 
	int B_C=0, B_J=0, B_B=0; 
	int Max_A=0,Max_B=0;
	
	scanf("%d",&N);
	getchar();
	while(N--)
	{
		scanf("%c",&ch1);
		getchar();
		scanf("%c",&ch2);
		getchar();
		
		// ��¼ʤ��ƽ���� 
		flag = win_lose(ch1, ch2);
		
		if (flag == 0)
			draw++;
		// ��ʤ�� 
		else if (flag == 1)
		{
			win++;
			switch(ch1) 
			{
				case 'B':A_B++;break;
				case 'J':A_J++;break;
				case 'C':A_C++;break;
				default:break;
			}
		} 
		else if (flag == -1)
		{
			lose++;
			switch(ch2)
			{
				case 'B':B_B++;break;
				case 'J':B_J++;break;
				case 'C':B_C++;break;
				default:break;
			}
		}
	}
	
	printf("%d %d %d\n",win, draw, lose);
	printf("%d %d %d\n",lose, draw, win);
	
	Max_A = (A_C>A_J)?A_C:A_J;
	Max_A = (Max_A>A_B)?Max_A:A_B;
	Max_B = (B_C>B_J)?B_C:B_J;
	Max_B = (Max_B>B_B)?Max_B:B_B;
	
	if (Max_A == A_B)
	{
		printf("B ");
	}
	else if (Max_A == A_C)
	{
		printf("C ");
	}
	else if (Max_A == A_J)
	{
		printf("J ");
	}
	
	if (Max_B == B_B)
	{
		printf("B");
	}
	else if (Max_B == B_C)
	{
		printf("C");
	}
	else if (Max_B == B_J)
	{
		printf("J");
	}
	
	return 0;
}
