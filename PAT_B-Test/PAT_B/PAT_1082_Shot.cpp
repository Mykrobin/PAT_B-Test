// PAT_1082_Shot 

# include <stdio.h>
# include <math.h>
# include <string.h>

int main(void)
{
	int N;
	char S[10];
	char Max[10], Min[10]; // ��¼��ѡ������ѡ 
	int Max_S, Min_S; // ��¼�����ĵľ��� 
	int flag = 0; // ��һλ��ѡ��� 
	int X, Y, New_S;
	scanf("%d",&N);
	
	while (N != 0)
	{
		scanf("%s",S);
		scanf("%d %d",&X, &Y);
		X = abs(X);
		Y = abs(Y);
		New_S = X*X + Y*Y;
		if (flag == 0)
		{
			strcpy(Max,S);
			strcpy(Min,S);
			Max_S = New_S;
			Min_S = New_S;
			flag = 1;
		}
		else
		{
			// �ֱ�������С�Ƚ� 
			if (New_S > Max_S)
			{
				strcpy(Max,S);
				Max_S = New_S;
			}
			else if (New_S < Min_S)
			{
				strcpy(Min,S);
				Min_S = New_S;
			}
		}	
		N--;		
	}
	
	printf("%s %s",Min, Max);
	
	
	return 0;
}
