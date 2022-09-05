#include<bits/stdc++.h>
using namespace std;

bool hasAlternatingBits(int n) {
    while(n) {
        if((n&3) == 3 || (n&3) == 0) {
            return false;
        }
        n >>= 1;
    }
    return true;
}

int main(){
    int n;
    while(cin >> n) {
        cout << bitset<8>(n) << endl;
        if(hasAlternatingBits(n)) { //0 1交替出现
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}