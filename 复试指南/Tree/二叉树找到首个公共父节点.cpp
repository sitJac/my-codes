#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x == 1 && y == 1){
            cout << 1 << endl;
        }
        else{
            while(x != y){
                if(x < y){
                    swap(x, y);
                }
                x /= 2;
            }
            cout << x << endl;
        }
    }
}