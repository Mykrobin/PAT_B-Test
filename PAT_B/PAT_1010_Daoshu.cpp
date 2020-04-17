//  对多项式求导数

# include <stdio.h>

int main(void)
{
	//  记录系数以及多项式的次数
	int A[1000]={0}; // 记录系数
	int B[1000]={0}; // 记录多项式的次数
	int i, flag=0; 
	int n;
	//  输入系数以及次数
	for (i=0; flag==0; i++) 
	{
		scanf("%d",&A[i]);
		scanf("%d",&B[i]);
		if (getchar() == 10)
			flag=1;
	}
	n = (i--);
	//  输出已输入的多项式
//	for (i=0; i<n; i++) 
//	{
//		printf("%d %d \n",A[i],B[i]); 
//	}
	//  依次对每一项进行降次求导 
	for (i=0; i<n; i++)
	{
		A[i] = B[i] * A[i];
		
		if (0 < B[i])
		{
			B[i]--;
		}
		else
		{
			n--;
			break;
		}
	}
		
	for (i=0; i<n-1; i++) 
	{
		printf("%d %d ",A[i],B[i]); 
	}
	printf("%d %d",A[n-1],B[n-1]);
	
	
	return 0;
 } 
