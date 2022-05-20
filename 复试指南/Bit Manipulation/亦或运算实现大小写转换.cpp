#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(cin >> str) {
        for(int i = 0; i < str.size(); i++) {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                str[i] ^= (1 << 5);
            }
            else {
                str[i] = str[i];
            }
        }
        cout << str << endl;
    }
    return 0;
}