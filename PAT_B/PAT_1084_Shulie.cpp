//  PAT_1084_Shulie
// ��bug 
# include <stdio.h>
# include <stdlib.h>
# define Max_Size 100000

int main(void)
{
	int *S = (int *)malloc(sizeof(int)*Max_Size);
	int *S_New = (int *)malloc(sizeof(int)*Max_Size);
	int *Arr = (int *)malloc(sizeof(int)*Max_Size);
	
	int N, M;
	int i;
	int num;
	int cnt = 0, flag = 0, len = 1;
	
	scanf("%d",&M);
	scanf("%d",&N);
	S[0] = M;
	
	// ��Ϊ����������� 
	while (--N)
	{
		// 1. ���α���ԭ�ַ�����������ͬ�ַ����¼�ַ� ����cnt+1������flag���� 
		// ���� 
		cnt = 0;
		flag = 1;
		num = S[0];
		for (i=1; i<len; i++)
		{
			// ��� 
			if (num == S[i])
			{
				flag++;
			}
			else
			{
				Arr[cnt] = flag;
				S_New[cnt] = num;
				flag = 1;
				num = S[i];
				cnt++;
			}
		}
		Arr[cnt] = flag;
		S_New[cnt] = num;
		// 2. �����¼ÿ�����ֵ�Ԫ�ظ���
		// 3. ��Ԫ�غͼ�¼��Ԫ�ظ����ϲ���һ�𣬹�����µ��ַ���S_New
		for (i=0; i<=cnt; i++)
		{
			S[2*i] = S_New[i];
			S[2*i+1] = Arr[i];
		}
		// 4. ��S_New��ֵ��S 
		len = 2*(cnt+1);
	}
	
	// ����
	if (cnt != 0)
		for (i=0; i<len; i++) 
		{
			printf("%d",S[i]);
		}
	else
		printf("%d",S[0]);
		printf("\n%d\n",len);
	
	return 0;
}

