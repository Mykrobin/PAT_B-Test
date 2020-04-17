//  将数组右移两位
//  通过控制数组的下标来输出元素
//  **********************************
//  18 行代码很重要 

# include <stdio.h>

int main(void) 
{
	int n, temp; //  n为输入的总长度，temp为需要移动的位数
	int A[100]; 
	int flag = 0;
	int i, k;
	
	scanf("%d %d",&n, &temp);
	//  注 如果不加上这句话，会出现错误 
	temp = temp%n;
	// ************************************ 
	//  输入数组元素 
	for (i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}
/*	
	//  输出元素, 方法一 
	for (i=0; i<n; i++) 
	{
		if (i<temp)
			flag = 1;
		else
			flag = 0;
		
		if (flag == 1)
		{
			k = n-temp+i;  //   输出 5 6 
		}
		else
		{
			k = i-temp;   // 输出 1 2 3 4 
		}
		printf("%d",A[k]);
		if (i+1 != n)
		{
			printf(" ");
		}
	}
*/
	//  输出元素，方法二
	
	for (i=0; i<n; i++) 
	{
		k = (i+n-temp)%n;
		printf("%d",A[k]);
		
		if (i+1 != n)
		{
			printf(" ");
		}
	}
			
	return 0;
}
