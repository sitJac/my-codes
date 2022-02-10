#indlude<iostream>
#define maxSize 101
using namespace std;

int main()
{
    int x, a;
    cin >> x >> a;
    //x是要找的零钱数目 a是五元纸币的数量
    //有a张5元 无限张2元 一张1元
    //OUTPUT:最少拿出多少张纸币
    //从面值最大的零钱开始搜索，只要零钱总额超过其面值，则需要一张该面值的钞票，否则比较下一个面值的零钱，直到剩余余额为零
    int arr[] = {5, 2, 1};
    int num[] = {a, maxSize, 1};

    
    return 0;
}