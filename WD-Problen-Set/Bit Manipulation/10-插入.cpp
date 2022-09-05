#include<bits/stdc++.h>
using namespace std;

int insertBits(int N, int M, int i, int j) {
    int k;
    for(k = 1; k <= j; k++) {
        N &= ~((long long)1<<k);
    }
    return N | (M << i);
}

int main() {
    int N = 1024, M = 19, i = 2, j = 6;
    cout << insertBits(N, M, i, j);
    return 0;
}