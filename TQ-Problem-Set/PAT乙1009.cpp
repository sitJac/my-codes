#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s.length() > 0)
    {
        int i = s.rfind(' ');
        if (i != string::npos)
        {
            cout << s.substr(i + 1) << " ";
            string temp = s.substr(0, i);
            s = temp;
        }
        else
        {
            cout << s << endl;
            s = "";
        }
    }
    return 0;
}