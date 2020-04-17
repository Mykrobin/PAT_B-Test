// 挖掘机技术哪家强 
# include <stdio.h>
# define Max 100001

int main(void)
{
	int N;
	int i, val, len;
	int A[Max] = {0};
	int Max_num, Max_Arr;
	scanf("%d",&N);
	
	len = N;
	while (len > 0)
	{
		scanf("%d",&i);
		scanf("%d",&val);
		A[i] += val;
		len--;
	}
	Max_num = 0;
	A[Max_num] = Max_Arr;
	for (i=1; i<=N; i++)
	{
		if (A[i] > A[Max_num])
		{
			Max_num = i;
			Max_Arr = A[i];
		}
	}
	
	printf("%d %d",Max_num, Max_Arr);
	
	return 0;
 } 
