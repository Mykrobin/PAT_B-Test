//  PAT_1086_Donnot_tell_you
//  计算结果倒过来写 

# include <stdio.h> 

int main(void)
{
	int a, b;
	long sum;
	int flag = 0; // 控制输出格式，如 30反转之后是3 而不是03 
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	//  计算结果 
	sum = a*b;
	
	//  结果反转
	if (sum == 0)
	{
		printf("%d",sum);
		return 0;
	}
	while (sum != 0)
	{
		if (sum%10 != 0)
			flag = 1;
		if (flag)
			printf("%d",sum%10);
		sum /= 10;
	} 	
	
	return 0;
}
