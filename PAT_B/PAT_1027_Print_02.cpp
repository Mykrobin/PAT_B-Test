#include <stdio.h>
#include <math.h>
 
int main(void)
{
    int num = 0;
    char ch = 0;
    int line = 0;
    while((scanf("%d %c",&num,&ch) != EOF) && (num <= 1000))
    {
        /*�õ�Ӧ��ӡ������*/
        line = (int)sqrt(2*num + 2) - 1;
        int index = 0 , j = 0;
        /** �õ��ϰ벿�� */
        for(index = line; index >= 1; index = index - 2)
        {
            for(j = 0;j < (line - index)/2 ;j ++)
                printf(" ");
            for(j = 0; j < index; j++ )
                printf("%c",ch);
            printf("\n");
        }
        /** �õ��°벿�� */
        for(index = 3; index <= line; index = index + 2)
        {
            for(j = 0;j < (line - index)/2 ;j ++)
                printf(" ");
            for(j = 0; j < index; j++ )
                printf("%c",ch);
            printf("\n");
        }
        printf("%d\n",num - (line+3)*(line-1)/2 - 1);
    }
    return 0;
}

