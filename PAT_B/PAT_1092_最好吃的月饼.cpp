// ������� ˼·��AC 
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
				max = sale[j];    //���±�����ͳ����ɺ�Ҳ�õ����������
        }
    }
    printf("%d\n", max);
    for(int i = 0; i < N; i++){
        if(sale[i] == max){
            if(flag == 0)  
				flag = 1; 
            else           
				printf(" ");        //��flag�����ƿո�����
            printf("%d", i+1);      //ע��i�Ǵ�0��ʼ�ģ����±������Ǵ�1��ʼ��
        }
    }
    return 0;
}
