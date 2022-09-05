#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        cout << i << ":" << (int)s[i] << endl;
    }
    
    return 0;
}