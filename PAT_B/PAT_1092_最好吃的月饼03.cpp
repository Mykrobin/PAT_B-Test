// 1092 ��óԵ��±�03 AC 
	// ��־λ������ ����ȡ�����ֵʱ����һ�����ֵǰ���ÿո�
	// ��֤��Ŀ ��ĩ�޶���ո�
	// ���ü���������Ŀ������maxֵ���� 
# include <stdio.h>
# define Max 1000001

int main(void)
{
	int N, M, val;
	int i, j;
	int max,flag=0; // �ֱ��¼���ֵ�� ��־λ
	// ��־λ������ ����ȡ�����ֵʱ����һ�����ֵǰ���ÿո�
	// ��֤��Ŀ ��ĩ�޶���ո�
	// ���ü���������Ŀ������maxֵ���� 
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
		// �������ֵ����ֵ
		if (max < Sum[i])
		{
			max = Sum[i];
		}
	}
	// ������ս��
	printf("%d\n",max);
	for(i=0; i<N; i++)
	{
		if (Sum[i]==max)
		{
			// ͨ����־λflag ���������ʽ 
			if(0 == flag)
			{
				flag = 1;
			 } 
			 else
			 {
			 	printf(" ");
			 }
			printf("%d",i+1);
		}
	}	
	
	return 0;
}
