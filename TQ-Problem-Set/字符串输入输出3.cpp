#include<iostream>
using namespace std;

int main()
{
    char s[10];
    for(int i = 0; i <= 9; i++)
    {
        s[i] = '\0';
    }
    gets(s);
    for(int i = 0; i <= 6; i++)
    {
        cout << i << ":" << (int)s[i] << endl;
    }
    return 0;
}