//输入年月日，计算该天是星期几
#include <bits/stdc++.h>
using namespace std;

int dayTable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

string monthTable[13] = {
    "","January","February","March","April","May","June","July","August","September","October","November","December"
};

string weekTable[7] = {
    "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
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
    int year, month, day;
    string monthStr;
    while(cin >> day >> monthStr >> year)
    {
        
        for(int i = 1; i <= 12; i++)
        {
            if(monthTable[i] == monthStr)
            {
                month = i;
                break;
            }
        }
        int number = 0;
        for(int i = 0; i < year - 1; ++i)
        {
            if(isLeapYear(i))
            {
                number += 366;
            }
            else
            {
                number += 365;
            }
        }
        int row = isLeapYear(year);
        for(int i = 1; i < month; ++i)
        {
            number += monthTable[row][i];
        }
        number += day;
        int w = number % 7;
        cout << weekTable[w] << endl;
    }
    return 0;
}