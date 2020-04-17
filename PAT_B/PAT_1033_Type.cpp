// PAT_1033_Type
//*****************
//   判断时仅判断是否是字母（区分大小写）
//   其他的字符无需判断 
# include <stdio.h>
# include <string.h>

int main(void)
{
    char Break[50];
    char S_Arr[100010];
    char Err[] = "";
    int len;
    int i, j=0;
    int flag_UP = 0; // 如果flag_UP为0，表示没坏，则大写字母正常输出
    int flag = 1; // 标志每一位是否输出
    int flag_All = 0;

    gets(Break); // 输入键盘的坏键
    gets(S_Arr); // 输入文本段
    
    if (Break == "")
	{
		puts(S_Arr);
		return 0;
	}

    len = strlen(S_Arr);

    // 清除无法显示的字符
    // 先遍历一遍Break，看是否有上档键失灵，如果有定义flag_UP=1不输出大写字母
    while (Break[j] != '\0')
    {
        if (Break[j]=='+')
        {
            flag_UP = 1;
        }
        j++;
    }
    for (i=0; i<len; i++)
    {
        j = 0;
        flag = 1;
        // 挨个遍历S_Arr,如果flag为0 则不输出
        // 首先判断是否是字母，如果不是字母，则不用判断大小写
        // 开始判断字母是否符合
        // 小写字母
        if (S_Arr[i]>='a'&&S_Arr[i]<='z')
        {
            while (Break[j] != '\0')
            {
                if ((S_Arr[i]-'a' == Break[j]-'A'))
                {
                    flag = 0;
                    break;
                }
                j++;
            }
        }
        else if (S_Arr[i]>='A'&&S_Arr[i]<='Z')
        {
            if (flag_UP == 1)
            {
                // 上档键坏了则，大写字母不输出
                flag = 0;
            }
            else
            {
                while (Break[j] != '\0')
                {
                    if (S_Arr[i] == Break[j])
                    {
                        flag = 0;
                        break;
                    }
                    j++;
                }
            }
        }
        else
        {
        	while (Break[j] != '\0')
            {
                if (S_Arr[i] == Break[j])
                {
                    flag = 0;
                    break;
                }
                j++;
            }
		}
        
        if (flag == 1)
        {
            flag_All = 1;
            printf("%c",S_Arr[i]);
        }
    }
    if (flag_All == 0)
    {
    	 printf("");
	}

    return 0;
}
