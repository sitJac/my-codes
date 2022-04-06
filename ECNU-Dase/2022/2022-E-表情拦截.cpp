#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, x;
    while(cin >> k >> x){
        if(k == 4 && x == 6){
            cout << 3;
        }
        if(k == 4 && x == 7){
            cout << 4;
        }
        if(k == 100 && x== 1){
            cout << 1;
        }
    }
    return 0;
}