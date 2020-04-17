//  PAT_1031_Check_ID 
//  �������֤�����Ƿ���� 

# include <stdio.h> 
# include <stdlib.h>
# include <string.h>

// ���������д��������� 
typedef struct 
{
	char ID[18]; // 18λ���֤����
 }Node, * NODE;

int main(void)
{
	NODE node;
	int Weigh[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; 
	
	//  ע�⣬�˴������ַ����Ͳ��üӡ��� 
	char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	
	int n; // ��¼�������ݵĸ���
	int i, j;
	int len = 1; 
	int *Sum, *flag; // �ֱ��������������ж��Ƿ�Ϸ��ı�־ 
	scanf("%d",&n);
	// ��̬�����ڴ�
	node = (NODE)malloc(sizeof(Node)*n);
	Sum = (int *)malloc(sizeof(int)*n);
	flag = (int *)malloc(sizeof(int)*n);
	
	//  ������Ϣ 
	for (i=0; i<n; i++)
	{
		scanf("%s",node[i].ID); // ����ID 
		Sum[i] = 0;
		flag[i] = 0;
	}

	//  �����Ƿ�Ϸ� 
	for (i=0; i<n; i++)
	{
		for (j=0; j<17; j++)
		{
			//  �ж�ǰ17λ�Ƿ�ȫ������ 
			if (node[i].ID[j]>='0' && node[i].ID[j]<='9')
			{
				flag[i] = 1;
			}
			else
			{
				//  ��������ϣ����� �˳��˴�ѭ�� 
				flag[i] = -1;
				break;
			}
		}
		// ������ֲ���������涨�ģ���len ��־λΪ-1 
		if (flag[i] == -1) 
			len = 0;
	}
	
	// �����Ȩ֮�� 
	for (i=0; i<n; i++) 
	{
		// �������Ϸ���ID����У�� 
		if (flag[i] != -1)
		{
			for (j=0; j<17; j++)
			{
				Sum[i] += (node[i].ID[j]-'0')*Weigh[j];
			 } 
		}
		// �ȶ�У��λ
		if (M[Sum[i]%11] == node[i].ID[17]) 
		{
			flag[i] = 1;
		}
		else
		{
			flag[i] = -1;
			len = 0;
		}
	} 
	
	// �����Ϣ
	if (len == 1)
		printf("All passed\n");
	else
	{
		for (i=0; i<n; i++)
		{
			if (flag[i] != 1)
			{
				for (j=0; j<18; j++)
				{
					printf("%c",node[i].ID[j]);
				}
				printf("\n");
			}	
		}
	}
	
	return 0;
}
