//  PAT_1086_Donnot_tell_you
//  ������������д 

# include <stdio.h> 

int main(void)
{
	int a, b;
	long sum;
	int flag = 0; // ���������ʽ���� 30��ת֮����3 ������03 
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	//  ������ 
	sum = a*b;
	
	//  �����ת
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
