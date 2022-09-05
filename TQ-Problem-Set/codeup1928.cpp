#include <iostream>
using namespace  std;

int months[13][2] = {
    {0, 0},
    {31, 31},
    {28, 29},
    {31, 31},
    {30, 30},
    {31, 31},
    {30, 30},
    {31, 31},
    {31, 31},
    {30, 30},
    {31, 31},
    {30, 30},
    {31, 31},
}

int isLeap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 = 0))
        return 1;
    else 
        return 0;
}

int main()
{
    int temp1, temp2, y1, m1, d1, y2, m2, d2;
    while (cin >> temp1 >> temp2)
    {
        if(temp1 > temp2)
        {
            int temp = temp1;
            temp1 = temp2;
            temp2 = temp;
        }
        y1 = temp1 / 10000;
        m1 = temp1 % 10000 / 100;
        d1 = temp1 % 100;
        y2 = temp2 / 10000;
        m2 = temp2 % 10000 / 100;
        d2 = temp2 % 100;

        int days = 1;

        while (y1 < y2 || m1 < m2 || d1 < d2)
        {
            d1++;
            if (d1 == months[m1][isLeap(y1)] + 1)
            {
                ++m1;
                d1 = 1;
            }
            if (m1 == 13)
            {
                ++y1;
                m1 = 1;
            }
            ++days;
        }
        cout << days << endl;
    }
    return 0;
}