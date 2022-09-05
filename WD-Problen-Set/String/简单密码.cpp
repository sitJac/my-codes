#include<bits/stdc++.h>
using namespace std;

int main()
{
    //循环平移问题
    string str;
    while (getline(cin, str))   //起始行 接受START
    {
        if(str == "ENDOFINPUT")
        {
            break;
        }
        getline(cin, str);    //获得密文的一行
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'E')
            {
                str[i] += 21;
            }
            else if(str[i] >= 'F' && str[i] <= 'Z')
            {
                str[i] -= 5;
            }
            /*
            if(str[i] >= 'A' && str[i] <= 'Z){
                str[i] = (str[i] - 'A' - 5 + 26) % 26 + 'A';
            }
            */
        }
        cout << str << endl;
        getline(cin, str);    //结束行
    }
    
    return 0;
}