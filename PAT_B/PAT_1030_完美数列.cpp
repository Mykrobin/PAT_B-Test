// 1030 ��������
# include <stdio.h>
# include <algorithm>
# include <stdlib.h>
# include <vector>
using namespace std; // ��д 

int main(void)
{
	int N;
	long P; 
	int i, j;
	int left; // ����ʣ�೤�� 
	int len=0, max = 0; // �ֱ�����ʱ����ʱ�ĳ��ȣ�len�����Լ��ۼ����ֵmax 
	scanf("%d",&N);
	scanf("%ld",&P);
	// ���ÿ⺯���������鲢�������� 
	vector<int> A(N);
	for (i=0; i<N; i++) 
	{
		scanf("%d",&A[i]);
	}
	sort(A.begin(), A.end());
	
	for (i=0; i<N; i++) 
	{
		// A[i] �����������Сֵ��A[j]Ϊ���ֵ
		// ��֪�ۼƳ������Ϊmax�����������Ƿ����maxֵ���� 
		// ��A[i]��A[i+max]֮���ֵ�����ٴαȽ�
		for (j=i+max; j<N; j++)
		{
			// ����A[i]�����ж೤�����С��max���Զ��˳������ؼ�� 
			left = N - i + 1;
			if (left <= max)
				break;
			// ������󳤶�
			// ��ʱ��СֵΪA[i]�����ֵA[j] 
			if (A[i]*P >= A[j])
			{
				len = j-i+1;
				//printf("A[i] = %d,A[j] = %d,===>%d\n",A[i],A[j],len); 
				// �����ǰ���ȱ��ۼ����ֵ����������ֵ	
				if (len > max)
					max = len;
			}
			else
			{
				break;	
			}	
		} 
	}
	printf("%d",max);
	
	return 0;
}
