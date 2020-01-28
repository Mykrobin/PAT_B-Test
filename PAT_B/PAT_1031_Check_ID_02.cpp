//  PAT_1031_Check_ID_02 
//  检验身份证号码是否合理 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  char M[15]={'1','0','X','9','8','7','6','5','4','3','2'};
  int n;
  int TAG= 1;          //是否全都没问题的标志
  scanf("%d",&n);
  for(int t=0 ; t<n ; ++t)
  {
    char str[20];
    scanf("%s",str);
    int len=strlen(str);
    int sum=0;
    int tag=1;        //每一轮是否有问题的小标志
    for(int i=0 ; i<len-1 ; ++i)
    {
      
      int tmp=str[i]-'0';
      if(tmp>=0 && tmp<=9)  //判断前16位是否有字母，for到len-1
        sum+=tmp*weight[i];
      else
      {
        tag=0;        //前16位有字母，非法输入
        break;
      }
    }
    int Z=sum%11;        //判断最后一位是否正确
    if(M[Z]!=str[len-1])
      tag=0;
    if(0==tag)          //如果号码有问题，输出
    {
      TAG=0;        //至少一个有问题
      puts(str);
    }
  }
  if(1==TAG)          //全都没问题
    printf("All passed");
  return 0;
}
