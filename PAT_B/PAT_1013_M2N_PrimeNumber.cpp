//  输出第 M 到 第 N 个 素数

# include <stdio.h>
# include <math.h>

int Is_Prime(int);

int main(void)
{
	int i;
	int N1, N2;
	int n = 105000; 
	int flag = 0;
	int flag_ch = 0;
	
	scanf("%d %d",&N1,&N2);
	
	for (i=1; i<n; i++)	
	{
		if (Is_Prime(i))
		{
			flag++;
			if (flag>N1 && flag<=N2+1)
			{
				flag_ch++;
				printf("%d",i);
				if (flag_ch<10 && flag!=N2+1)
				{
					printf(" ");
				}
				else
				{
					printf("\n");
					flag_ch -= 10;
				}
			}
					
		}
			
	}
	return 0;
}

int Is_Prime(int n)
{
	int i = 1;
	int temp = sqrt(n);
	
	for (i=2; i<=temp; i++)	
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
