// PAT_1093_A+B

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	 // һ��ע�����鳤������ 
	char A[1000001];
	char B[1000001];
	char *C;
	int *Flag;
	int len, len_A, len_B;
	int i, j;
	
	//  ����AB�ַ����������㳤�� 
	gets(A);
	gets(B);
	len_A = strlen(A);
	len_B = strlen(B);
	len = len_A+len_B;
	C = (char *)malloc(sizeof(char)*(len));
	// ����һ����־λ���ж��Ƿ������λ  �ռ任ʱ�� 
	Flag = (int *)malloc(sizeof(int)*(len));
	
	// ƴ��AB�ַ���
	sprintf(C, "%s%s", A, B); 
	
	// ����־λ����Ϊ 1
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
