// 1045 ��������
# include <stdio.h>
# include <algorithm>
# define Max 100001
using namespace std;

// ����һ�¿���������Ԫ��λ�ò������仯�Ƿ�Ϊ��Ԫ 
int main(void)
{
	int n, num=0, i, max=0;
	int A[Max], B[Max], C[Max];
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
		B[i] = A[i];
	}
	sort(A, A+n);
	for (i=0; i<n; i++)
	{
		if (A[i] == B[i] && B[i]>max) 
		{
			C[num++] = B[i];
		}
		if (B[i] > max)
		{
			max = B[i];
		}
	 } 
	 printf("%d\n",num);
	 if (0 == num)
	 {
	 	printf("\n");
	 	return 0;
	 }
	 for (i=0; i<num; i++)
	 {
	 	if (i!=0)
	 		printf(" ");
	 	printf("%d",C[i]);
	 }
	 printf("\n");
	 
	return 0;
}
