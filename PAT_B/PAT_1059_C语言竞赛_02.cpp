//1059 C语言竞赛
// 关键点：控制数字的格式化输出 
# include <stdio.h>
# include <math.h>
# define Max 10001
int Prime(int );
int main(void)
{
	int Num[Max];
	int flag[Max] = {0};  // -1 代表领过奖了 
	// int Class[Max] = {0}; // 5代表特等奖，3代表小黄人，1代表巧克力 
	// 对每一个数字判断是否为素数，冗余量较高，则在领奖时判断即可 
	int prime = 0; // 设置参数表示该位置是否为素数 
	int len1, len2, i, j, N, val;
	int temp = 0; // 设置参数，temp=0,代表没有找到，temp=1，代表找到 
	
	scanf("%d",&N);
	len1 = N;
	for (i=1; i<=len1; i++)
	{
		scanf("%d",&Num[i]);
	}
	
	scanf("%d",&N);
	len2 = N;
	for (i=1; i<=len2; i++)
	{
		temp = 0;
		prime = 0;
		scanf("%d",&val); 
		// 在Num[]数组中遍历查找val
		for (j=1; j<=len1; j++)
		{
			if (Num[j] == val)
			{
				temp = 1; // 设置标志位为1，表示找到了 
				break; 
			}
		}
		// 如果找到，则比较是否领过奖品 
		if(1 == temp) 
		{
			// 判断对应的j值是否为素数 
			if (1 == Prime(j))
			{
				prime = 1;
			 } 
			// 领过奖品
			if (-1 == flag[j])
			{
				printf("%04d: Checked\n",val);
			 }
			 // 没有领过 
			 else if (0 == flag[j])
			 {
			 	if (1 == j) 
			 	{
			 		printf("%04d: Mystery Award\n",val);
				 }
				 else if (1 == prime)
				 {
				 	printf("%04d: Minion\n",val);
				 }
				 else 
				 {
				 	printf("%04d: Chocolate\n",val);
				 }
			 	// 领过奖之后设置标志位为-1 
			 	flag[j] = -1;
			 }
			
		 } 
		// 否则，输出Are you kidding? 
		else
		{
			printf("%04d: Are you kidding?\n",val);
		}
	}
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
