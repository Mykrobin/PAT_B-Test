// PAT_1091_N_Circle

# include <stdio.h>
# include <stdlib.h>
# define Max 10

typedef struct Node
{
    int k;
    int val;
    int N_k;
    int flag;
}NODE, *pNODE;

int main(void)
{
    int n; // 记录输入的个数
    int i, j;
    pNODE node;
    scanf("%d",&n);
    node = (pNODE)malloc(sizeof(NODE)*n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&node[i].k);
        node[i].flag = 0;
    }

    for (i=0; i<n; i++)
    {
        // 判断数字是否是自守
        for (j=1; j<Max; j++)
        {
            node[i].val = j*node[i].k*node[i].k;
            if (node[i].k<=9 && node[i].k>=0)
            {
                if (node[i].val%10 == node[i].k)
                {
                    node[i].flag = 1;
                    node[i].N_k = j;
                    break;
                }
            }
            else if (node[i].k<=99 && node[i].k>=10)
            {
                if (node[i].val%100 == node[i].k)
                {
                    node[i].flag = 1;
                    node[i].N_k = j;
                    break;
                }
            }
            else if (node[i].k<=999 && node[i].k>=100)
            {
                if (node[i].val%1000 == node[i].k)
                {
                    node[i].flag = 1;
                    node[i].N_k = j;
                    break;
                }
            }
            else if (node[i].k == 1000)
            {
                if (node[i].val%1000 == node[i].k)
                {
                    node[i].flag = 1;
                    node[i].N_k = j;
                    break;
                }
            }
        }
    }

        for (i=0; i<n; i++)
        {
            if (node[i].flag == 1)
            {
                printf("%d %d\n",node[i].N_k,node[i].val);
            }
            else
                printf("No\n");
        }

    return 0;
}
