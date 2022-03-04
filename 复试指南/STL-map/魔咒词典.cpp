#include<bits/stdc++.h>
using namespace std;

map<string, string> dictionary;

int main()
{
    string str;
    while (getline(cin, str))
    {
        if(str == "@END@")
        {
            break;
        }
        int position  = str.find("]");
        string key = str.substr(0, position+1);
        string value = str.substr(position+2);
        dictionary[key] = value;
        dictionary[value] = key;
    }
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        string key;
        getline(cin, key);
        string answer = dictionary[key];
        if(answer == "")
        {
            answer = "what?";
        }
        else if(answer[0] == '[')
        {
            answer = answer.substr(1, answer.size()-2); //去掉中括号
        }
        cout << answer << endl;
    }
    return 0;
}