// PAT_1028_Count_Population_03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct People{
    char name[10];
    int year;
    int month;
    int date;
}people;
 
int cmp(const void *a,const void *b)
{
    people *aa = (people *)a;
    people *bb = (people *)b;
    if(aa->year > bb->year)
        return 1;
    else if(aa->year < bb->year)
        return -1;
    else if(aa->year == bb->year)
    {
        if(aa->month > bb->month)
            return 1;
        if(aa->month < bb->month)
            return -1;
        else if(aa->month == aa->month)
        {
            if(aa->date > bb->date)
                return 1;
            else return -1;
        }
    }
    return 0;
}
 
int main()
{
    int N;
    int i;
    int k = 0;
    scanf("%d",&N);
    people man ;
    people *R = (people *)malloc(sizeof(people)*N);
    for(i=0;i<N;i++) //符合条件存入R
    {
        scanf("%s %d/%d/%d",man.name,&man.year,&man.month,&man.date);
        if(man.year > 1814 && man.year < 2014)
        {
            strcpy(R[k].name,man.name);
            R[k].year = man.year;
            R[k].month = man.month;
            R[k].date = man.date;
            k++;
            continue;
        }
        if(man.year == 1814)
        {
            if(man.month > 9)
            {
                strcpy(R[k].name,man.name);
                R[k].year = man.year;
                R[k].month = man.month;
                R[k].date = man.date;
                k++;
                continue;
            }
            if(man.month == 9 && man.date >= 6)
            {
                strcpy(R[k].name,man.name);
                R[k].year = man.year;
                R[k].month = man.month;
                R[k].date = man.date;
                k++;
                continue;
            }
        }
        if(man.year == 2014)
        {
            if(man.month < 9)
            {
                strcpy(R[k].name,man.name);
                R[k].year = man.year;
                R[k].month = man.month;
                R[k].date = man.date;
                k++;
                continue;
            }
            if(man.month == 9 && man.date <= 6)
            {
                strcpy(R[k].name,man.name);
                R[k].year = man.year;
                R[k].month = man.month;
                R[k].date = man.date;
                k++;
                continue;
            }
        }
    }
    qsort(R,k,sizeof(people),cmp);
    if(k!=0)
        printf("%d %s %s",k,R[0].name,R[k-1].name);
    else printf("0");
    free(R);
    return 0;
}

