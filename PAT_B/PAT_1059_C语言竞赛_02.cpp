//1059 C���Ծ���
// �ؼ��㣺�������ֵĸ�ʽ����� 
# include <stdio.h>
# include <math.h>
# define Max 10001
int Prime(int );
int main(void)
{
	int Num[Max];
	int flag[Max] = {0};  // -1 ����������� 
	// int Class[Max] = {0}; // 5�����صȽ���3����С���ˣ�1�����ɿ��� 
	// ��ÿһ�������ж��Ƿ�Ϊ�������������ϸߣ������콱ʱ�жϼ��� 
	int prime = 0; // ���ò�����ʾ��λ���Ƿ�Ϊ���� 
	int len1, len2, i, j, N, val;
	int temp = 0; // ���ò�����temp=0,����û���ҵ���temp=1�������ҵ� 
	
	scanf("%d",&N);
	len1 = N;
	for (i=1; i<=len1; i++)
	{
		scanf("%d",&Num[i]);
	}
	
	scanf("%d",&N);
	len2 = N;
	for (i=1; i<=len2; i++)
	{
		temp = 0;
		prime = 0;
		scanf("%d",&val); 
		// ��Num[]�����б�������val
		for (j=1; j<=len1; j++)
		{
			if (Num[j] == val)
			{
				temp = 1; // ���ñ�־λΪ1����ʾ�ҵ��� 
				break; 
			}
		}
		// ����ҵ�����Ƚ��Ƿ������Ʒ 
		if(1 == temp) 
		{
			// �ж϶�Ӧ��jֵ�Ƿ�Ϊ���� 
			if (1 == Prime(j))
			{
				prime = 1;
			 } 
			// �����Ʒ
			if (-1 == flag[j])
			{
				printf("%04d: Checked\n",val);
			 }
			 // û����� 
			 else if (0 == flag[j])
			 {
			 	if (1 == j) 
			 	{
			 		printf("%04d: Mystery Award\n",val);
				 }
				 else if (1 == prime)
				 {
				 	printf("%04d: Minion\n",val);
				 }
				 else 
				 {
				 	printf("%04d: Chocolate\n",val);
				 }
			 	// �����֮�����ñ�־λΪ-1 
			 	flag[j] = -1;
			 }
			
		 } 
		// �������Are you kidding? 
		else
		{
			printf("%04d: Are you kidding?\n",val);
		}
	}
	return 0;
}

int Prime(int n)
{
	int i = 2;
	
	for (i; i<=sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
