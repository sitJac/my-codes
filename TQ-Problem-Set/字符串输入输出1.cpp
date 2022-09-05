#include<iostream>
using namespace std;

int main()
{
    char ch;
    int i = 1;
    while (ch = getchar())
    {
        cout << i << ":" << (int)ch <<endl;
        i++;
    }
    
    return 0;
}