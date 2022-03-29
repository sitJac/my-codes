#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int tree[n];
        for(int i = 1; i <= n; i++){
            cin >> tree[i];
        }
        int d;
        cin >> d;
        int low = pow(2, d - 1);
        int high = pow(2, d) - 1;
        if(low <= n){
            for(int i = low; i <= high; i++){
                cout << tree[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}