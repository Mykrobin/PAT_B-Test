// 1083 �Ƿ������ȵĲ�
# include <stdio.h>
# include <math.h>
# define Max 10001

int main(void)
{
	int i, N, temp;
	int Diff[Max] = {0}; // ��¼��ͬ�����ĸ��� 
	int val = 0; // ��� 
	int max = 0; // ��¼val�����ֵ 
	scanf("%d",&N);
	
	for(i=1; i<=N; i++)
	{
		scanf("%d",&temp);
		val = abs(temp - i);
		Diff[val]++;
		if (max < val)
		{
			max = val; 
		}
	}
	// ��������� Diff[0] 
	for (i=max; i>=0; i--)
	{
		if (Diff[i] >= 2)
		{
			printf("%d %d\n",i,Diff[i]);
		}
	}
	
	return 0;
}
