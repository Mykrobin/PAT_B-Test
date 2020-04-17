// PAT_1028_Count_Population_02

/*
 * 1. �����ʽ��ȷ��ǰ���£����Խ��ַ�����ʽ������תΪ������ֱ���ж������Ƿ����
 * 2. 2014/9/6֮�� �� 1814/9/6֮ǰ��Ϊ����������
 * 3. ���� ȫΪ��������������
 */
#include <stdio.h>
#include <string.h>

int main() {
    int N;//���� 
    scanf("%d", &N); 
    char name[6], young_name[6], old_name[6];
    int year, month, day, cnt = 0;//�����գ���Ч���յĸ��� 
    int maxAge = 2014*10000 + 9*100 + 6;//������������ٽ�� 
    int minAge = 1814*10000 + 9*100 + 5;
    for (int i = 0; i < N; i++) {
        scanf("%s %d/%d/%d", name, &year, &month, &day);
        int age = year*10000 + month*100 + day;
        if (age < maxAge && age > minAge) {//����Ǻ������� 
            cnt++;
            if (age < maxAge ) {//���곤 
                maxAge = age;
                strcpy(old_name, name);
            } 
            if (age > minAge) {//������ 
                minAge = age;
                strcpy(young_name, name); 
            }
        }
    } 
    if (cnt != 0) {
        printf("%d %s %s\n", cnt, old_name, young_name);
    } else {//ȫΪ��Ч����
        printf("0\n");
    }
    return 0;
}
