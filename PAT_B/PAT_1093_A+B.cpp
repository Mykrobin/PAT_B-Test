// PAT_1093_A+B

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	 // 一定注意数组长度限制 
	char A[1000001];
	char B[1000001];
	char *C;
	int *Flag;
	int len, len_A, len_B;
	int i, j;
	
	//  输入AB字符串，并计算长度 
	gets(A);
	gets(B);
	len_A = strlen(A);
	len_B = strlen(B);
	len = len_A+len_B;
	C = (char *)malloc(sizeof(char)*(len));
	// 设置一个标志位，判断是否输出该位  空间换时间 
	Flag = (int *)malloc(sizeof(int)*(len));
	
	// 拼接AB字符串
	sprintf(C, "%s%s", A, B); 
	
	// 将标志位均置为 1
	for (i=0; i<len; i++) 
	{
		Flag[i] = 1;
	}
	
	for (i=0; i<len; i++)
	{
		if (Flag[i]==0)
			continue;
		for (j=i+1; j<len; j++)
		{
			if (C[i] == C[j])
			{
				Flag[j] = 0;
			}
		}
	}
	
	for (i=0; i<len; i++) 
	{
		if (Flag[i] == 1)
			printf("%c",C[i]);
	}
	
	free(C);
	free(Flag);
	
	return 0;
}
