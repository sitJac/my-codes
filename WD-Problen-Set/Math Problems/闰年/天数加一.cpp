//给出日期，计算后面一天的日期
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
        int year, month, day;
        cin >> year >> month >> day;
        int row = isLeapYear(year);
        day++;
        if(day > dayTable[row][month]){
            day -= dayTable[row][month];
            month++;
            if(month > 12){
                month -= 12;
                year++;
            }
        }
        cout << year << '-' << setw(2) << setfill('0') << month << '-' << setw(2) << setfill('0') << day << endl;
    }
    return 0;
}