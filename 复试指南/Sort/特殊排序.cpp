#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];    //注意此处不要MAXN 否则测试用例不能通过
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums+n);
    cout << nums[n-1] << endl;
    if(n == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if(i != n - 2)
            {
                cout << nums[i] << " ";
            }
            else
            {
                cout << nums[i] << endl;
            }
        }
    }
    
    return 0;
}