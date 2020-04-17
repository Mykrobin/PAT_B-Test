# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// 判断输入是不是一个数字 
/*1.第一位只能是负号和数字0-9，如果是负号，后面不能只有0（即-0），如果是0，则后面或者没有元素（即0）或者跟小数点；
  2.从第二位开始，后面的元素只能是小数点或者数字0-9；
  3.只能有一个小数点；
  4.小数点只能在最后3位
（题目认为123.合法）
*/
int Is_number(char *str)
{
	int flag = 1;
	float temp;
	int num=-1, count=0; // 分别记录最后一个小数点的位置和小数点的数量 
	
	if (!(str[0]>='0'&&str[0]<='9' || str[0] == '-')) // 第一位不是0-9或者负号 非法 
		flag = 0;
	else if (str[0] == '0') // 第一位是0,第二位只能是小数点或者没有 
	{
		if (str[1]!='.' && str[1]!='\0')
			flag = 0;
	}
	else if (str[0] == '-') // 第一位为负号 后面只能是 0-9 
	{
		if (!(str[1]>'0'&&str[1]<='9' || str[1]=='0'&&str[2]=='.'))
			flag = 0;
	}
		
	if (flag == 1)
	{
		for (int i=1; i<strlen(str); i++)
		{
			if (!(str[i]>='0'&&str[i]<='9' || str[i]=='.'))
			{
				flag = 0;
				break;
			}
			
			if (str[i] == '.')
			{
				count++; // 记录小数点的个数 
				num = i; // 记录最后一个小数点的位置 
			}	
		}
	}	 
	
	if (count > 1)
		  	flag = 0; // 小数点个数多于1个，不合法 
	else if (count == 1)
	{
		if ((strlen(str) - num)>3)
			flag = 0;
	}
	
	if (flag == 1)
	{
		temp = atof(str);
		if (temp>1000 || temp<-1000)
			flag = 0;
	}
	
	return flag;
}

int main(void)
{
	int N; // 输入数据的个数
	int M = 0; // 记录最终有效的数据个数 
	float sum = 0.0;
	char str[100];
	
	scanf("%d",&N);
	
	for (int i=0; i<N; i++)
	{
		scanf("%s",&str);
		if (Is_number(str))
		{
			M++; // 记录有效个数
			sum += atof(str);
		}
		else
		{
			printf("ERROR: %s is not a legal number\n",str);
		}
	}
		
	if (M == 0)
		printf("The average of 0 numbers is Undefined");
	else if (M == 1) 
		printf("The average of 1 number is %.2f",sum);
	else
		printf("The average of %d numbers is %.2f",M,sum/M);

		
	return 0;
}

