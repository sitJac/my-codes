#include<bits/stdc++.h>
using namespace std;

int n;
string str;

bool isBeautiful(int number_of_0, int number_of_1){
    if((number_of_0 - 1) * 2 == number_of_1){
        return true;
    }
    else{
        return false;
    }
}

void Function(){
    int number_of_0 = 0;
    int number_of_1 = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '0'){
            number_of_0++;
        }
        if(str[i] == '1'){
            number_of_1++;
        }
    }
    //先判断是否是美观的
    if(isBeautiful(number_of_0, number_of_1)){
        cout << "0";
    }
    else{
        // cout << "nobeautiful";
        int need = 0;
        need = (number_of_0 - 1)*2 - number_of_1;
        cout << need;
    }
    
}

int main(){
    cin >> n;
    cin >> str;
    Function();
    return 0;
}