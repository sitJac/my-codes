#include<bits/stdc++.h>
using namespace std;

string str;

int main(){
    //unique去重
    vector<int> v{0,2,1,1,1,3,5,4};
    // sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}