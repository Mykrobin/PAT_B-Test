//  PAT_1031_Check_ID_02 
//  �������֤�����Ƿ���� 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  char M[15]={'1','0','X','9','8','7','6','5','4','3','2'};
  int n;
  int TAG= 1;          //�Ƿ�ȫ��û����ı�־
  scanf("%d",&n);
  for(int t=0 ; t<n ; ++t)
  {
    char str[20];
    scanf("%s",str);
    int len=strlen(str);
    int sum=0;
    int tag=1;        //ÿһ���Ƿ��������С��־
    for(int i=0 ; i<len-1 ; ++i)
    {
      
      int tmp=str[i]-'0';
      if(tmp>=0 && tmp<=9)  //�ж�ǰ16λ�Ƿ�����ĸ��for��len-1
        sum+=tmp*weight[i];
      else
      {
        tag=0;        //ǰ16λ����ĸ���Ƿ�����
        break;
      }
    }
    int Z=sum%11;        //�ж����һλ�Ƿ���ȷ
    if(M[Z]!=str[len-1])
      tag=0;
    if(0==tag)          //������������⣬���
    {
      TAG=0;        //����һ��������
      puts(str);
    }
  }
  if(1==TAG)          //ȫ��û����
    printf("All passed");
  return 0;
}
