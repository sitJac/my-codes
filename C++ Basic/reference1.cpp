#include <iostream>

using namespace std;

//	C++ 语言中，函数的参数和返回值的传递方式有三种：值传递、指针传递和引用传递。

void Func1(int x) //值传递 ×
{ 
    x = x + 10; 
} 

void Func2(int *x)	//指针传递 √
{
	(*x) = (*x) + 10;
}

void Func3(int &x)	//引用传递 √
{
	x = x + 10;
}

int main()
{
	int m;
	int &n = m;	//n是m的一个引用
	// 	n 相当于 m 的别名（绰号），对 n 的任何操作就是对m的操作。
	//  所以 n 既不是m的拷贝，也不是指向 m 的指针，其实n就是 m 它自己。

	int x = 5;
	Func1(x);
	Func2(&x);
	Func3(x);

	return 0;
}