//输入年月日，计算该天是本年的第几天。
#include <bits/stdc++.h>
using namespace std;

int dayTable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int caseNum;
    cin >> caseNum;
    while(caseNum--)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int row = isLeapYear(year);
        int res = 0;
        for(int i = 1; i < month; ++i)
        {
            res += dayTable[row][i];
        }
        res += day;
        cout << res << endl;
    }
    return 0;
}