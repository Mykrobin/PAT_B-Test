// 1060 ��������

# include <stdio.h>
# include <algorithm> 
# define Max 100001
using namespace std;
int main(void)
{
	int a[Max];
	int N, i;
	scanf("%d", &N);
	
	for (i=1; i<=N; i++)
		scanf("%d",&a[i]);
	
	sort(a+1,a+N+1);
	// ����֮��
	// 2  3 6 6 7 7 8 8 9 10 
	// 10 9 8 7 6 5 4 3 2 1
	// ��һ�������ĵ���С�������ľ��룬��������ΪE 
	for (i=1; i<=N; i++)
	{
		if (a[i] > (N+1-i))
			break;
	}
	printf("%d\n",N+1-i);
	
	
	return 0;
}
