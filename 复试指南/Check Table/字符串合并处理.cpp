//HJ30
#include<bits/stdc++.h>
using namespace std;

char bit_reverse(char c){
    switch(c){
        case '0': c = '0'; break;
        case '1': c = '8'; break;
        case '2': c = '4'; break;
        case '3': c = 'C'; break;
        case '4': c = '2'; break;
        case '5': c = 'A'; break;
        case '6': c = '6'; break;
        case '7':c = 'E'; break;
        case '8':c = '1'; break;
        case '9':c = '9'; break;
        case('a'):c = '5'; break;
        case('b'): c = 'D'; break;
        case('c'):c = '3'; break;
        case('d'):c = 'B'; break;
        case('e'):c = '7'; break;
        case('f'):c = 'F'; break;
        case('A'):c = '5'; break;
        case('B'):c = 'D'; break;
        case('C'):c = '3'; break;
        case('D'):c = 'B'; break;
        case('E'):c = '7'; break;
        case('F'):c = 'F'; break;
        default:break;
    }
    return c;
}

int main(){
    string s1, s2;
    while(cin >> s1 >> s2){
        string mergeStr, res;
        mergeStr = s1 + s2;
        vector<char> vc1, vc2;
        for(int i = 0; i < mergeStr.size(); i++){
            if(i % 2 == 0){
                vc1.push_back(mergeStr[i]);
            }
            else{
                vc2.push_back(mergeStr[i]);
            }
        }
        sort(vc1.begin(), vc1.end());
        sort(vc2.begin(), vc2.end());
        mergeStr = "";
        int i;
        for(i = 0; i < vc1.size() && vc2.size(); i++){
            mergeStr += vc1[i];
            mergeStr += vc2[i];
        }
        if(i < vc1.size()){
            mergeStr += vc1[i];
            i++;
        }
        if(i < vc2.size()){
            
            mergeStr += vc2[i];
            i++;
        }
        //第三步
        for(int k = 0; k < mergeStr.size(); k++){
            res.push_back(bit_reverse(mergeStr[k]));
        }
        cout << res << endl;
    }
    return 0;
}