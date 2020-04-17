//  PAT_1084_Shulie
// 有bug 
# include <stdio.h>
# include <stdlib.h>
# define Max_Size 100000

int main(void)
{
	int *S = (int *)malloc(sizeof(int)*Max_Size);
	int *S_New = (int *)malloc(sizeof(int)*Max_Size);
	int *Arr = (int *)malloc(sizeof(int)*Max_Size);
	
	int N, M;
	int i;
	int num;
	int cnt = 0, flag = 0, len = 1;
	
	scanf("%d",&M);
	scanf("%d",&N);
	S[0] = M;
	
	// 分为两个部分求解 
	while (--N)
	{
		// 1. 依次遍历原字符串，遇到不同字符则记录字符 组数cnt+1，并且flag自增 
		// 遍历 
		cnt = 0;
		flag = 1;
		num = S[0];
		for (i=1; i<len; i++)
		{
			// 相等 
			if (num == S[i])
			{
				flag++;
			}
			else
			{
				Arr[cnt] = flag;
				S_New[cnt] = num;
				flag = 1;
				num = S[i];
				cnt++;
			}
		}
		Arr[cnt] = flag;
		S_New[cnt] = num;
		// 2. 数组记录每个部分的元素个数
		// 3. 将元素和记录的元素个数合并在一起，构造成新的字符串S_New
		for (i=0; i<=cnt; i++)
		{
			S[2*i] = S_New[i];
			S[2*i+1] = Arr[i];
		}
		// 4. 将S_New赋值给S 
		len = 2*(cnt+1);
	}
	
	// 遍历
	if (cnt != 0)
		for (i=0; i<len; i++) 
		{
			printf("%d",S[i]);
		}
	else
		printf("%d",S[0]);
		printf("\n%d\n",len);
	
	return 0;
}

