// 1088 三人行

# include <stdio.h>
# include <math.h>
// 输出甲乙丙与自己的数值关系 
void print(int , double );

int main(void)
{
	int M,A,B; // 分别表示自己和甲乙
	double C; // 丙不一定是整数 
	int X,Y;
	int flag = 0; // 有无解的标志位 
	scanf("%d %d %d",&M, &X, &Y);
	
	for (A = 99; A >= 10; A--) 
	{
		// 计算乙的值B
        B = (A%10)*10 + A/10;
       	C = abs(A-B) * 1.0/X;
        if (B == C*Y) 
		{
            flag = 1;
            break;
        }
    }
	// 如果有解，则按照规则输出 
	if (1 == flag)
	{
		printf("%d",A);
		print(M,A);
		print(M,B);
		print(M,C);
	 } 
	 // 否则输出无解
	 else
	 {
	 	printf("No Solution\n");
	  } 
	
	return 0;
 }
  
void print(int M, double N) 
{
    if (M == N) 
		printf(" Ping");
    else if (M < N) 
		printf(" Cong");
    else 
		printf(" Gai");
}

