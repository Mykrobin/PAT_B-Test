// PAT_1048_Encryption
// ����BUG 
# include <stdio.h>
# include <math.h>
# include <string.h>
# define Max_Size 110

int main(void)
{
	char A[Max_Size];
	char B[Max_Size];
	int len1, len2, min, max;
	int i, Num, ans;
	
	scanf("%s",A);
	scanf("%s",B);

	len1 = strlen(A);
	len2 = strlen(B);
	
	min = (len1>len2)?len2:len1;
	max = (len1>len2)?len1:len2;
	
	// ��������ַ�������Ĳ���,������ֱ����� 
	for (i=0; i<abs(len1-len2); i++) 
	{
		Num = max-i;
		// A �� 
		if (len1 > len2) 
		{
			// ����λ
			if (Num%2==1) 
			{
				printf("%c",A[i]);
			}
			// ż��λ 
			else
			{
				printf("%d",'0'-A[i]+10);		
			}		
		}
		// B�� 
		else if (len1 < len2) 
		{
			printf("%c",B[i]);
		}
	}
	// ͳһ���� 
	if (len1 > len2) 
	{
		strcpy(A,A+len1-len2);
	}
	else if (len1 < len2) 
	{
		strcpy(B,B+len2-len1);
	}

	// ��ʼ����
	// �ж���żλ��	
	for (i=0; i<min; i++) 
	{
		Num = min-i;
		// ż��λ 
		if (Num%2 == 0)
		{
			if (B[i]-A[i]<0)
			{
				printf("%d",B[i]-A[i]+10);
			}
			else
				printf("%d",B[i]-A[i]);
		 } 
		else if (Num%2 == 1)
		{
			ans = A[i]+B[i]-'0'-'0';
			ans = ans%13;
			if (ans<=9&&ans>=0)
			{
				printf("%d",ans);
			}
			else if (ans>=10 & ans<=12)
			{
				switch(ans)
				{
					case 10:printf("J");break;
					case 11:printf("Q");break;
					case 12:printf("K");break;
					default:break;
				}
			}
		}
	}
	
	return 0;
}
