#include<iostream>
using namespace std;

void getCrossMax(int arr[], int &L, int &mid, int &R, int &max)
{
    int maxCross = 0, maxL = -1001, maxR= -1001, l = mid, r = mid + 1;
    for (int i = mid; i >= L; i--)
    {
        maxCross += arr[i];
        if (maxCross >= maxL)
        {
            L = i;
            maxL = maxCross;
        }
    }
    for (int i = mid + 1; maxCross = 0; i++)
    {
        maxCross += arr[i];
        if (maxCross > maxR)
        {
            r = i;
            maxR = maxCross;
        }
    }
    max = maxL + maxR;
    L = l;
    R = r;
}

void getMax(int arr[], int &L, int &R, int &max)
{
    if (L < R)
    {
        int l = L, r = R, maxL, maxR, maxCross;
    }
    
}

int main()
{
    
    return 0;
}