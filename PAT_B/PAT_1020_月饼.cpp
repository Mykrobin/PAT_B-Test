// PAT_1020_�±� 

# include <stdio.h> 
# include <stdlib.h>
typedef struct Node
{
	double Cun;
	double Shou;
	double M;
}NODE, *pNode;

int main(void)
{
	int N; // Number 
	double Max; // Needs
	int i, j;
	double In = 0.0; 
	scanf("%d",&N);
	scanf("%lf",&Max);
	NODE No;
	pNode node = (pNode)malloc(sizeof(NODE)*N);
	
	//������Ϣ���������Լ۱� 
	for (i=0; i<N; i++)
	{
		scanf("%lf",&node[i].Cun);
	}
	
	for (i=0; i<N; i++)
	{
		scanf("%lf",&node[i].Shou);
		node[i].M = (double)node[i].Shou/(double)node[i].Cun;
	}
	
	// ����
	for (i=1; i<N; i++) 
	{
		for (j=0; j<i; j++)
		{
			if (node[i].M > node[j].M)
			{
				No = node[i];
				node[i] = node[j];
				node[j] = No;
			} 
		}
	}
	// ���� 
//	for (i=0; i<N; i++)
//	{
//		printf("i = %d Cun = %d, Xingjiabi = %f\n",i,node[i].Cun,node[i].M);
//	}
	i=0;
	// ��ʼ���� 

	while (Max > 0 && i!=N)
	{
		if (node[i].Cun <= Max)
		{
			In += node[i].Shou;
			Max -= node[i].Cun;
			i++;
		}
		else
		{
			In = In+(Max*node[i].M);
			break;
		}
	}
	printf("%.2f\n",In);
	
	return 0; 
}
