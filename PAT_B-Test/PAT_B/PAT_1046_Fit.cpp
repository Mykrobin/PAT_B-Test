//  PAT_1046_Fit

# include <stdio.h>
# include <stdlib.h>

typedef struct
{
	int A1; // A �� 
	int A2; // A �� 
	int B1; 
	int B2;
}Node, *NODE;

int main(void)
{
	int N;
	int i;
	int Sum;
	NODE node;
	scanf("%d",&N);
	int Win_A=0, Win_B=0; // �ֱ��¼ A B Ӯ�Ĵ��� 
	
	// ��̬�����ڴ� 
	node = (NODE)malloc(sizeof(Node)*N);
	
	// ����������Ϣ 
	for (i=0; i<N; i++) 
	{
		scanf("%d",&node[i].A1);
		scanf("%d",&node[i].A2);
		scanf("%d",&node[i].B1);
		scanf("%d",&node[i].B2);
		
		Sum = node[i].A1 + node[i].B1;
		// �ж�AB��ʤ�����
		if (Sum==node[i].A2 && Sum==node[i].B2) 
			continue;
		if (Sum==node[i].A2)
			Win_A++;
		if (Sum==node[i].B2)
			Win_B++;
	}
	
	// ������
	printf("%d %d",Win_B, Win_A);
	
	return 0;
}
