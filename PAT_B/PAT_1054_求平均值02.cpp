#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int checkValid(char *s)
{
  int flag=1;
  double temp=0;
  if(!(s[0]>='0'&&s[0]<='9'||s[0]=='-'))//第一位只能是负号或者数字
  {
    flag=0;
  }
  else if(s[0]=='0')
  {
    if(s[1]!='.'&&s[1]!='\0')//如果第一位为0，则后面只能为空或者小数点
    {
      flag=0;
    }
  }
  else if(s[0]=='-')//如果第一位为负，后面只能为1-9或者0.
  {
    if(!(s[1]>'0'&&s[1]<='9'||(s[1]=='0'&&s[2]=='.')))
    {
      flag=0;
    }
  }
  int dWZ=-1,cnt=0;//记录小数点位置和数量
  for(int i=1;i<strlen(s);i++)//从第二位向后
  {
    if(!(s[i]<='9'&&s[i]>='0'||s[i]=='.'))
    {
      flag=0;
      break;
    }
    if(s[i]=='.')
    {
      cnt++;
      dWZ=i;
    }
  }
  //小数点多于1个，或者不在后3位
  if(cnt>1||(cnt==1&&dWZ!=strlen(s)-3&&dWZ!=strlen(s)-2&&dWZ!=strlen(s)-1))
  {
    flag=0;
  }
  if(flag==1)//如果是数字，则验证范围
  {
    temp=atof(s);
    if(temp>1000||temp<-1000)
    {
      flag=0;
    }
  }
  return flag;
}
 
int main()
{
  int iNum=0;
  scanf("%d",&iNum);
  double fSum=0;
  char temp[100]={0};
  int iCnt=0;
  for(int i=0;i<iNum;i++)
  {
    scanf("%s",&temp);
    if(checkValid(temp))
    {
      iCnt++;
      fSum+=atof(temp);
    }
    else
    {
      printf("ERROR: %s is not a legal number\n",temp);
    }
  }
  if(iCnt==0)
  {
    printf("The average of 0 numbers is Undefined");
  }
  else if(iCnt==1)
  {
    printf("The average of 1 number is %.2lf",fSum);
  }
  else
  {
    printf("The average of %d numbers is %.2lf",iCnt,fSum/iCnt);
  }
  return 0;
}

