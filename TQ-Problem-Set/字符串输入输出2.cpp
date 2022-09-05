#include<iostream>
using namespace std;

int main()
{
    int n;
    char a, b;
    scanf("%d", &n);
    getchar();
    while(n > 0)
    {
        scanf("%c%c", &a, &b);
        getchar();
        printf("%c%c\n", a, b);
        n--;
    }
    return 0;
}