#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[10];  //砝码种类
    int count;
    while(cin >> n){
        for(int i = 0; i < n; i++){//输入砝码种类
            cin >> a[i];
        }

        vector<int> v;
        for(int i = 0; i < n; i++){//输入n种砝码的数量
            cin >> count;
            for(int j = 0; j < count; j++){//对于每一种数量的砝码push一个该数量进v
                v.push_back(a[i]);
            }
        }

        set<int> s;
        s.insert(0);
        for(int i = 0; i < v.size(); i++){
            set<int> t(s);
            for(auto it = t.begin(); it != t.end(); it++){
                s.insert(*it + v[i]);
            }
        }

        cout << s.size() << endl;
    }
    return 0;
}
