# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define Max 1002

int main(void)
{
	long long Num[Max], a;
	int flag, i;
	int S_num[Max], b;
	int len_0, len_1;
	scanf("%d",&len_0);
	
	// �ȶ�ȡ׼��֤�š��������źͿ������� 
	for (i=0; i<len_0; i++)
	{
		scanf("%lld",&a);
		scanf("%d",&flag);
		scanf("%d",&b);
		// ��׼��֤�źͿ������Ŵ����±�Ϊ�������ŵ������� 
		Num[flag] = a;
		S_num[flag] = b;
	}
	scanf("%d",&len_1);
	for (i=0; i<len_1; i++)
	{
		scanf("%d",&flag);
		printf("%lld %d\n",Num[flag],S_num[flag]);
	}
	
	return 0;
} 
