//  福尔摩斯的约会

# include <stdio.h> 
# include <stdlib.h>

int main(void)
{
	//  输入四组字符串 
	char CH1[100];
	char CH2[100];
	char CH3[100];
	char CH4[100];
	int i=0, j=0;
	char ch[2]={'0','0'}; 
	int flag=0, min=0;
	int day, hour;
	//  输入
	scanf("%s",CH1);
	scanf("%s",CH2);
	scanf("%s",CH3);
	scanf("%s",CH4);
	//  计算day HH
	while (CH1[i]!='\0' && CH2[i]!='\0')
	{
		// 表示第一个大写字母一样 
		if (flag == 0)
		{
			if (CH1[i]>='A'&&CH1[i]<='G')
			{
				if (CH1[i]==CH2[i])
				{
					ch[flag]=CH1[i];
					flag++;
				}	
			}
		} 
		else
		{
			if ((CH1[i]>='a'&&CH1[i]<='n') || (CH1[i]>='A'&&CH1[i]<='N') || (CH1[i]>='0'&&CH1[i]<='9'))
			{
				if (CH1[i]==CH2[i])
				{
					ch[flag]=CH1[i];
					flag++;
				}	
			}
		}
		
		i++;	
		if (flag == 2)
			break;
	}
	//  计算DAY 
	if (ch[0]>='a'&&ch[0]<='z')	
	{
		day = ch[0] - 'a' + 1;
	}
	else
		day = ch[0] - 'A' + 1;

	//  计算HH
	if (ch[1]>='A'&&ch[1]<='N')
	{
		hour = ch[1] - 'A' + 10;
	}
	else if (ch[1]>='0'&&ch[1]<='9')
		hour = ch[1] - '0';
	
	//  计算MIN
	while (CH3[j]!='\0' && CH4[j]!='\0')
	{
		if ((CH3[j]>='a'&&CH3[j]<='z') || (CH3[j]>='A'&&CH3[j]<='Z'))
			if (CH3[j]==CH4[j])
			{
				break;
			}
		j++;
	}
	min = j%61;
//	printf("ch0 %c  ch1 %c \n",ch[0], ch[1]);
//	printf("DAY %d HH %d MIN %d \n",day, hour, min);
	//  输出DAY 
	switch(day)
	{
		case 1: printf("MON ");break;
		case 2: printf("TUE ");break;
		case 3: printf("WED ");break;
		case 4: printf("THU ");break;
		case 5: printf("FRI ");break;
		case 6: printf("SAT ");break;
		case 7: printf("SUN ");break;
		default:break;
	}
	//  输出HH
	if (hour>=10)
		printf("%d:",hour);
	else
	{	
		printf("0");
		printf("%d:",hour);
	}
	//  输出 MIN
	if (min>=10)
		printf("%d",min);
	else
	{	
		printf("0");
		printf("%d",min);
	}

	return 0;
}
