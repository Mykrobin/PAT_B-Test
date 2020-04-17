// PAT_1081_Check_PassWord
/*
如果密码合法，输出Your password is wan mei.；
如果密码太短，不论合法与否，都输出Your password is tai duan le.；
如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
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
		
		//长度不合法 
		if (flag_len == 0) 
		{
			printf("Your password is tai duan le.\n");
		}
		// 长度合法
		else
		{
			// 遍历密码 
			for (i=0; i<len; i++)
			{
				// 字符合法 
				if (S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z'||S[i]>='0'&&S[i]<='9'||S[i]=='.') 
				{
					flag_L = 1;
					// 含有字母的判断 
					if (S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z')
						flag_V = 1;
					// 含有数字的判断 
					if (S[i]>='0'&&S[i]<='9') 
						flag_N = 1; 
					if (i == len-1) 
					{
						// 不含有数字 
						if (flag_N == 0)
						{
							printf("Your password needs shu zi.\n");
							break; 
						}
						// 不含有字母
						if (flag_V == 0)
						{
							printf("Your password needs zi mu.\n");
							break; 
						} 
					}
				}
				// 存在非法字符 
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

