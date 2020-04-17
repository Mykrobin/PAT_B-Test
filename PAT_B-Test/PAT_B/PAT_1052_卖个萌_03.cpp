#include <stdio.h>
#define L1 20
#define L2 20
/* ����Ĵ��������һ����Ϊ���ô�1��ʼ, ���鳤�Ⱦͱ�ʾ���һ��Ԫ�� */
int main (void) {
    char handStr[L1][L2];
    int hlen = 0;    // ʵ�ʳ���
    char eyeStr[L1][L2];
    int elen = 0;
    char mouthStr[L1][L2];
    int mlen = 0;
    int i;
    int ch;
    
    // ��ȡ�ֱ���
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", handStr[++hlen]);
        }
    }
    // ��ȡ�۱���
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", eyeStr[++elen]);
        }
    }
    // ��ȡ�ڱ���
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", mouthStr[++mlen]);
        }
    }

    int n;       // ��Ҫ����ı������
    int icon[6]; // �洢ÿ���������

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf(
            "%d %d %d %d %d", 
            &icon[1], &icon[2], &icon[3], &icon[4], &icon[5]
        );
        // ����������Ų���1��������֮��, �д�
        if (
            icon[1] >= 1 && icon[1] <= hlen &&
            icon[2] >= 1 && icon[2] <= elen &&
            icon[3] >= 1 && icon[3] <= mlen &&
            icon[4] >= 1 && icon[4] <= elen &&
            icon[5] >= 1 && icon[5] <= hlen
        ) {
            printf("%s", handStr[icon[1]]);  // ����
            printf("(");
            printf("%s", eyeStr[icon[2]]);   // ����
            printf("%s", mouthStr[icon[3]]); // ��
            printf("%s", eyeStr[icon[4]]);   // ����
            printf(")");
            printf("%s", handStr[icon[5]]);  // ����
            printf("\n");
        } else {
            printf("Are you kidding me? @\\/@\n");
        }
    }
    
    return 0;
}
