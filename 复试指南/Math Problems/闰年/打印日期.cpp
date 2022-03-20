//给出年分m和一年中的第n天，算出第n天是几月几号。
#include<bits/stdc++.h>
using namespace std;

int monthTable[2][13] ={
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},    //平年
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},    //闰年
};

int isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
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
    int year, nthday;
    while(cin >> year >> nthday)
    {
        int row = isLeapYear(year);
        int month = 1;
        for(int i = 1; i <= 12; ++i)
        {
            if(nthday > monthTable[row][i])
            {
                nthday -= monthTable[row][i];
                month++;
            }
            else
            {
                break;
            }
        }
        
        cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << nthday << endl;
    }
    
    return 0;
}