//给出日期，计算后面n天的日期
#include<bits/stdc++.h>
using namespace std;

int dayTable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool isLeapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int caseNum;
    cin >> caseNum;
    while(caseNum--){
        int year, month, day, number;
        cin >> year >> month >> day >> number;
        int row = isLeapYear(year);
        day += number;
        while(day > dayTable[row][month]){
            day -= dayTable[row][month];
            month++;
            if(month > 12){
                month = 1;
                year++;
                row = isLeapYear(year);    //年份变化以后要重新判断是否是闰年
            }
        }
        cout << year << '-' << setw(2) << setfill('0') << month << '-' << setw(2) << setfill('0') << day << endl;
    }
    return 0;
}