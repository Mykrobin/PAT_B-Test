// PAT_1028_Count_Population
// 没有AC// 两个点没通过测试
# include <stdio.h> 
# include <string.h>

int main(void)
{
	int N;
	int i; 
	char name[6];
	int yy,mm,date;
	int flag = 0;  // 合理人数 
	char Max_Name[6]; // 最大年龄人名称 
	char Min_Name[6]; // 最小年龄人名称 
	int min_y,min_m,min_date; 
	int max_y,max_m,max_date;
	scanf("%d",&N);
	
	for (i=0; i<N; i++)
	{
		scanf("%s",name);
		scanf("%d/%d/%d",&yy,&mm,&date);
		
		// 生日合理 区间
		if (yy>=1814 && yy<=2014) 
		{
			if (yy == 1814)
			{
				if (mm >9)
				{
						// 没有比较过 
	if (flag == 0)
	{
		strcpy(Max_Name,name);
		strcpy(Min_Name,name);
		min_y = max_y = yy;
		min_m = max_m = mm;
		min_date = max_date = date;
	}
	else
	{
		if (yy > min_y)
		{
			strcpy(Min_Name,name);
			min_y = yy;
			min_m = mm;
			min_date = date;
		}
		// 相等情况 
		else if (yy == min_y)
		{
			if (mm > min_m)	
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
			else if (date == min_date)
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
		} 
		
		if (yy < max_y)
		{
			strcpy(Max_Name,name);
			max_y = yy;
			max_m = mm;
			max_date = date;
		}
		// 相等情况 
		else if (yy == max_y)
		{
			if (mm < max_m)	
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
			else if (date == max_date)
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
		} 
	}
	
					flag++;
				}
				else if (mm==9)
				{
					if (date>=6)
					{
							// 没有比较过 
	if (flag == 0)
	{
		strcpy(Max_Name,name);
		strcpy(Min_Name,name);
		min_y = max_y = yy;
		min_m = max_m = mm;
		min_date = max_date = date;
	}
	else
	{
		if (yy > min_y)
		{
			strcpy(Min_Name,name);
			min_y = yy;
			min_m = mm;
			min_date = date;
		}
		// 相等情况 
		else if (yy == min_y)
		{
			if (mm > min_m)	
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
			else if (date == min_date)
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
		} 
		
		if (yy < max_y)
		{
			strcpy(Max_Name,name);
			max_y = yy;
			max_m = mm;
			max_date = date;
		}
		// 相等情况 
		else if (yy == max_y)
		{
			if (mm < max_m)	
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
			else if (date == max_date)
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
		} 
	}
	
						flag++;
					}
				}
			}
			else if (yy == 2014)
			{
				if (mm<9)
				{
						// 没有比较过 
	if (flag == 0)
	{
		strcpy(Max_Name,name);
		strcpy(Min_Name,name);
		min_y = max_y = yy;
		min_m = max_m = mm;
		min_date = max_date = date;
	}
	else
	{
		if (yy > min_y)
		{
			strcpy(Min_Name,name);
			min_y = yy;
			min_m = mm;
			min_date = date;
		}
		// 相等情况 
		else if (yy == min_y)
		{
			if (mm > min_m)	
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
			else if (date == min_date)
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
		} 
		
		if (yy < max_y)
		{
			strcpy(Max_Name,name);
			max_y = yy;
			max_m = mm;
			max_date = date;
		}
		// 相等情况 
		else if (yy == max_y)
		{
			if (mm < max_m)	
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
			else if (date == max_date)
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
		} 
	}
	
					flag++;
				}
				else if (mm == 9)
				{
					if (date<=5)
					{
							// 没有比较过 
	if (flag == 0)
	{
		strcpy(Max_Name,name);
		strcpy(Min_Name,name);
		min_y = max_y = yy;
		min_m = max_m = mm;
		min_date = max_date = date;
	}
	else
	{
		if (yy > min_y)
		{
			strcpy(Min_Name,name);
			min_y = yy;
			min_m = mm;
			min_date = date;
		}
		// 相等情况 
		else if (yy == min_y)
		{
			if (mm > min_m)	
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
			else if (date == min_date)
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
		} 
		
		if (yy < max_y)
		{
			strcpy(Max_Name,name);
			max_y = yy;
			max_m = mm;
			max_date = date;
		}
		// 相等情况 
		else if (yy == max_y)
		{
			if (mm < max_m)	
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
			else if (date == max_date)
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
		} 
	}
	
						flag++;
					}
				}				
			}
			else
			{
					// 没有比较过 
	if (flag == 0)
	{
		strcpy(Max_Name,name);
		strcpy(Min_Name,name);
		min_y = max_y = yy;
		min_m = max_m = mm;
		min_date = max_date = date;
	}
	else
	{
		if (yy > min_y)
		{
			strcpy(Min_Name,name);
			min_y = yy;
			min_m = mm;
			min_date = date;
		}
		// 相等情况 
		else if (yy == min_y)
		{
			if (mm > min_m)	
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
			else if (date == min_date)
			{
				strcpy(Min_Name,name);
				min_y = yy;
				min_m = mm;
				min_date = date;
			}
		} 
		
		if (yy < max_y)
		{
			strcpy(Max_Name,name);
			max_y = yy;
			max_m = mm;
			max_date = date;
		}
		// 相等情况 
		else if (yy == max_y)
		{
			if (mm < max_m)	
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
			else if (date == max_date)
			{
				strcpy(Max_Name,name);
				max_y = yy;
				max_m = mm;
				max_date = date;
			}
		} 
	}
	
				flag ++;	
			}
		}

		
	}
	if (flag != 0)
		printf("%d %s %s",flag,Max_Name,Min_Name);
	else 
		printf("0");
	
	return 0;
}
