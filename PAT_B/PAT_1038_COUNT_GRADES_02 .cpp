// PAT_1038_COUNT_GRADES_02 
// ���г�ʱ���ÿռ任ʱ�� 
# include <stdio.h>
# include <stdlib.h>
# define Max 110 

int main(void)
{
	int n, k; 
	int i;
	int val;
	scanf("%d",&n);
	int Grades[110];
	// ���ɼ������ʼ��Ϊ0������������ж����� 
	for (i=0; i<Max; i++) 
	{
		Grades[i] = 0;
	}
	// ��¼ÿ������������ 
	for (i=0; i<n; i++)
	{
		scanf("%d",&val);
		Grades[val] ++;
	}
	
	scanf("%d",&k);
	for (i=0; i<k; i++)
	{
		scanf("%d",&val);
		// ���� 
		printf("%d",Grades[val]);
		// ���������ʽ 
		if (i != k-1)
			printf(" ");
	}
	
		
	return 0;
}
