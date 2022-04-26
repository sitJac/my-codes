#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int n = x ^ y;
    int cnt = 0;
    while(n) {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main(){
    int x, y;
    while(cin >> x >> y) {
        cout << hammingDistance(x, y) << endl;
    }
    return 0;
}