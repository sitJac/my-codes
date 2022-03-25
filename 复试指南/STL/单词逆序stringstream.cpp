#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack<string> myStack;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++)
    {
        if(!isalpha(str[i]))
        {
            str[i] = ' ';
        }
    }
    
    stringstream ss;
    ss.clear();
    ss.str(str);
    string temp;
    while(ss >> temp)
    {
        myStack.push(temp);
    }
    
    while(!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    return 0;
}