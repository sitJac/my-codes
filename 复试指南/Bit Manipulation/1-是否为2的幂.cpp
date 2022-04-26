#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x){
    return (x > 0) && ( x&(x-1) ) == 0;
}

int main(){
    int x;
    while(cin >> x){
        if(isPowerOfTwo(x)){
            cout << "True" << endl;
        }
        else{
            cout << "False" << endl;
        }
    }
    return 0;
}