// PAT_1040_Count_PAT

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void)
{
	char Ch[100001];
	int len; // 长度 
	int i,j ,k;
	int flag_1=0, flag_2=0;
	int flag_3=0, flag_4=0;
	int num_P = 0, num_A=0; 
	int a=0, t=0;
	int *A, *T; 
	long long sum = 0;
	// 输入字符串 
	gets(Ch);
	
	len = strlen(Ch);
	// 把字符串全部变为有效
	for (i=0; i<len; i++)
	{
		// P 必须出现在最前端 
		if (flag_1 != 1)
		{
			if (Ch[i] != 'P')
			{
				Ch[i] = '0';
			}
			else
			{
				// P 首端合法 
				flag_1 = 1;
			}	
		}
		else if (flag_2 != 1) 
		{
			if (Ch[i] == 'T')
			{
				Ch[i] = '0';
			}
			else if (Ch[i] == 'A')
			{
				// A 首端合法 
				flag_2 = 1;
			}	
		}
		else
			break;
	}

   //  进行尾端检测 
		for (i=len-1; i>=0; i--)
		{
			// T 必须出现在最尾端 
			if (flag_3 != 1)
			{
				if (Ch[i] != 'T')
				{
					Ch[i] = '0';
				}
				else
				{
					// P 首端合法 
					flag_3 = 1;
				}	
			}
			else if (flag_4 != 1) 
			{
				if (Ch[i] == 'P')
				{
					Ch[i] = '0';
				}
				else if (Ch[i] == 'A')
				{
					// A 尾端合法 
					flag_4 = 1;
				}	
			}
			else
				break;
		}
		
	// 统计合法P的个数
	for (i=0; i<len; i++)
	{
		if (Ch[i] == 'P')
		{
			num_P++;
		}
		else if (Ch[i] == 'A')
		{
			num_A++;
		}
	}
	// 动态分配A T的 内存
	A = (int *)malloc(sizeof(int)*num_P);
	T = (int *)malloc(sizeof(int)*num_A);
	// 统计T 和A 的数量, 并写入数组 
	i = 0;
	j = 0;
	for (k=0; k<len; k++) 
	{
		if (Ch[k] == 'P')
		{
			t++;
		}
		else if (Ch[k] == 'A')
		{
			a++;
			T[j] = t;
			j++;
		}
		else if (Ch[k] == 'T')
		{
			A[i] = a;
			i++;
		}
	}	
	//  进行运算
	for (i=0; i<num_P; i++) 
	{
		for (j=0; j<A[i]; j++)
		{
			sum += T[j];
			sum %=  1000000007;
		}
	}
	printf("%ld\n",sum);
	
	return 0;
}
