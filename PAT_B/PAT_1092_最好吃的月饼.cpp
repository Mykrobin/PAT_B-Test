// 借鉴别人 思路，AC 
#include<stdio.h>
# define Max 1001
int main()
{
    int N, M, flag = 0, max = 0;
    scanf("%d %d", &N, &M);
    int sale[Max] = {0};
   
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            int s;
            scanf("%d", &s);
            sale[j] += s;
            if(max < sale[j])     
				max = sale[j];    //当月饼销量统计完成后，也得到了最大销量
        }
    }
    printf("%d\n", max);
    for(int i = 0; i < N; i++){
        if(sale[i] == max){
            if(flag == 0)  
				flag = 1; 
            else           
				printf(" ");        //用flag来控制空格的输出
            printf("%d", i+1);      //注意i是从0开始的，而月饼种类是从1开始的
        }
    }
    return 0;
}
