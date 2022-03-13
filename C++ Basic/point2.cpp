#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 10;
    int *a_ = &a;   //指针使用来保存变量的地址的
    int *b_ = &b;
    ++*(a_);
    cout << a << endl;
    return 0;
}
// output:
// 11