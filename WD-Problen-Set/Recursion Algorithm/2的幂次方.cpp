#include<bits/stdc++.h>

using namespace std;

vector<int> ToArray(int n){    //将n转换为2的i次方的系数集合
    vector<int> result;
    int i = 0;
    while(n != 0){
        while( pow(2, i) < n){
            i++;
        }
        if( pow(2, i) > n){
            i--;
        }
        n = n - pow(2, i);
        result.push_back(i);
        i = 0;
    }
    return result;
}

string Build(int num){
    vector<int> n;
    n = ToArray(num);
    int size = n.size();
    string str = "";
    for(int i = 0; i < size; ++i){
        if(n[i] == 1){
            str += "2";
        }
        else if(n[i] == 0){
            str += "2(0)";
        }
        else{
            str += "2(" + Build(n[i]) + ")";
        }
        if(i != size - 1){
            str += "+";
        }
    }
    return str;
}

int main(){
    int n;
    while(cin >> n){
        cout << Build(n) << endl;
    }
    return 0;
}