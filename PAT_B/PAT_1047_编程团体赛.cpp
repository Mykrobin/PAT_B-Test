// 1047 ���������
# include <stdio.h>
# define Max 1001
int main(void)
{
	int N, val, t_num, p_num, i;
	int max; // ��¼�÷���ߵĶ����� 
	int final[Max] = {0};
	scanf("%d",&N);
	while (N>0)
	{
		scanf("%d-%d %d",&t_num,&p_num,&val);
		final[t_num] += val;
		N--;
	}
	max = 1; 
	for (i=2; i<Max; i++)
	{
		if (final[max] < final[i])
			max = i;
	}
	printf("%d %d",max, final[max]);
	
	return 0;
}
