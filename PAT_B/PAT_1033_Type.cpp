// PAT_1033_Type
//*****************
//   �ж�ʱ���ж��Ƿ�����ĸ�����ִ�Сд��
//   �������ַ������ж� 
# include <stdio.h>
# include <string.h>

int main(void)
{
    char Break[50];
    char S_Arr[100010];
    char Err[] = "";
    int len;
    int i, j=0;
    int flag_UP = 0; // ���flag_UPΪ0����ʾû�������д��ĸ�������
    int flag = 1; // ��־ÿһλ�Ƿ����
    int flag_All = 0;

    gets(Break); // ������̵Ļ���
    gets(S_Arr); // �����ı���
    
    if (Break == "")
	{
		puts(S_Arr);
		return 0;
	}

    len = strlen(S_Arr);

    // ����޷���ʾ���ַ�
    // �ȱ���һ��Break�����Ƿ����ϵ���ʧ�飬����ж���flag_UP=1�������д��ĸ
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
        // ��������S_Arr,���flagΪ0 �����
        // �����ж��Ƿ�����ĸ�����������ĸ�������жϴ�Сд
        // ��ʼ�ж���ĸ�Ƿ����
        // Сд��ĸ
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
                // �ϵ��������򣬴�д��ĸ�����
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
