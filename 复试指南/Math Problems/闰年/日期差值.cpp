//思路：计算两个日期到小年一月一日的时间差，然后将两个时间相减取绝对值
#include<bits/stdc++.h>
using namespace std;

int daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool IsLeapYear(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int calDays(int min_year,int year,int month,int day)    //计算小年到达该日期的天数
{
    int all_days=0;
    for(int i=min_year;i<year;i++)
    {
        if(IsLeapYear(i)){
            all_days+=366;
        }
        else all_days+=365;
    }

    int row = IsLeapYear(year);
    for(int i = 1; i < month; ++i)
    {
        all_days += daytab[row][i];
    }

    all_days+=day;
    return all_days;
}

int main()
{
    int year1,month1,day1,year2,month2,day2;    //控制输入 很妙
    scanf("%4d%2d%2d",&year1,&month1,&day1);
    scanf("%4d%2d%2d",&year2,&month2,&day2);
    
    int min_year=min(year1,year2);
    
    int all_day1=calDays(min_year,year1,month1,day1);
    int all_day2=calDays(min_year,year2,month2,day2);       
    
    cout<<abs(all_day1-all_day2)+1;
    
    return 0;
}
