//  1019 ���ֺڶ� 
//  һ�����Ե�û��ͨ�� �����Ѿ���� 
//  ����ĸ�ʽ���淶�������� 

# include <stdio.h> 

int main(void)
{
	int val; // ��¼���������
	int i, j;
	int N[4];
	int max=0, min=0; 
	
	scanf("%d",&val);
	//  �����ֲ�� 
	for (i=0; i<4; i++)	
	{
		N[i] = val%10;
		val /= 10;
	}
	// �������� 
	for (i=1; i<4; i++) 
	{
		for (j=0; j<4; j++)
		{
			if (N[i] < N[j])
			{
				val = N[i];
				N[i] = N[j];
				N[j] = val; 
			}
		}
	}
	
	min = N[0]*1000+N[1]*100+N[2]*10+N[3];
	max = N[3]*1000+N[2]*100+N[1]*10+N[0];
	val = max - min;
	
	while (1)
	{
		// ѧ����������ʽ ��0���� 
		printf("%04d - %04d = %04d\n",max,min, val);
		if (val==0 || val==6174)
			break;
			//  �����ֲ�� 
		for (i=0; i<4; i++)	
		{
			N[i] = val%10;
			val /= 10;
		}
		// �������� 
		for (i=1; i<4; i++) 
		{
			for (j=0; j<4; j++)
			{
				if (N[i] < N[j])
				{
					val = N[i];
					N[i] = N[j];
					N[j] = val; 
				}
			}
		}
		
		min = N[0]*1000+N[1]*100+N[2]*10+N[3];
		max = N[3]*1000+N[2]*100+N[1]*10+N[0];
		val = max - min;
	}
	
	
	return 0;
}
