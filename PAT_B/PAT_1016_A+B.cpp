// 1016 部分A+B （15 分）
# include <stdio.h>

int main(void)
{
	char A[11], B[11];
	int D_A, D_B, Sum;
	int N_A=0, N_B=0;  //  构造新的 Pa Pb 
	int L_A=0, L_B=0;  //  A B 的长度
	int i=0;
	scanf("%s",A);
	scanf("%d",&D_A);
	scanf("%s",B);
	scanf("%d",&D_B);
	
	while(A[i] != '\0')
	{
		if ((A[i]-'0') == D_A)
		{
			L_A++;
		}
		i++;
	}
	i=0;
	while(B[i] != '\0')
	{
		if ((B[i]-'0') == D_B)
		{
			L_B++;
		}
		i++;
	}
	//  计算 D_A  D_B
	for (i=0; i<L_A; i++) 
	{
		N_A = (N_A*10+D_A);
	} 
	
	for (i=0; i<L_B; i++) 
	{
		N_B = (N_B*10+D_B);
	} 
	Sum = N_A + N_B;
	
	printf("%d",Sum);
	
	return 0;
}
