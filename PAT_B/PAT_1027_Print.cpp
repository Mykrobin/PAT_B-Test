//  PAT_1027_Print

# include <stdio.h>
# include <math.h>

int main(void)
{
	int number;
	char ch;
	int min=1, max;
	int i, j, k;
	int left;
	int val;
	
	scanf("%d %c",&number,&ch);
	
	if (number < 7)
	{
		printf ("%c\n%d",ch,number-1);
		return 0;
	}
	
	// ����ѧ��ʽ�õ���ӡ�ĵ������� K 
	k = (int)sqrt(2*number + 2) - 1;
	left = number - ((k+1)*(k+1)-2)/2; 
	k /= 2;
	
	 //  ��ӡɳ© �ɴ�С 
	 for (i=k; i>=0; i--) 
	 {
	 	//  ÿ���ж��ٸ�* 
	 	val = (2*i+1);
	 	for (j=0; j<k-i; j++)
	 		printf(" ");
	 	for (j=0; j<val; j++)
	 	{
	 		printf("%c",ch);
		 }
		 printf("\n");
	 }
	 //  ��ӡɳ© ��С���� 
	  for (i=1; i<=k; i++) 
	 {
	 	//  ÿ���ж��ٸ�* 
	 	val = (2*i+1);
	 	for (j=0; j<k-i; j++)
	 		printf(" ");
	 	for (j=0; j<val; j++)
	 	{
	 		printf("%c",ch);
		 }
		 printf("\n");
	 }
	 printf("%d",left);
	
	return 0;
}
