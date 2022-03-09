#include<bits/stdc++.h>
#include<bitset>
using namespace std;

int main()
{
    int num = 2;
    char str[100];
    itoa(num, str, 2);  //itoa功能是将一个十进制的数转化为n进制 返回值是char型
    printf("%s\n", str);

    cout << "36的8进制:" << std::oct << 36 << endl;
    cout << "36的10进制" << std::dec << 36 << endl;
    cout << "36的16进制:" << std::hex << 36 << endl;
    cout << "36的2进制: " << bitset<8>(36) << endl; //这里bitset后面尖括号里代表输出的位数
    return 0;
}