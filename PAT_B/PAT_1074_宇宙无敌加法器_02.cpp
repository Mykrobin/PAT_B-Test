#include <stdio.h>
#include <string.h>

int main()
{
    int nBase, nA, nB, nS = 21, base, a, b;
    char sBase[21] = {0}, sA[21] = {0}, sB[21] = {0}, sSum[22] = {0};

    // 读取三组数字，以字符串形式存储 
    scanf("%s %s %s", sBase, sA, sB);

    nBase = strlen(sBase);
    nA = strlen(sA);
    nB = strlen(sB);

    for(int i = 0; i < nBase; i++)
    {
        // 把数组 A B代表的数字转化为 整数 a, b 
        // 此处用 nA,nB-i-1 控制每一组数的位置  [巧妙之处]
        a = nA <= i ? 0 : sA[nA - i - 1] - '0';
        b = nB <= i ? 0 : sB[nB - i - 1] - '0';
        
        // base代表该位置的进制 
        base = sBase[nBase - i - 1] == '0' ? 10 : sBase[nBase - i - 1] - '0';

       // 运算每位的值 
        sSum[nS - i - 1] += a + b;
        // 计算进位与否 
        sSum[nS - i - 2] += sSum[nS - i - 1] / base; 
        sSum[nS - i - 1] = sSum[nS - i - 1] % base;
    }

    // 变为字符类型 
    // 注 如果不经过 sSum[i] += '0' 变换，则字符存储是第一位' ',ASCII 编码为0 
    for(int i = 0; i < 21; i++)
        sSum[i] += '0';

    // 保证第一位不为零 
    for(int first = 0; first < 21; first++)
    	// 从前向后遍历，找到第一个不是0字符的数字 
        if(sSum[first] != '0')
        {
        	// 输出第 first 位后的数字 
            puts(sSum + first);
            return 0;
        }

    // 若结果为0，则直接输出0 
    printf("0");
    return 0;
}
