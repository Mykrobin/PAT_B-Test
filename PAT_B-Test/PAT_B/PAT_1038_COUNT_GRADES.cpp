// PAT_1038_COUNT_GRADES
// ���г�ʱ���ÿռ任ʱ�� 
# include <stdio.h>
# include <stdlib.h>

typedef struct Node
{
	int val;
}NODE, *pNODE;

int main(void)
{
	int n, k, flag; 
	int i, j;
	scanf("%d",&n);
	pNODE node_1 = (pNODE)malloc(sizeof(NODE)*n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&node_1[i].val);
	}
	
	scanf("%d",&k);
	pNODE node_2 = (pNODE)malloc(sizeof(NODE)*n);
	
	for (j=0; j<k; j++)
	{
		flag = 0; 
		scanf("%d",&node_2[j].val);
		// ���� 
		for (i=0; i<n; i++)
		{
			if (node_1[i].val == node_2[j].val)
			{
				flag++;
			}
		}
		printf("%d",flag);
		if (j != k-1)
			printf(" ");
	}
	
		
	return 0;
}
