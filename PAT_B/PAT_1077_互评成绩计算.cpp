// 1077 �����ɼ�����
# include <stdio.h>
# define Max 101

int main(void)
{
	int N, len, num=0, i;
	int flag = -1; // flag���Ϊ��һ����Ч��ѧ���ɼ� 
	int M, sum=0, min_s, max_s;
	int Score[Max] = {0};
	scanf("%d %d",&N,&M);
	len = N;
	while (len > 0)
	{
		sum = 0.0;
		num = 0;
		flag = -1; // ÿ�ζ����ֵΪ-1 
		// ÿ����е����������ҳ���Ч�ɼ��������ҵ������Сֵ 
		for (i=0; i<N; i++)
		{
			// Score[0]Ϊ��ʦ���֣�������G1���� 
			scanf("%d",&Score[i]); 
			// �ҵ���һ����Ч��ѧ���ɼ� 
			if (i>0 && flag==-1)
			{
				if (Score[i]>=0 && Score[i]<=M)
					flag = 0;
			}
			// ���ҵ���ѧ���ɼ���¼Ϊ��ǰ�������Сֵ 
			if (0 == flag)
			{
				// ��¼��һ����Ч��ѧ���ɼ� 
				min_s = max_s = Score[i];
				flag = 1;
			}
			// ͳ����Ч����
			if (i>0 && Score[i]>=0 && Score[i]<=M)
			{
				sum += Score[i];
				// ��Ч�����ĸ��� 
				num++;
				// ���������Сֵ 
				if (Score[i] > max_s)
					max_s = Score[i];
				if (Score[i] < min_s)
					min_s = Score[i];
			} 			 
		 } 
		 num -= 2;
		 // �ܳɼ�����
		 // ѧ���ɼ�Ϊȥ�������Сֵ��ƽ��ֵ
		 // �ܳɼ�Ϊѧ�����ճɼ�����ʦ���ճɼ���ֵ
		 printf("%d\n",(int)(((((sum-min_s-max_s)*1.0/num)+Score[0])*1.0/2)+0.5)); 
		
		len--; // ������һ�� 
	}
	
	return 0;
}
