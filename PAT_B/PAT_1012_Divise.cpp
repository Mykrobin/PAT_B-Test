/*
����һϵ�����������밴Ҫ������ֽ��з��࣬��������� 5 �����֣�
A1 = �ܱ� 5 ����������������ż���ĺͣ�
A2 = ���� 5 ������ 1 �����ְ�����˳����н�����ͣ������� n1-n2+n3-n4;
A3 = �� 5 ������ 2 �����ֵĸ�����
A4 = �� 5 ������ 3 �����ֵ�ƽ��������ȷ��С����� 1 λ��
A5 = �� 5 ������ 4 ��������������֡�
*/

// ����

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int N;
	int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
	float A4 = 0.0;
	int flag_1=0, flag_2=0, flag_3=0, flag_4=0, flag_5=0;
	int *A;
	int i;
	int temp;
	
	//  ��������
	//***********************
	//  ע��int mian ����   [Error] ld returned 1 exit status
	scanf("%d",&N);
	A = (int *)malloc(N*(sizeof(int)));
	for (i=0; i<N; i++)
	{
		scanf("%d",&A[i]);
	}
	
	//  �����ݽ��з���
	for (i=0; i<N; i++)
	{
		temp = A[i]%5;
		
		switch(temp)
		{
			case 0:
				if (A[i]%10 == 0)
				{
					flag_1++;
					A1 += A[i];
				}
				break;
			case 1:
				{
					flag_2++;
					if (flag_2%2 == 1)
					{
						A2+=A[i];
					}
					else
					{
						A2-=A[i];
					}
				}
				break;
			case 2:
				flag_3++;break;
			case 3:
				{
					flag_4++;
					A4 += A[i];
				}
				break;
			case 4:
				{
					flag_5++;
					A5 = A5>A[i]?A5:A[i];
				}
				break;
			default:break;
		}
	}
	A4 = A4/flag_4;
	A3 = flag_3;
	
	if (flag_1 == 0) 
	{
		printf("N ");
	}
	else
		printf("%d ",A1);
		
	if (flag_2 == 0) 
	{
		printf("N ");
	}
	else
		printf("%d ",A2);
	
	if (flag_3 == 0) 
	{
		printf("N ");
	}
	else
		printf("%d ",A3);
		
	if (flag_4 == 0) 
	{
		printf("N ");
	}
	else
		printf("%0.1f ",A4);
	
	if (flag_5 == 0) 
	{
		printf("N");
	}
	else
		printf("%d",A5);
	
	return 0;
 } 
