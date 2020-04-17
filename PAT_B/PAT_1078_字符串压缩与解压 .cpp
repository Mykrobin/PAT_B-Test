// PAT_1078_字符串压缩与解压 

# include <stdio.h>
# include <string.h>

int main(void)
{
	char ch[1010];
	char Test;
	char a;
	int flag = 0;
	int sum = 0; // 记录字符的个数 
	int i = 0; // 控制ch 的变化

	// 读入字符串 
	Test = getchar();
	getchar();
	gets(ch);	
	
	while (ch[i] != '\0' && Test == 'D')
	{
		sum = 0;
		// 如果遇见数字，则转化为字符 
		if (ch[i]>='0' && ch[i]<='9')  
		{
			sum = ch[i] - '0';
			while (ch[i+1]>='0' && ch[i+1]<='9')
			{
				sum *= 10;
				i++;
				sum += ch[i] - '0';
			}	
			sum--;
			// 输出
			while(sum != 0) 
			{
				printf("%c",ch[i+1]);
				sum--;
			}
		}
		else
		{
			printf("%c",ch[i]);
		}
			
		i++;
	}
	
	while (ch[i] != '\0' && Test == 'C')
	{
		sum = 1;
		a = ch[i];
		while (ch[i] == ch[i+1] && ch[i]!='\0')
		{
			sum++;
			i++;
		} 
		if (1 != sum)
			printf("%d%c",sum,a);
		else
			printf("%c",a);	
		i++;
	}
	
	return 0;
}
