#include <iostream>
#include <string.h>
#include <algorithm>
#define maxSize 100000
using namespace std;

struct record
{
    int ID;
    char name[9];
    int grade;
};

bool cmp1(const record &L, const record &R)
{
    return L.ID < R.ID;
}

bool cmp2(const record &L, const record &R)
{
    int r = strcmp(L.name, R.name);
    if (r == 0)
        return L.ID < R.ID;
    else
    {
        if (r < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool cmp3(const record &L, const record &R)
{
    if (L.grade == R.grade)
    {
        return L.ID < R.ID;
    }
    else
    {
        return L.grade < R.grade;
    }
}

int main()
{
    int cmpNO, n;
    record records[maxSize];
    while (cin >> n >> cmpNO)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> records[i].ID >> records[i].name >> records[i].grade;
        }
        if(cmpNO == 1)
            sort(records, records + n, cmp1);
        else if(cmpNO == 2)
            sort(records, records + n, cmp2);
        else if(cmpNO == 3)
            sort(records, records + n, cmp3);
        for (int i = 0; i < n; i++)
        {
            printf("%06d %s %d \n",records[i].ID, records[i].name, records[i].grade);
            //输出固定位数高位用0填充
        }
    }
    return 0;
}