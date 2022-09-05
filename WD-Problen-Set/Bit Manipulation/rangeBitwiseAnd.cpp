#include<bits/stdc++.h>
using namespace std;

//暴力
int rangeBitwiseAndLow(int m, int n){
    int res = m;
    for(int i = m; i <= n; i++){
        res = res & i;
    }
    return res;
}

//位运算
int rangeBitwiseAnd(int m, int n){
    int shift = 0;
    while(m != n){
        m >>= 1;
        n >>= 1;
        shift += 1;
    }
    return m << shift;
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << rangeBitwiseAnd(m, n);
    return 0;
}