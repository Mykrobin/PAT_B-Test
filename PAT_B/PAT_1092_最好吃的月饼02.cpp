// 1092 ��óԵ��±�02 ERROR 
# include <stdio.h>
# define Max 101

int main(void)
{
	int N, M, val;
	int i, j;
	int max,num_max=0; // �ֱ��¼���ֵ�����ֵ���ֵĴ��� 
	int Sum[Max] = {0};
	scanf("%d %d",&N, &M);
	// ����ÿ�ֵ����� 
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
		{
			scanf("%d",&val);
			Sum[j] += val;
		}
	}
	max = Sum[0]; 
	for (i=0; i<N; i++)
	{
		// �������ֵ����ֵ�Լ����ֵ���ֵĴ��� 
		if (max == Sum[i])
		{
			num_max++;
		}
		else if (Sum[i] > max)
		{
			num_max = 0;
			max = Sum[i];
			num_max++;
		}
	}
	// ������ս��
	printf("%d\n",max);
	for(i=0; i<N; i++)
	{
		if (num_max>0 && Sum[i]==max)
		{
			printf("%d",i+1);
			num_max--;
			if (num_max > 0)
			{
				printf(" ");
			}
		}
	}	
	
	return 0;
}
