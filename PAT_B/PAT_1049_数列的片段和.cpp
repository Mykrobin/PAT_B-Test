// PAT_1049_���е�Ƭ�κ� 

# include <stdio.h>
# define Max 100010

int main(void)
{
	int N;
	int i;
	double val; // ��¼��������� 
	double sum = 0; // �������ĺ� 
	
	scanf("%d",&N);
	
	// ��Ȩֵ
	for (i=1; i<=N; i++)
	{
		scanf("%lf",&val);
		sum += val * i * (N-i+1);
	}
	
	printf("%.2f",sum);
	
	return 0;
}
