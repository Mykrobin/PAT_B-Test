// PAT_1071_Gamble 

# include <stdio.h>
# include <stdlib.h>

typedef struct
{
	int n1, n2; // �����������ͬ������
	int b; // ��ҵ�ѹע 
	int t; // ��ҵĳ���
 }Node, *NODE;

int main(void)
{
	NODE node;
	int i;
	int left; // ���ʣ��ĳ��� 
	int n;  // ��ҽ��е���Ϸ����
	int flag = 1; // ���ñ�־λ����Ϸ�Ҳ����򲻽�����Ϸ 
	
	scanf("%d",&left);
	scanf("%d",&n);
	node = (NODE)malloc(sizeof(Node)*n);
	
	//  ������ҵĶľ���� 
	for (i=0; i<n; i++)
	{
		scanf("%d",&node[i].n1);
		scanf("%d",&node[i].b);
		scanf("%d",&node[i].t);
		scanf("%d",&node[i].n2);
	}
	// ������Ϸ��� 
	for (i=0; i<n; i++) 
	{
		// �ʽ����򲻽���������Ϸ 
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
		// ���Ӯ  
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
