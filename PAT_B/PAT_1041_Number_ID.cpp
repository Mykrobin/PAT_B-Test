// PAT_1041_Number_ID

# include <stdio.h>
# include <stdlib.h>

typedef struct Node
{
	char ch[18];
	int n1, n2;
}NODE, *pNODE;

int main(void)
{
	int n, m, search;
	int i, j;
	int N_i;
	int flag = 0; 
	scanf("%d",&n);
	pNODE node = (pNODE)malloc(sizeof(NODE)*n);
	
	// ���� ������Ϣ 
	for (i=0; i<n; i++)
	{
		scanf("%s",node[i].ch);
		scanf("%d",&node[i].n1);
		scanf("%d",&node[i].n2);
	}
	// ����Ҫ��ѯ������
	scanf("%d",&m);
	// ��ѯ
	for (i=0; i<m; i++) 
	{
		scanf("%d",&search);
		flag = 0;
		// ���Ѿ��������Ϣ�в�ѯ
		for (j=0; j<n; j++) 
		{
			if (search == node[j].n1)
			{
				// ����ҵ��ˣ���flag ����Ϊ1 
				N_i = j;
				flag = 1;
				break;
			}
		}
		//  �����Ϣ 
		if (flag == 1)
		{
			for (j=0; j<16; j++)
			{
				printf("%c",node[N_i].ch[j]);
			}
			printf(" %d\n",node[N_i].n2);
		}
	}
	
	return 0;
}
