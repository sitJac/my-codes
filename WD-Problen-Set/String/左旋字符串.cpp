#include<bits/stdc++.h>
using namespace std;

string LeftRoateString(string& str, int& k) {
    int len = str.size();
    if(len == 0) {
        return "";
    }
    k = k % len;    //左旋len相当于没旋
    reverse(str.begin(), str.end());
    reverse(str.begin(), str.begin() + len - k);
    reverse(str.end() - k, str.end());
    return str;
}

int main() {
    string str;
    int k;
    while(cin >> str >> k) {
        cout << LeftRoateString(str, k) << endl;
    }
    return 0;
}