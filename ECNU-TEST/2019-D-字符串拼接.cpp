#include<bits/stdc++.h>
using namespace std;

int cmp(char a, char b)
{
    return a < b;
}

int main()
{
    string str1, str2, str3, str4;
    while (cin >> str1 >> str2)
    {
        str3 = str1 + str2;
        int n = str3.size();
        sort(str3.begin(), str3.end(), cmp);

        for(int i=0; i < str3.size(); i++){
        int j=0;
        for(j = 0;j < str4.size(); j++){//
            if(str4[j] == str3[i]){//找到有重复的
                break;
            }
        }
        if(j == str4.size()){//看循环是否正常结束判断s2中是否含s1[i]
            str4 += str3[i];
        }
    }
        
        cout << str4 << endl;
    }
    return 0;
}