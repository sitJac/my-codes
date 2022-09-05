#include<bits/stdc++.h>
using namespace std;

map<string, string> student;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();    //吃掉回车
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        int position = str.find(' ');   //分界点
        string key = str.substr(0, position);   //学号作为关键字
        student[key] = str; //信息作为映射值
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string key;
        cin >> key;
        string answer = student[key];
        if(answer == "")
        {
            answer = "No Answer!";
        }
        cout << answer << endl;
    }
    return 0;
}