#include <stdio.h>
#include <string.h>

int main()
{
    int nBase, nA, nB, nS = 21, base, a, b;
    char sBase[21] = {0}, sA[21] = {0}, sB[21] = {0}, sSum[22] = {0};

    // ��ȡ�������֣����ַ�����ʽ�洢 
    scanf("%s %s %s", sBase, sA, sB);

    nBase = strlen(sBase);
    nA = strlen(sA);
    nB = strlen(sB);

    for(int i = 0; i < nBase; i++)
    {
        // ������ A B���������ת��Ϊ ���� a, b 
        // �˴��� nA,nB-i-1 ����ÿһ������λ��  [����֮��]
        a = nA <= i ? 0 : sA[nA - i - 1] - '0';
        b = nB <= i ? 0 : sB[nB - i - 1] - '0';
        
        // base�����λ�õĽ��� 
        base = sBase[nBase - i - 1] == '0' ? 10 : sBase[nBase - i - 1] - '0';

       // ����ÿλ��ֵ 
        sSum[nS - i - 1] += a + b;
        // �����λ��� 
        sSum[nS - i - 2] += sSum[nS - i - 1] / base; 
        sSum[nS - i - 1] = sSum[nS - i - 1] % base;
    }

    // ��Ϊ�ַ����� 
    // ע ��������� sSum[i] += '0' �任�����ַ��洢�ǵ�һλ' ',ASCII ����Ϊ0 
    for(int i = 0; i < 21; i++)
        sSum[i] += '0';

    // ��֤��һλ��Ϊ�� 
    for(int first = 0; first < 21; first++)
    	// ��ǰ���������ҵ���һ������0�ַ������� 
        if(sSum[first] != '0')
        {
        	// ����� first λ������� 
            puts(sSum + first);
            return 0;
        }

    // �����Ϊ0����ֱ�����0 
    printf("0");
    return 0;
}
