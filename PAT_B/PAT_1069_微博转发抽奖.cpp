// 1069 ΢��ת���齱
# include <stdio.h>
# include <string.h>
# define Max 1000
int main(void)
{
	char Str[Max][30]; // �洢�Ѿ��н������� 
	char str_s[30];
	int i, j, M, N, S, num=0;
	// int flag_0 = 0; // ��¼�����Ƿ������н�
	int flag_1 = 0; // ��¼���û��Ƿ��й��� 
	
	scanf("%d %d %d",&M, &N, &S);
	getchar();
	// ���ת���������ڳ�ʼ�м��ţ��򲻻������н� 
	if (M<S)
	{
		printf("Keep going...\n");
		return 0;
	}
	
	for (i=1; i<=M; i++)
	{
		flag_1 = 0;
		gets(str_s);
		// �п����н��ı�� 
		if (S == (i>S?i%N:i))
		{
			//  �ж��Ƿ��й���				
			for (j=0; j<num; j++)
			{
				if (0 == strcmp(Str[j], str_s))
				{	
					flag_1 = 1;
					break;
				} 
			}
			// �й���
			if (1 == flag_1) 
			{
				M--;
				i--;
			}
			else // û�й� 
			{
				puts(str_s);
				// ��¼���н��û�
				strcpy(Str[num++],str_s); 
			} 
		}
	}
		
	return 0;
}
