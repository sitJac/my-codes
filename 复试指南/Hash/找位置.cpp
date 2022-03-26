#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<char, vector<int> > mp;
    vector<char> v;
    while(cin >> s){
        mp.clear();
        int len = s.size();
        for(int i = 0; i < len; i++){
            if(mp.find(s[i]) != mp.end()){    //该字母存在
                mp[s[i]].push_back(i);
            }
            else{
                vector<int> add;
                add.push_back(i);
                mp[s[i]] = add;
                v.push_back(s[i]);
            }
        }
        for(int i = 0; i < v.size(); i++){
            if(mp[v[i]].size() > 1){
                for(int j = 0 ; j < mp[v[i]].size() - 1; j++){
                    cout << v[i] << ":" << mp[v[i]][j] << ",";
                }
                cout << v[i] << ":" << mp[v[i]][mp[v[i]].size() - 1];
                cout << endl;
            }
        }

    }
    
    return 0;
}