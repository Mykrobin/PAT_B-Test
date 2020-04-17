//  1015 �²��� ��16/25 �֣� // ���г�ʱ 
//  �ָ���һ�������ĵ²ŷ����������˾�������۸���¼ȡ������
//  �����ʽ��
//  �����һ�и��� 3 �����������ֱ�Ϊ��N ������������
//          L����60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־������� L �Ŀ��������ʸ񱻿���¼ȡ��
//			H��<100����Ϊ����¼ȡ�ߡ����·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
//			�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
//			�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
//			�����ﵽ����� L �Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��
//��� N �У�ÿ�и���һλ��������Ϣ��������׼��֤�� �·� �ŷ֣�����׼��֤��Ϊ 8 λ�������²ŷ�Ϊ���� [0, 100] �ڵ����������ּ��Կո�ָ���

# include <stdio.h>
# include <stdlib.h> 

int main(void)
{
	//  ����ѧ�����������¼ȡ�ߣ�����¼ȡ�� 
	int N, L, H;
	int *Num, *Dem, *Skill, *Temp, *Sum, *Flag;
	int i, j;
	int N_Sum = 0;  //  �ϸ�������� 
	int flag;
	
	scanf("%d%d%d",&N, &L, &H);
	//  ��̬�����ڴ棬�����뿼����Ϣ
	Num = (int *)malloc(N*(sizeof(int)));
	Dem = (int *)malloc(N*(sizeof(int)));
	Skill = (int *)malloc(N*(sizeof(int)));
	Sum = (int *)malloc(N*(sizeof(int)));
	Temp = (int *)malloc(N*(sizeof(int)));  //  ����ѧ���ĵ��� 
	Flag = (int *)malloc(N*(sizeof(int)));  //  ���ѧ����� 
	
	//  ���뿼����Ϣ
	for (i=0; i<N; i++) 
	{
		scanf("%d",&Num[i]);
		scanf("%d",&Dem[i]);
		scanf("%d",&Skill[i]);
		Temp[i] = 0;
		Sum[i] = Dem[i] + Skill[i]; // ��¼ѧ���ܷ� 
		Flag[i] = i;
	}
	
	//  �жϷֱ�������һ�� 
	for (i=0; i<N; i++) 
	{
		if (Dem[i]>=L && Skill[i]>=L)
		{
			Temp[i] = 1; // ��ʾ����¼ȡ 
			N_Sum++; 
			
			if (Dem[i]>=H && Skill[i]>=H)
			{
				Temp[i] = 5; // ��ʾ����¼ȡ  �ŵ�ȫ��
			}
			else if (Dem[i]>=H && Skill[i]<H) 
			{
				Temp[i] = 3; // ��ʤ��
			}
			else if (Dem[i]<H && Skill[i]<H && Dem[i]>=Skill[i])
			{
				Temp[i] = 2; // �ŵ¼���
			}
		}
		else 
		{
			Temp[i] = -1; // ��ʾѧ�����ϸ� 
		}
	}
	//  ȥ�����ϸ��˵���Ϣ 
	if (N_Sum == 0)
	{
		printf("%d\n",N_Sum);
		return 0;
	}
		
	for (i=0; i<=N_Sum; i++) 
	{
		if (Temp[i] == -1)
		{
			for (j=i; j<=N_Sum; j++)
			{
				Num[j] = Num[j+1];
				Dem[j] = Dem[j+1];
				Skill[j] = Skill[j+1];
				Sum[j] = Sum[j+1];
				Temp[j] = Temp[j+1];
				Flag[j] = Flag[j+1];
			}
			i--;  // �Ӵ˶ϵ㴦���¼�飬�����ƶ�������Ч��Ϣ
		}
	}
	// �ֶ�����
	for (i=0; i<N_Sum; i++) 
	{
		for (j=i+1; j<N_Sum; j++)
		{
			if (Sum[i]<Sum[j])
			{
				flag = Flag[i] ;
				Flag[i] = Flag[j];
				Flag[j] = flag;
			}
			else if(Sum[i] == Sum[j])
			{
				if (Dem[i] < Dem[j])
				{
					flag = Flag[i] ;
					Flag[i] = Flag[j];
					Flag[j] = flag;
				}
				else if (Dem[i] == Dem[j])
				{
					if (Num[i] > Num[j])
					{
						flag = Flag[i] ;
						Flag[i] = Flag[j];
						Flag[j] = flag;
					}
				}
				
			}
		} 
	}    
		
	//  ��������ѧ��˳��
	for (i=0; i<N_Sum; i++) 
	{
		for (j=i+1; j<N_Sum; j++)
		{
			if (Temp[i]<Temp[j])
			{
				flag = Flag[i] ;
				Flag[i] = Flag[j];
				Flag[j] = flag;
			}
		} 
	}    
	printf("%d\n",N_Sum);
	N = N_Sum;
	j=0;
	
	//  ����ϸ�ѧ����Ϣ 
	while (j<N_Sum)
	{
		for (i=0; i<N; i++)
		{
			if (Flag[i] == j)
			{
				printf("%d ",Num[i]);
				printf("%d ",Dem[i]);
				printf("%d\n",Skill[i]);
				break;
			}
		}
		j++;
	}
	
	return 0;
}
