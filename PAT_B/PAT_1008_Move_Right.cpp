//  ������������λ
//  ͨ������������±������Ԫ��
//  **********************************
//  18 �д������Ҫ 

# include <stdio.h>

int main(void) 
{
	int n, temp; //  nΪ������ܳ��ȣ�tempΪ��Ҫ�ƶ���λ��
	int A[100]; 
	int flag = 0;
	int i, k;
	
	scanf("%d %d",&n, &temp);
	//  ע �����������仰������ִ��� 
	temp = temp%n;
	// ************************************ 
	//  ��������Ԫ�� 
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
/*	
	//  ���Ԫ��, ����һ 
	for (i=0; i<n; i++) 
	{
		if (i<temp)
			flag = 1;
		else
			flag = 0;
		
		if (flag == 1)
		{
			k = n-temp+i;  //   ��� 5 6 
		}
		else
		{
			k = i-temp;   // ��� 1 2 3 4 
		}
		printf("%d",A[k]);
		if (i+1 != n)
		{
			printf(" ");
		}
	}
*/
	//  ���Ԫ�أ�������
	
	for (i=0; i<n; i++) 
	{
		k = (i+n-temp)%n;
		printf("%d",A[k]);
		
		if (i+1 != n)
		{
			printf(" ");
		}
	}
			
	return 0;
}
