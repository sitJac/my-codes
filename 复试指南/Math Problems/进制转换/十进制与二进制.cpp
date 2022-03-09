#include<bits/stdc++.h>

using namespace std;

string Divide(string str,int x)     //字符串除法
{
    int remainder=0;    //余数
    for(int i=0; i<str.size(); ++i)
    {
        int current=remainder*10+str[i]-'0';
        str[i]=current/x+'0';
        remainder=current%x;
    }
    int pos=0;
    while(str[pos]=='0')   //寻找首个非0下标
    {
        pos++;
    }
    return str.substr(pos);  //删除前置多余的0
}

string Multiple(string str,int x)     //字符串乘法
{
    int carry=0;    //保留进位
    for(int i=str.size()-1;i>=0;--i)
    {
        int current=x*(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if (carry!=0)
    {
        str="1"+str;
    }
    return str;
}

string Add(string str,int x)     //字符串加法
{
    int carry=x;    //保留进位
    for(int i=str.size()-1;i>=0;--i)
    {
        int current=(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if (carry!=0)  //仍有进位
    {
        str="1"+str;
    }
    return str;
}

int main()
{
    string str;
    while(cin>>str)
    {
        vector<int>binary;
        while(str.size()!=0)
        {
        int last=str[str.size()-1]-'0';   //最低位的值
        binary.push_back(last%2);         //取模
        str=Divide(str,2);                //整除
        }
        string answer="0";
        for(int i=0;i<binary.size();++i)
        {
            answer=Multiple(answer,2);   //乘法
            answer=Add(answer,binary[i]);  //加法
        }
        cout<<answer<<endl;
    }
    return 0;
}