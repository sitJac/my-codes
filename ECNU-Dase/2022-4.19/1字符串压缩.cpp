#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        string res;
        int cnt = 1;
        for(int i = 0; i < str.size() - 1; i++){
            if(str[i] == str[i+1]){
                cnt++;
            }
            else{
                res += str[i];
                if(cnt != 1){
                    // char temp = '0' + cnt;
                    string temp = to_string(cnt);
                    res += temp;
                    cnt = 1;
                }
            }
        }
        res += str[str.size() - 1];
        if(cnt != 1){
            // char temp = '0' + cnt;
            string temp = to_string(cnt);
            res += temp;
        }
        if(res.size() <= str.size()){
            cout << res << endl;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}