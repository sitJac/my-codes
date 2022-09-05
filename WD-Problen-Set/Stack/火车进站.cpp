#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> arr(10);
vector<int> temp(10);

bool check()
{
    stack<int> s;
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        s.push(temp[i]);
        while(s.size() != 0 && arr[index] == s.top())
        {
            s.pop();
            index++;
        }
    }
    if(s.size() != 0)
        return false;
    return true;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(arr.begin(), arr.end());
    do{
        if(check())
        {
            for(int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }while(next_permutation(arr.begin(), arr.end()));
    return 0;
}