//  Get the number to Chinese
//  计算给出的数字的和并输出结果的汉语拼音 
//  在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

# include <stdio.h>

int main(void)
{
	//  记录大型整数的数组
	char NUM[1000];
	//  用一个整数记录各位之和
	int sum = 0;
	//  表示每一位对应的汉语拼音 
	//  这里用 switch 函数输出结果即可
	//  用一个数组来表示分解后的整数
	int flag[4] = {-1, -1, -1, -1};
	int i = 0;
	
	scanf("%s",NUM);  // 用一个字符串记录大型整数 
	//  把字符串转化为整数（实际不用操作） 并求和
	while (NUM[i] != '\0')
	{
		sum += NUM[i] - '0';
		i++;
	}
	//  把sum转化为汉语拼音
	//  从最高位向下依次读取 
	//  此处必须使用的是sum 的位数计算 而不是原来大型整数的位数i 
	
	//  计算sum 的每一位 （用一个数组来表示） 
	//  如123 在数组中表示为 3 2 1 -1 
	i = 0;
	while (sum >= 10)
	{
		flag[i] = sum%10;
		sum = sum/10;
		i++;
	 } 
	sum = sum - (sum/10);
	flag[i] = sum;
//	printf("%d\n",i);
//	printf("%d %d %d %d",flag[0], flag[1], flag[2], flag[3]);
	
	for (i=3; i>=0; i--)
	{
		if (flag[i] != -1)
		{
			// 注意 此处的flag[i] 是整数类型 不能用符号表示 
		switch (flag[i])
		{
			case 1:
				printf("yi");break;
			case 2:
				printf("er");break;
			case 3:
				printf("san");break;
			case 4:
				printf("si");break;
			case 5:
				printf("wu");break;
			case 6:
				printf("liu");break;
			case 7:
				printf("qi");break;
			case 8:
				printf("ba");break;
			case 9:
				printf("jiu");break;
			case 0:
				printf("ling");break;
			default:
				break;
		}
		if (i>0) 
			printf(" ");
		}
		
	}
	
	return 0;
}
