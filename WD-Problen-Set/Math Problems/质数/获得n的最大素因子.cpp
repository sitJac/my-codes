#include <bits/stdc++.h>
using namespace std;

int get_max_prime(int a){
    int max = 0;
    for(int i = 2; i <= sqrt(a); i++){
        while(a % i == 0){
            if(i > max)
                max = i;
            a/=i;
        }
    }
    return a>max?a:max;
}

int main(){
    int n;
    while(cin >> n){
        cout << get_max_prime(n) << endl;
    }
    return 0;
}