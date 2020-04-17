# include <stdio.h>
# include <string.h>
# define Max_Size 1010

int Is_Hui(char n[])
{
	int len = strlen(n);
	int i;

	for (i=0; i<len/2; i++)
	{
		if (n[i] != n[len-1-i])
			return 0;
	}
	return 1;
}
void reservesA2B(char A[], char B[])
{
	int len = strlen(A);
	int i;

	for (i=0; i<len; i++)
	{
		B[i] = A[len-1-i];
	}
	return;
}
void AaddB(char A[], char B[])
{
	int flag = 0;// 进位标志
	int len = strlen(A);
	int sum;
	int i;

	for (i=len-1; i>=0; i--)
	{
		sum = A[i]+B[i]-'0'-'0'+flag;
		A[i] = sum%10 + '0';
		flag = sum/10;
	}
	if (flag != 0)
	{
		memmove(A+1,A,len+1);
		A[0] = flag + '0';
	}
	return;
}

int main(void)
{
	int i;
	char A[Max_Size] = {'0'},B[Max_Size] = {'0'};
	gets(A);

	for (i=0; i<10 && !Is_Hui(A); i++)
	{
		reservesA2B(A, B);
		printf("%s + %s = ",A, B);
		AaddB(A, B);
		printf("%s\n",A);
	}
	if(i == 10)
        printf("Not found in 10 iterations.");
    else
		printf("%s is a palindromic number.", A);
	

	return 0;
}
