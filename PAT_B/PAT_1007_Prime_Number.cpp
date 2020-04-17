//  素数对猜想 （20 分）
//  让“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
//  现给定任意正整数N，请计算不超过N的满足猜想的素数对的个数。

# include <stdio.h>
# include <math.h>

int Prime(int n);

int main(void)
{
	int n;
	int count = 0;
	scanf("%d",&n);
	
	for (int i=2; i<=n-2; i++)	
	{
			if (Prime(i) && Prime(i+2))
				count++;
	}
	printf("%d",count);
	return 0;
}

int Prime(int n)
{
	int i = 2;
	
	for (i; i<=sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
