#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    vector<string> name;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        name.push_back(temp);
        mp[temp] = 0;
    }
    mp["Invalid"] = 0;
    
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        string temp;
        cin >> temp;
        int flag = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->first == temp){
                it->second++;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            mp["Invalid"]++;
        }
    }
    for(int i = 0; i < name.size(); i++){
        cout << name[i] << " : " << mp[name[i]] << endl;
    }
    cout << "Invalid : " << mp["Invalid"];
    return 0;
}