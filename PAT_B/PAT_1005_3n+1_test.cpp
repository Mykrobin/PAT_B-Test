#include <stdio.h>

int main () 
{
  int n, k, i, temp, total = 0, count = 0;
  int a[101] = {0};
  scanf("%d",&k);
  while (k --) {
      scanf("%d",&n);
      a[n]++;
  }
  for (i = 2; i < 101; i++) 
  {
      if (a[i] != 0)
	  {
          temp = i;
          while (temp > 1) 
		  {
              if (temp % 2 == 0) 
			  {
                  temp /= 2; 
              } else 
			  {
                  temp = (3 * temp + 1) / 2;
              }
              if (temp <= 100 && temp > 1)
                      a[temp] = 0;
          }
      }
  }
  //total��¼�ؼ����ĸ���
  for (i = 100; i > 1; i--){
      if (a[i] != 0)
          total++;
  }
  for (i = 100; i > 1; i--){
      if (a[i] != 0){
          count++;
          if (count != total)//����������һ���ؼ�����������ո�
              printf("%d ",i);
          else
          	  printf("%d",i);
      }
  }
  return 0;
}
