//  1017 A除以B 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
    char a[1000];
    int b;
    int temp=0;
    int flag = 0;  // 标记有没有进行运算
	 
    scanf("%s",a);
    scanf("%d",&b);
    
    int n = strlen(a);

    for(int i=0; i<n; i++)
	{
        temp = (a[i]-'0')+temp*10;
        if(temp>=b)
		{
            printf("%d",temp/b);
            flag = 1;
        }
        else if(flag)
		{
            printf("0");
        }
        temp = temp%b;
    }
    if(flag==0)
        printf("0");
    printf(" %d",temp);
    
    return 0;
}
