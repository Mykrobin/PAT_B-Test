// PAT_1023_Min_Number

# include <stdio.h> 

int main(void)
{
	int i, j, k=0;
	int N[10];
	int New[50];
	int len = 0;
	
	for (i=0; i<10; i++)
	{
		scanf("%d",&N[i]);
		len += N[i];
	}
	
	// �������� 
	for (i=0; i<10; i++)
	{
		for (j=0; j<N[i]; j++)
		{
			New[k++] = i;
		 } 
	}
	//  ������ʽ
	if (New[0] == 0) 
	{
		for (i=1; i<len; i++)
		{
			if (New[i] != 0)
			{
				New[0] = New[i];
				New[i] = 0; 
				break;
			}
		}
	}
	 
	// ������� 
	for (i=0; i<len; i++)
	{
		printf("%d",New[i]);
	 } 
	 
	return 0;
}
