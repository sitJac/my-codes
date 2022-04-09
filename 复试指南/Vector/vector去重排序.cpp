#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}