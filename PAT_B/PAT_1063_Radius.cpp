// PAT_1063_Radius
 
# include <stdio.h>
# include <math.h>

int main(void)
{
	int N;
	int X, Y;
	int ans, max;
	float val;
	int flag = 0;
	scanf("%d",&N);
	
	while (N--)
	{
		scanf("%d %d",&X, &Y);
		ans = X*X + Y*Y;
		if (flag == 0)
		{
			max = X*X + Y*Y;
			flag = 1;
		}
		max = (max>ans)?max:ans;
	}
	val = sqrt(max);
	
	printf("%.2f",val);
	
	return 0;
}
