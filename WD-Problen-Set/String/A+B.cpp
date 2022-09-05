#include<bits/stdc++.h>
using namespace std;

string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int StringToInt(string str) //通过数组映射字符串对应的数字
{   
    for(int i=0; i < 10; i++)
    {
        if(str==num[i])
        {
            return i;
        }
    }
    return -1;
}

int Trans(string str)  //二位数字的处理
{
    int empty = str.find(' ');
    int size = str.size();
    return StringToInt(str.substr(0,empty))*10 + StringToInt(str.substr(empty+1,size-empty-1));
}

int main()
{
    string str;
    while(getline(cin, str))
    {
        int plus = str.find("+");    //寻找加号
        int size = str.size();
        string front = str.substr(0, plus-1);            //对前后的截取，如果不好找，可以边打印出来边修改
        string rear = str.substr(plus + 2, size - plus - 4);
        int left, right;
        if(front.size() < 6)
        {              
            left = StringToInt(front);
        }
        else
        {
            left = Trans(front);
        }
        if(rear.size()<6)
        {
            right = StringToInt(rear);
        }
        else
        {
            right = Trans(rear);
        }
        int ans = left + right;
        if(ans==0)
            break;     //0则退出
        else           //否则打印
            cout << ans <<endl;  
    }
    return 0;
}
