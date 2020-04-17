//  PAT_1066_Imag2Gray

# include <stdio.h>

int main(void)
{
    int m, n;
    int Min, Max;
    int gray;
    int i, j;
    int Arr[500][500];
    scanf("%d %d %d %d %d",&m, &n, &Min, &Max, &gray);

    // ���벢�ж�
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&Arr[i][j]);
            if (Arr[i][j]>=Min && Arr[i][j]<=Max)
            {
                Arr[i][j] = gray;
            }
        }
    }
    // �����ά����
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            // ����ַ�
            printf("%03d",Arr[i][j]);
            // ���ƿո�����
            if (j != n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
