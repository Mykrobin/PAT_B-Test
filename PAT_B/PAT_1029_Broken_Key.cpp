// PAT_1029_Broken_Key
// �����ַ���ͬʱ�����ſ��Խ���
// ע��ѭ������ 
# include <stdio.h>
# include <string.h>

int main(void) 
{
	char S1[100]; // ��¼��Ӧ��������ַ� 
	char S2[100]; // ��¼ʵ��������ַ�
	char Break_Key[85]; // ��¼�����ļ�
	
	int i=0, j=0, k=0;
	int len1, len2;
	int flag = 1;
	int n = 0; // ��¼�����ļ����� 
	
	// �����ַ��� 
	gets(S1);
	gets(S2);
	
	len1 = strlen(S1);
	len2 = strlen(S2);
	
	for(i=0;i<strlen(S1);i++)
	{
		 if(S1[i]>='a'&&S1[i]<='z')
		 	S1[i]=S1[i]-32; 
	}
	for(i=0;i<strlen(S2);i++)
	{	
		 if(S2[i]>='a'&&S2[i]<='z')
			 S2[i]=S2[i]-32; 
	}
	i=j=0;
	//  ��ʼ�ȶ��ַ��� 
	while (i<len1 || j<len2)  // ע�����ѭ��ʱ��һ���ǻ����� 
	{
		// �����Ӧλ�ò���ͬ����˵���ü��ǻ���
		//  �л�����S2�±겻�� 
		if (S1[i] != S2[j])
		{
			// �ж��Ƿ����Ѿ��������ַ����г��ֹ� 
			k=0;
			flag = 1;
			while (Break_Key[k] != '\0')  
			{
				// ���S1[i] ��Break_Key �ַ����г��ֹ������ټ��������ñ�־����flag=0;
				if (S1[i] == Break_Key[k])
				{
					flag = 0;
					break;
				}
				k++;
			}
			// д���ʱ����ĸ��д 
			if (flag == 1)
			{
				Break_Key[n] = S1[i];
				n++;
			}	
			i++;
		}
		// ����˵���ü�û���� 
		else
		{
			i++;
			j++;
		} 
		
	}
	for (i=0; i<n; i++)
	{
		printf("%c",Break_Key[i]);
	}
	printf("\n");
	return 0;
}
