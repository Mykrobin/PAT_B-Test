# include <stdio.h>
# include <string.h>
# define Max 1000
int main()
{
    int n,m,s,i,j,num = 0, flag=0;
    char str[Max][21],win[Max][21];
    scanf("%d %d %d",&m,&n,&s);
    s--;
    getchar();
    for(i = 0;i < m;i++)
  		gets(str[i]);
	
    if(s >= m)
    {
    	printf("Keep going...");
    	return 0;
	}
	
	for (i=s; i<m; )
	{
		flag = 0;
		// �ж��Ƿ��й��� 
		for (j=0; j<num; j++)
		{
			if (0 == strcmp(str[i], win[j]))
			{
				flag = 1;
				break;
			}
		}
		// ��û�� 
		if (flag == 0)
		{
			puts(str[i]);
        	strcpy(win[num++],str[i]);
        	i+=n;
		}
		else // ����
		{
			i++;
		} 
	}

    return 0;

}
