//  PAT乙级
//  PAT_1021_Count
//  把输入的数据按位拆分，并输出0-9出现的次数

# include <stdio.h> 
# include <stdlib.h>
# include <string.h>

int main(void)
{
	char ch[1001]; // 记录输入的数据
	int i, len;
	int Count[10] = {0};
	
	// 输入字符串
	gets(ch);
	len = strlen(ch);
	
	//  统计0-9出现的次数 
	for (i=0; i<len; i++)
	{
		Count[(ch[i]-'0')]++;
	}
	
	for (i=0; i<10; i++)
	{
		if (Count[i] != 0) 
			printf("%d:%d\n",i,Count[i]);
	}
	
	return 0;
}
