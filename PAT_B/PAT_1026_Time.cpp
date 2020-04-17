// PAT_1026_Time

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int N1, N2;
	int hh, mm, ss, flag; 
	scanf("%d",&N1);
	scanf("%d",&N2);
	
	// 看是否四舍五入 
	flag = (N2-N1)%100;
	if (flag <= 49)
	{
		ss = (N2-N1)/100;
	}
	else
		ss = (N2-N1)/100+1;
	
	// 计算小时 
	hh = ss/3600; 
	ss = ss - hh*3600;
	mm = ss/60;
	ss = ss - mm*60;
		
	if (hh<10)
	{
		printf("0");
	}
		printf("%d:",hh);
		
	if (mm<10)
	{
		printf("0");
	}
		printf("%d:",mm);
	if (ss<10)
	{
		printf("0");
	}
		printf("%d",ss);
	
	return 0;
}
