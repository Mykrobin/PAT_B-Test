//  Auto_PAT
//  ������ȷ���������ǣ�
//         �ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
//         �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
//         ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

# include <stdio.h>
# include <stdlib.h>
 
//  ��������ʵ���ַ��Ĵ洢 
typedef struct ch
{
	char val[101];
	struct ch * next;
}CH, * PCH;

int main(void)
{
	int n;
	PCH pHead, pTail; // ָ������ (ͷָ��)(βָ��)
	PCH pNODE;
	int i, j;
	int P,T;
	int count1, count2, count3;
	char temp;
	count1 = count2 = count3 = 0;
	P = T = 0;
	int flag = -1;
	
	pHead = (PCH)malloc(sizeof(CH));
	pTail = pHead;
	// ��ʼ�����������ڴ� 
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		PCH pNode = (PCH)malloc(sizeof(CH));
			
		pTail->next = pNode;
		pNode->next = NULL;
		pTail = pNode;				
	}
	// �����ַ�
	pNODE = pHead->next;
	for (i=0; i<n; i++)
	{
		scanf("%s",pNODE->val);
		pNODE = pNODE->next; 
	}	
	// �������������ݽ����ж� 
	pNODE = pHead->next;
	for (i=0; i<n; i++)
	{
		count1 = count2 = count3 = 0;
		P = 0;
		T = 0;
		j = 0;
		while(pNODE->val[j] != '\0')
		{
//			printf("=================================\n");
			temp = pNODE->val[j];
			if(temp=='P'||temp=='A'|| temp=='T')
			{
				// ���� PT ǰ��� �м�� �����A �ĸ���
				if (temp == 'P')
				  P++;
//				  printf("P  ===  %d \n",P);
				if (temp == 'T')
					T++;
				if (P>1 || T>1)
					{
						flag = 0;
						break;
					}
				if (temp=='T' && P==0)  
					{
						flag = 0;
						break;
					}
					// P ǰ�� 
				if (P==0)
				{
					if(temp == 'A') 
						count1++;
				} 
				// pT ֮�� 
				if (P==1 && T==0)
				{
					if(temp == 'A') 
						count2++;
				} 
				
				// T ���� 
				if (P==1 && T==1)
				{
					if(temp == 'A') 
						count3++;
				}
				
				if (count1*count2 == count3)
					flag = 1;
				else
					flag = 0;	
				if (count2 == 0)	 
					flag = 0;
			}
			else
			{
				flag = 0;
				break;
			}
			j++;
		}
		if (P==0 || T==0)
		{
			flag = 0;
		}
//		printf("flag ==== %d\n",flag);
		if (flag == 0)
			printf("NO\n");
		else
			printf("YES\n");
		pNODE = pNODE->next; 
	}
	
	return 0;
}
