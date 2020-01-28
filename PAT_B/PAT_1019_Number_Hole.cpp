//  1019 数字黑洞 
//  一个测试点没有通过 问题已经解决 
//  输出的格式不规范！！！！ 

# include <stdio.h> 

int main(void)
{
	int val; // 记录输入的数字
	int i, j;
	int N[4];
	int max=0, min=0; 
	
	scanf("%d",&val);
	//  将数字拆分 
	for (i=0; i<4; i++)	
	{
		N[i] = val%10;
		val /= 10;
	}
	// 升序排序 
	for (i=1; i<4; i++) 
	{
		for (j=0; j<4; j++)
		{
			if (N[i] < N[j])
			{
				val = N[i];
				N[i] = N[j];
				N[j] = val; 
			}
		}
	}
	
	min = N[0]*1000+N[1]*100+N[2]*10+N[3];
	max = N[3]*1000+N[2]*100+N[1]*10+N[0];
	val = max - min;
	
	while (1)
	{
		// 学会控制输出格式 用0补齐 
		printf("%04d - %04d = %04d\n",max,min, val);
		if (val==0 || val==6174)
			break;
			//  将数字拆分 
		for (i=0; i<4; i++)	
		{
			N[i] = val%10;
			val /= 10;
		}
		// 升序排序 
		for (i=1; i<4; i++) 
		{
			for (j=0; j<4; j++)
			{
				if (N[i] < N[j])
				{
					val = N[i];
					N[i] = N[j];
					N[j] = val; 
				}
			}
		}
		
		min = N[0]*1000+N[1]*100+N[2]*10+N[3];
		max = N[3]*1000+N[2]*100+N[1]*10+N[0];
		val = max - min;
	}
	
	
	return 0;
}
