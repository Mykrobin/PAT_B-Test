//  PAT_1046_Fit

# include <stdio.h>
# include <stdlib.h>

typedef struct
{
	int A1; // A 喊 
	int A2; // A 划 
	int B1; 
	int B2;
}Node, *NODE;

int main(void)
{
	int N;
	int i;
	int Sum;
	NODE node;
	scanf("%d",&N);
	int Win_A=0, Win_B=0; // 分别记录 A B 赢的次数 
	
	// 动态分配内存 
	node = (NODE)malloc(sizeof(Node)*N);
	
	// 依次输入信息 
	for (i=0; i<N; i++) 
	{
		scanf("%d",&node[i].A1);
		scanf("%d",&node[i].A2);
		scanf("%d",&node[i].B1);
		scanf("%d",&node[i].B2);
		
		Sum = node[i].A1 + node[i].B1;
		// 判断AB的胜负情况
		if (Sum==node[i].A2 && Sum==node[i].B2) 
			continue;
		if (Sum==node[i].A2)
			Win_A++;
		if (Sum==node[i].B2)
			Win_B++;
	}
	
	// 输出结果
	printf("%d %d",Win_B, Win_A);
	
	return 0;
}
