//  Auto_PAT
//  “答案正确”的条件是：
//         字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
//         任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
//         如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

# include <stdio.h>
# include <stdlib.h>
 
//  用链表来实现字符的存储 
typedef struct ch
{
	char val[101];
	struct ch * next;
}CH, * PCH;

int main(void)
{
	int n;
	PCH pHead, pTail; // 指针类型 (头指针)(尾指针)
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
	// 初始化链表，分配内存 
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		PCH pNode = (PCH)malloc(sizeof(CH));
			
		pTail->next = pNode;
		pNode->next = NULL;
		pTail = pNode;				
	}
	// 输入字符
	pNODE = pHead->next;
	for (i=0; i<n; i++)
	{
		scanf("%s",pNODE->val);
		pNODE = pNODE->next; 
	}	
	// 下面对输入的内容进行判断 
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
				// 计算 PT 前面的 中间的 后面的A 的个数
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
					// P 前面 
				if (P==0)
				{
					if(temp == 'A') 
						count1++;
				} 
				// pT 之间 
				if (P==1 && T==0)
				{
					if(temp == 'A') 
						count2++;
				} 
				
				// T 后面 
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
