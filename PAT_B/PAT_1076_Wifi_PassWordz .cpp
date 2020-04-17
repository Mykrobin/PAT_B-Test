// PAT_1076_Wifi_PassWordz 

# include <stdio.h>
# include <stdlib.h>

typedef struct Node
{
	char S[16];
}NODE, *pNODE;

int main(void)
{
	int n;
	int i;
	int Arr[100];
	pNODE node; 
	scanf("%d",&n);
	getchar();
	
	node =  (pNODE)malloc(sizeof(NODE)*n);
	
	for (i=0; i<n; i++)
	{
		gets(node[i].S);

		if (node[i].S[2] == 'T')
		{
			Arr[i] = node[i].S[0] - 'A' +1;
		}
		else if (node[i].S[6] == 'T')
		{
			Arr[i] = node[i].S[4] - 'A' +1;
		}
		else if (node[i].S[10] == 'T')
		{
			Arr[i] = node[i].S[8] - 'A' +1;
		}
		else if (node[i].S[14] == 'T')
		{
			Arr[i] = node[i].S[12] - 'A' +1;
		}
	} 
	
	for (i=0; i<n;i++)
		printf("%d",Arr[i]);
	
	
	return 0;
}
