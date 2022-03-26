#include<iostream>
#include<set>
using namespace std;

set<int> st;    //存储覆盖数
int a[1001];

void xxx(int a){
    while(a != 1){
        if(a % 2 == 0){    //如果是偶数就砍一半
            a /= 2;
        }
        else {         //如果是奇数就3n+1后砍一半
            a = (a*3+1) / 2;
        }
        st.insert(a);
    }
}

int main(){
    int n,i,j;
    while(cin >> n){
        if(n == 0){
            break;
        }
        st.clear();
        for(i = 0; i < n; ++i){
            cin >> a[i];
            xxx(a[i]);
        }
        bool is_first = true;
        for(i = n-1; i >= 0; --i){
            if(st.find(a[i]) == st.end()){
                if(is_first){
                    cout << a[i];
                    is_first = false;
                }
                else{
                    cout << " " << a[i];
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}

