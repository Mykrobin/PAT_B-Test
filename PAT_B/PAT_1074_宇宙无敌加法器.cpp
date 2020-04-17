// 1074 宇宙无敌加法器

# include<stdio.h>

int main(void)
{
	char A[20];
	char ch;
	char B[20]; 
	char C[20];
	int D[22] = {0}; 
	int a, b, c;
	int i, sum = 0;;
	int len=0, len1=0, len2=0; // 记录长度 
	int flag = 0; //标记进位 
	int flag_0 = 0;
	
	// 输入每一位的进制 
	for (i=0; i<=20; i++)
	{
		ch = getchar();
		if (ch>='0' && ch<='9')
		{
			len ++;
			A[i] = ch;
		}
		else
			break;
	}
	// 输入第一位数字 
	for (i=0; i<len; i++)
	{
		ch = getchar();
		if (ch>='0' && ch<='9')
		{
			len1 ++;
			B[i] = ch;
		}
		else
			break;
	}
	// 输入第二位数字 
	for (i=0; i<len; i++)
	{
		ch = getchar();
		if (ch>='0' && ch<='9')
		{
			len2 ++;
			C[i] = ch;
		}
		else
			break;
	}
	// 运算
	len --;
	len1--;
	len2--;
	i = 0;
	while (len>=0)
	{
		if (len1>=0)
			b = B[len1] - '0';
		else
			b = 0;
			
		if (len2>=0)
			c = C[len2] - '0';
		else
			c = 0;
		a = A[len]-'0';
		if (0 == a)
			a = 10;
		sum = flag + b + c;
		flag = (sum - a)>=0?1:0;
		D[i++] = sum % a;
		len1--;
		len2--;
		len --;
	}

	// 结果为0时 输出
	if (i == 1 && D[i-1] == 0)
	{
		printf("0"); 
		return 0;
	}
	//判断最高位0是否输出 
	if (D[i-1] == 0)
	{
		flag_0 = 1;
	}
	else
		flag_0 = 0;
		
	for (i; i>=1; i--)
	{
		if(flag_0 == 1)
		{
			flag_0 = 0;
			continue;
		 } 
		printf("%d",D[i-1]); 
	}

	return 0;
}
