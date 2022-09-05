#include<bits/stdc++.h>
using namespace std;

// typedef unsigned uint32_t;
// int hammingWeight(uint32_t n){
//     int cnt = 0;
//     while(n){
//         n = n & (n - 1);
//         cnt++;
//     }
//     return cnt;
// }

int main(){
    bitset<32> x;
    while(cin >> x){
        cout << x.count() << endl;
    }
    return 0;
}