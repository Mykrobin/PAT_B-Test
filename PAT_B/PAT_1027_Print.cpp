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
	
	// 用数学公式得到打印的单侧行数 K 
	k = (int)sqrt(2*number + 2) - 1;
	left = number - ((k+1)*(k+1)-2)/2; 
	k /= 2;
	
	 //  打印沙漏 由大到小 
	 for (i=k; i>=0; i--) 
	 {
	 	//  每层有多少个* 
	 	val = (2*i+1);
	 	for (j=0; j<k-i; j++)
	 		printf(" ");
	 	for (j=0; j<val; j++)
	 	{
	 		printf("%c",ch);
		 }
		 printf("\n");
	 }
	 //  打印沙漏 由小到大 
	  for (i=1; i<=k; i++) 
	 {
	 	//  每层有多少个* 
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
