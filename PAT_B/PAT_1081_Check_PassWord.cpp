// PAT_1081_Check_PassWord
/*
�������Ϸ������Your password is wan mei.��
�������̫�̣����ۺϷ���񣬶����Your password is tai duan le.��
������볤�ȺϷ��������ڲ��Ϸ��ַ��������Your password is tai luan le.��
������볤�ȺϷ�����ֻ����ĸû�����֣������Your password needs shu zi.��
������볤�ȺϷ�����ֻ������û����ĸ�������Your password needs zi mu.��
*/
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void)
{
	int n;
	int i;
	int len;
	char S[100];
	int flag_N=0, flag_V=0, flag_L=0, flag_len=0;
	
	scanf("%d",&n);
	getchar();
	while (n>0)
	{
		gets(S);
		len = strlen(S);
		flag_N=0, flag_V=0, flag_L=0;
		flag_len = len>=6?1:0;
		
		//���Ȳ��Ϸ� 
		if (flag_len == 0) 
		{
			printf("Your password is tai duan le.\n");
		}
		// ���ȺϷ�
		else
		{
			// �������� 
			for (i=0; i<len; i++)
			{
				// �ַ��Ϸ� 
				if (S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z'||S[i]>='0'&&S[i]<='9'||S[i]=='.') 
				{
					flag_L = 1;
					// ������ĸ���ж� 
					if (S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z')
						flag_V = 1;
					// �������ֵ��ж� 
					if (S[i]>='0'&&S[i]<='9') 
						flag_N = 1; 
					if (i == len-1) 
					{
						// ���������� 
						if (flag_N == 0)
						{
							printf("Your password needs shu zi.\n");
							break; 
						}
						// ��������ĸ
						if (flag_V == 0)
						{
							printf("Your password needs zi mu.\n");
							break; 
						} 
					}
				}
				// ���ڷǷ��ַ� 
				else
				{
					flag_L = 0;
					printf("Your password is tai luan le.\n");
					break;
				}
			}	
		} 
		
		if (flag_N==1 && flag_V==1 && flag_L==1 && flag_len == 1)
		{
			printf("Your password is wan mei.\n");
		}
		
		n--;
	}
	
	return 0;
}

