// 1072 ��ѧ����
# include <stdio.h>

int main(void)
{
	int N, M;
	int i, j, k, len;
	char S[6];
	int Good[6]={0}, num;
	int sum_name=0, sum_good=0, flag=0;
	
	scanf("%d%d",&N, &M);
	// ��¼Υ����Ʒ��� 
	for (i=0; i<M; i++)
	{
		scanf("%d",&Good[i]);
	}
	// ����ѧ��������������Ʒ��� 
	for (j=0; j<N; j++)
	{
		// ���� 
		scanf("%s",S);
		// ��Ʒ���� 
		scanf("%d",&len);
		// ������Ʒ��� 
		flag = 0; // �����ѧ����Υ����Ʒ����������� 
		for (i=0; i<len; i++)
		{
			scanf("%d",&num);
			for (k=0; k<M; k++)
			{
				if (flag == 0) 
					if (num==Good[k])
					{
						sum_name++;
						flag=1; // �Ѿ����������
						printf("%s:",S); 
					}
				if (num == Good[k])
				{
					// Υ����Ʒ���� 
					sum_good++;
					printf(" %04d",num);
				}
			 }
			  
		}
		if (flag == 1)
			printf("\n");
	}
	printf("%d %d\n",sum_name, sum_good);
	
	return 0;
 } 
