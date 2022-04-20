#include<bits/stdc++.h>
using namespace std;

const int MAXNUM = 1000000;
int isPrime[MAXNUM];
int a, b;

void Initial(){
    for(int i = 2; i <= sqrt(b); i++){
        if(isPrime[i] == 0 && isPrime(i)){
            
        }
    }
}

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    bool flag = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = false;
        }
    }
    
    return flag;
}

int main(){
    
    cin >> a >> b;
    int cnt  = 0;
    memset(isPrime, 0, sizeof(isPrime));
    for(int i = a; i <= b; i++){
        if(){
            
        }
    }
    cout << cnt << endl;
    return 0;
}