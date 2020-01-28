// 1030 完美数列
# include <stdio.h>
# include <algorithm>
# include <stdlib.h>
# include <vector>
using namespace std; // 必写 

int main(void)
{
	int N;
	long P; 
	int i, j;
	int left; // 数组剩余长度 
	int len=0, max = 0; // 分别代表此时遍历时的长度（len），以及累计最大值max 
	scanf("%d",&N);
	scanf("%ld",&P);
	// 利用库函数建立数组并进行排序 
	vector<int> A(N);
	for (i=0; i<N; i++) 
	{
		scanf("%d",&A[i]);
	}
	sort(A.begin(), A.end());
	
	for (i=0; i<N; i++) 
	{
		// A[i] 是新数组的最小值，A[j]为最大值
		// 已知累计长度最大为max，仅仅考虑是否更新max值即可 
		// 则A[i]到A[i+max]之间的值不必再次比较
		for (j=i+max; j<N; j++)
		{
			// 计算A[i]往后还有多长，如果小于max则自动退出，不必检查 
			left = N - i + 1;
			if (left <= max)
				break;
			// 计算最大长度
			// 此时最小值为A[i]，最大值A[j] 
			if (A[i]*P >= A[j])
			{
				len = j-i+1;
				//printf("A[i] = %d,A[j] = %d,===>%d\n",A[i],A[j],len); 
				// 如果当前长度比累计最大值大，则更新最大值	
				if (len > max)
					max = len;
			}
			else
			{
				break;	
			}	
		} 
	}
	printf("%d",max);
	
	return 0;
}
