//  比较大小

# include <stdio.h>

int main(void)
{
	long long A[10];
	long long B[10];
	long long C[10];
	int i; 
	int n;
	//  输入数据 
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%ld",&A[i]);
		scanf("%ld",&B[i]);
		scanf("%ld",&C[i]);
	}

	//  比较大小 
	for (i=0; i<n; i++)
	{
		printf("Case #%d: ",i+1);
		if (A[i]+B[i] > C[i])
		{
			printf("true\n");
		}
		else
		{
			printf("false\n");
		}
	}
	

	
	return 0;
}
