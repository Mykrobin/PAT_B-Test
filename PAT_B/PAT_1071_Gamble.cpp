// PAT_1071_Gamble 

# include <stdio.h>
# include <stdlib.h>

typedef struct
{
	int n1, n2; // 输入的两个不同正整数
	int b; // 玩家的压注 
	int t; // 玩家的筹码
 }Node, *NODE;

int main(void)
{
	NODE node;
	int i;
	int left; // 玩家剩余的筹码 
	int n;  // 玩家进行的游戏场次
	int flag = 1; // 设置标志位，游戏币不足则不进行游戏 
	
	scanf("%d",&left);
	scanf("%d",&n);
	node = (NODE)malloc(sizeof(Node)*n);
	
	//  输入玩家的赌局情况 
	for (i=0; i<n; i++)
	{
		scanf("%d",&node[i].n1);
		scanf("%d",&node[i].b);
		scanf("%d",&node[i].t);
		scanf("%d",&node[i].n2);
	}
	// 公布游戏结果 
	for (i=0; i<n; i++) 
	{
		// 资金不足则不进行往后游戏 
		if (node[i].t>left)
		{
			flag = 0;
		}
		else	
			flag = 1;
		if (flag == 0)
		{
			printf("Not enough tokens.  Total = %d.\n",left);
			continue;
		}
		// 玩家赢  
		else if ((node[i].n1<node[i].n2 && node[i].b==1) || (node[i].n1>node[i].n2 && node[i].b==0))  
		{
			left =  left + node[i].t;
			printf("Win %d!  Total = %d.\n",node[i].t,left);
		}
		else
		{
			left =  left - node[i].t;
			printf("Lose %d.  Total = %d.\n",node[i].t,left);
			if (left <= 0)
			{
				printf("Game Over.\n");
				return 0;
			}
		}
	}
	
	return 0;
}
