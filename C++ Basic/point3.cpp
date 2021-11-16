#include<iostream>
using namespace std;

void f(int *a){
    //通过函数来修改传入参数的值
    //引用型
    *a = 10;
}

int main(){
    int a = 0;
    f(&a);
    cout << a << endl;
    return 0;
}