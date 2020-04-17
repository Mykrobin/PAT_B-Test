// PAT_1029_Broken_Key
// 两个字符串同时结束才可以结束
// 注意循环条件 
# include <stdio.h>
# include <string.h>

int main(void) 
{
	char S1[100]; // 记录本应该输入的字符 
	char S2[100]; // 记录实际输出的字符
	char Break_Key[85]; // 记录坏掉的键
	
	int i=0, j=0, k=0;
	int len1, len2;
	int flag = 1;
	int n = 0; // 记录坏掉的键个数 
	
	// 输入字符串 
	gets(S1);
	gets(S2);
	
	len1 = strlen(S1);
	len2 = strlen(S2);
	
	for(i=0;i<strlen(S1);i++)
	{
		 if(S1[i]>='a'&&S1[i]<='z')
		 	S1[i]=S1[i]-32; 
	}
	for(i=0;i<strlen(S2);i++)
	{	
		 if(S2[i]>='a'&&S2[i]<='z')
			 S2[i]=S2[i]-32; 
	}
	i=j=0;
	//  开始比对字符串 
	while (i<len1 || j<len2)  // 注意这个循环时，一定是或语言 
	{
		// 如果对应位置不相同，则说明该键是坏键
		//  有坏键则S2下标不动 
		if (S1[i] != S2[j])
		{
			// 判断是否在已经坏掉的字符串中出现过 
			k=0;
			flag = 1;
			while (Break_Key[k] != '\0')  
			{
				// 如果S1[i] 在Break_Key 字符串中出现过，则不再继续，设置标志符号flag=0;
				if (S1[i] == Break_Key[k])
				{
					flag = 0;
					break;
				}
				k++;
			}
			// 写入的时候，字母大写 
			if (flag == 1)
			{
				Break_Key[n] = S1[i];
				n++;
			}	
			i++;
		}
		// 否则，说明该键没问题 
		else
		{
			i++;
			j++;
		} 
		
	}
	for (i=0; i<n; i++)
	{
		printf("%c",Break_Key[i]);
	}
	printf("\n");
	return 0;
}
