# C++ 算法刷题基础知识整理

## 1.main综合模板
```C++
#include <iostream>         //C++中输入输出函数 cout endl 等
#include <cstring>          //string相关函数操作
#include <stdio.h>          //C语言输入输出函数 printf scanf 等
#include <string.h>         //C语言string操作函数 strlen strcmp等
#include <stdlib.h>         //标准C库函数
#include <sstream>          //文件流操作
#include <math.h>           //标准数学函数  max  min  pow等
#include <vector>           //向量(vector) 容器
#include <queue>            //队列(FIFO)  容器
#include <stack>            //堆(STACK) 容器
#include <algorithm>        //向量vector排序sort  反转reverse 等函数
#include <unordered_set>    //字典相关
#include <map>              //hashmap容器

using namespace std;

int main(void)
{

    return 0;
}
```

## 2.数组排序库
```C++
int a[5] = {1, 3, 4, 2, 5};
sort(a, a + 5);
```

## 3.字符串库
```C++
string s;
int pos = s.find("afsd"); 	    //在s串中查找指定串, 返回值为查找的串在string中的首部索引 没有找到的话返回 string::npos
int pos = s.find("afsd", 5)     //从字符串s 下标5开始，查找字符串b ,返回b 在s 中的索引
string s2 = s.substr(2, 5);     //substr(startPosition,lenth)
string s2 = s.substr(2);        //截取从[2,string::npos)  从当前索引到string结尾
int = atoi(s.c_str());          //将字符串转化为整数
```

## 4.向量vector的基本用法
```C++
vector<int> s;                  //向量是一串数据组
s.pop_back();                   //弹出向量的尾部元素，并不反悔任何值
s.push_back(<int>);             //压入新的元素到向量的尾部
int = s.size();                 //反回栈的大小
bool = s.empty();               //判断向量是否为空 如果为空，返回true
<int> = s.front();              //访问向量最前的元素
<int> = s.back();               //访问向量最后的元素
s.clear();                      //清空整个向量
s.insert( s.begin() + n, <int>);    //在向量中第n个索引元素前插入<int>
vector<int> s2;
s.insert( s.begin() + n, s2.begin(), s2.end());    //在向量中第n个索引元素前插入同类的s2向量
s.erase(s.begin() + n);         //删除向量中的第n个索引元素
s.erase(s.begin() + n, s.begin() + m);     //删除向量中的[n,m)区间的元素
find(s.begin(), s.end(), int) == s.end();  //在vector s中查找是否有某个元素，如果有，返回指针类型 vector<int>::iterator
```
## 5.vector初始化
```C++
int a[5] = {1, 2, 3, 4, 5};
vector<int> s(a, a+5);  //将数组元素初始化为vector中的元素
vector<vector<int>> s(a, vector<int>(b));   //创建s[a][b]大小的二维向量

std::vector<int> v1(3);                                 // 1. Create a vector v1 with 3 elements of default value 0  
std::vector<int> v2(5, 2);                              // 2. Create a vector v2 with 5 elements of value 2  
std::vector<int> v3(3, 1, v2.get_allocator());          // 3. Create a vector v3 with 3 elements of value 1 and with the allocator of vector v2  
std::vector<int> v4(v2);                                // 4. Create a copy, vector v4, of vector v2  
std::vector<int> v5(v4.begin() + 1, v4.begin() + 3);    // 5. Create a vector v5 by copying the range v4[_First, _Last) 
```
## 6.Vector排序
```C++
//注意包含头文件#include <algorithm>
sort(s.begin(), s.end());   //默认升序排列

bool sortFun(int & x, int & y)
{
    return x < y;   //升序排列
    //return x > y;	//降序排列
}
sort(num.begin(), num.end(), sortFun);  //按照sortFun制定的规则排序
reverse(s.begin(), s.end());            //颠倒vector s中的所有元素，倒序

```
## 7.栈queue的基本用法
```C++
queue<int> s;   //栈是先入先出的FIFO
s.front();      //栈首元素  只能通过front 和 back 接口访问首尾元素，无法访问中间元素
s.back();       //栈尾元素
s.pop();        //弹出栈的首元素
s.push();       //压入新的元素
s.size();       //反回栈的大小
s.empty();      //判断queue是否为空
s = queue<int>();   //清空栈，通过赋值空栈的方式清空
```
## 8.堆stack的基本用法
```C++
stack<int> s;   //堆是后入先出  
s.top();        //堆顶元素  只能使用top访问顶部元素 无法访问中间元素
s.pop();        //弹出堆的顶元素，并不反回任何值，仅弹出元素
s.push();       //压入新的元素
s.size();       //反回栈的大小
s.empty();      //判断堆是否为空
```
## 9.hashmap的基本用法(构建一一映射的关系)
```C++
map<k, v> m;	    //定义了一个名为m的空的map对象 其中的key为k 值为v
map<k, v> m2(m);    //创建了m的副本m2
map<k, v> m3(m.begin() + b, m.begin() + e); //创建了map对象m3，并且存储迭代器b和e范围内的所有元素的副本

//例： 
map<string , int> m;  //key为一个string 值为一个int
m["ABC"] = 123;       //在m中创建了一个映射关系 通过key值 "ABC" 可查找到int值 123   注意：使用key值访问一个不存在的元素将会创建新元素
m["DEF"] = 456;       //在m中创建了一个映射关系 通过key值 "DEF" 可查找到int值 456   注意：使用key值访问一个已存在的元素将会覆盖原元素

//插入值：
m.insert(pair<string, int>("GHI", 789));            //与m["GHI"] = 789;等效
m.insert(m.begin() ,pair<string, int>("GHI", 789)); //在m的首部插入值
m.insert({ {"ABC", 123 }, {"DEF", 456} });          //列表形式多元素插入

m.erase(m.begin());     //删除首部元素
m.erase("ABC");         //删除key值为ABC的元素

map<string, int>::iterator index = m.find("ABC");   //查找key值为"ABC"的元素索引 通常用法: m.find("ABC") != m.end(); //找到了该元素

m.empty();      //是否为空
m.clear();      //清空所有元素
m.size();       //m中元素的个数
m.max_size();   //最多容纳的元素个数
m.swap(m1);     //交换两个map
```
## 10.奇技淫巧
## 10.1辗转相除法求最大公约数
```C++
int fun(int m,int n)
{
	if(n==0) return m;
	return fun(n,m%n);
}
```
## 10.2如何判断链表有环，并找出入环点
对于如何判断链表有环，可以从起点发出两个指针，一个一次一步，另一个一次两步，如果两个指针相遇，那么这个单链表就有环。
第一问得出相遇点后，再发出一个指针，统计这个指针再次回到这个点的距离，也就是环的距离。然后从起点再发出两个指针，一个指针在另一个前面，两个指针的距离就是环的距离，当两个指针再次相遇的时候就是环的入口。
## 10.3异或运算 可以快速判断多个项的相等结果
c = a⊕b //如果a、b两个值不相同，则异或结果为1。如果a、b两个值相同，异或结果为0
(a⊕b)⊕c = a⊕(b⊕c)
在判断数值是否相同时，可以通过异或运算快速判断
面，两个指针的距离就是环的距离，当两个指针再次相遇的时候就是环的入口。
## 10.4异或运算 可以快速判断多个项的相等结果
c = a⊕b //如果a、b两个值不相同，则异或结果为1。如果a、b两个值相同，异或结果为0
(a⊕b)⊕c = a⊕(b⊕c)
在判断数值是否相同时，可以通过异或运算快速判断

<https://blog.csdn.net/huwei039/article/details/104269486>