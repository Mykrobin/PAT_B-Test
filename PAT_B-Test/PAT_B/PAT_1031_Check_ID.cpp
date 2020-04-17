//  PAT_1031_Check_ID 
//  检验身份证号码是否合理 

# include <stdio.h> 
# include <stdlib.h>
# include <string.h>

// 如果不这样写，编译错误 
typedef struct 
{
	char ID[18]; // 18位身份证号码
 }Node, * NODE;

int main(void)
{
	NODE node;
	int Weigh[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; 
	
	//  注意，此处输入字符类型不用加‘’ 
	char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	
	int n; // 记录输入数据的个数
	int i, j;
	int len = 1; 
	int *Sum, *flag; // 分别用来计算结果和判断是否合法的标志 
	scanf("%d",&n);
	// 动态分配内存
	node = (NODE)malloc(sizeof(Node)*n);
	Sum = (int *)malloc(sizeof(int)*n);
	flag = (int *)malloc(sizeof(int)*n);
	
	//  输入信息 
	for (i=0; i<n; i++)
	{
		scanf("%s",node[i].ID); // 输入ID 
		Sum[i] = 0;
		flag[i] = 0;
	}

	//  计算是否合法 
	for (i=0; i<n; i++)
	{
		for (j=0; j<17; j++)
		{
			//  判断前17位是否全是数字 
			if (node[i].ID[j]>='0' && node[i].ID[j]<='9')
			{
				flag[i] = 1;
			}
			else
			{
				//  如果不符合，即刻 退出此次循环 
				flag[i] = -1;
				break;
			}
		}
		// 如果发现不符合输入规定的，置len 标志位为-1 
		if (flag[i] == -1) 
			len = 0;
	}
	
	// 计算加权之和 
	for (i=0; i<n; i++) 
	{
		// 针对输入合法的ID进行校验 
		if (flag[i] != -1)
		{
			for (j=0; j<17; j++)
			{
				Sum[i] += (node[i].ID[j]-'0')*Weigh[j];
			 } 
		}
		// 比对校验位
		if (M[Sum[i]%11] == node[i].ID[17]) 
		{
			flag[i] = 1;
		}
		else
		{
			flag[i] = -1;
			len = 0;
		}
	} 
	
	// 输出信息
	if (len == 1)
		printf("All passed\n");
	else
	{
		for (i=0; i<n; i++)
		{
			if (flag[i] != 1)
			{
				for (j=0; j<18; j++)
				{
					printf("%c",node[i].ID[j]);
				}
				printf("\n");
			}	
		}
	}
	
	return 0;
}
