#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int checkValid(char *s)
{
  int flag=1;
  double temp=0;
  if(!(s[0]>='0'&&s[0]<='9'||s[0]=='-'))//��һλֻ���Ǹ��Ż�������
  {
    flag=0;
  }
  else if(s[0]=='0')
  {
    if(s[1]!='.'&&s[1]!='\0')//�����һλΪ0�������ֻ��Ϊ�ջ���С����
    {
      flag=0;
    }
  }
  else if(s[0]=='-')//�����һλΪ��������ֻ��Ϊ1-9����0.
  {
    if(!(s[1]>'0'&&s[1]<='9'||(s[1]=='0'&&s[2]=='.')))
    {
      flag=0;
    }
  }
  int dWZ=-1,cnt=0;//��¼С����λ�ú�����
  for(int i=1;i<strlen(s);i++)//�ӵڶ�λ���
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
  //С�������1�������߲��ں�3λ
  if(cnt>1||(cnt==1&&dWZ!=strlen(s)-3&&dWZ!=strlen(s)-2&&dWZ!=strlen(s)-1))
  {
    flag=0;
  }
  if(flag==1)//��������֣�����֤��Χ
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

