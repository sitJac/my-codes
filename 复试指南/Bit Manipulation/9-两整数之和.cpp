#include<bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    return b == 0 ? a : getSum(a^b, (unsigned int)(a&b) << 1);
}

int main() {
    int a, b;
    while(cin >> a >> b) {
        cout << getSum(a, b) << endl;
    }
    return 0;
}