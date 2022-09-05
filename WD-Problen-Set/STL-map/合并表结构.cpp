#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}