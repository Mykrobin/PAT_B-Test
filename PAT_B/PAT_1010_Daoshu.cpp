//  �Զ���ʽ����

# include <stdio.h>

int main(void)
{
	//  ��¼ϵ���Լ�����ʽ�Ĵ���
	int A[1000]={0}; // ��¼ϵ��
	int B[1000]={0}; // ��¼����ʽ�Ĵ���
	int i, flag=0; 
	int n;
	//  ����ϵ���Լ�����
	for (i=0; flag==0; i++) 
	{
		scanf("%d",&A[i]);
		scanf("%d",&B[i]);
		if (getchar() == 10)
			flag=1;
	}
	n = (i--);
	//  ���������Ķ���ʽ
//	for (i=0; i<n; i++) 
//	{
//		printf("%d %d \n",A[i],B[i]); 
//	}
	//  ���ζ�ÿһ����н����� 
	for (i=0; i<n; i++)
	{
		A[i] = B[i] * A[i];
		
		if (0 < B[i])
		{
			B[i]--;
		}
		else
		{
			n--;
			break;
		}
	}
		
	for (i=0; i<n-1; i++) 
	{
		printf("%d %d ",A[i],B[i]); 
	}
	printf("%d %d",A[n-1],B[n-1]);
	
	
	return 0;
 } 
