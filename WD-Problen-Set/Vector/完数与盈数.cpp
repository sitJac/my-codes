#include<bits/stdc++.h>
using namespace std;

vector<int> numberE;    //完数
vector<int> numberG;    //盈数

int Sum(int x)  //因数和
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    for (int i = 2; i < 61; i++)
    {
        if(i == Sum(i))
        {
            numberE.push_back(i);
        }
        else if(i < Sum(i))
        {
            numberG.push_back(i);
        }
    }
    cout << "E:";
    for (int i = 0; i < numberE.size(); i++)
    {
        cout << " " << numberE[i];
    }
    cout << endl;
    cout << "G:";
    for (int i = 0; i < numberG.size(); i++)
    {
        cout << " " << numberG[i];
    }
    cout << endl;
    
    return 0;
}