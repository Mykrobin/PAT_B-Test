// PAT_1049_���е�Ƭ�κ�01
#include <stdio.h>

int main()
{
    int N;
    double ai, sum = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%lf", &ai);
        sum += ai * (i + 1) * (N - i);
    }
    printf("%.2lf", sum);

    return 0;
}
