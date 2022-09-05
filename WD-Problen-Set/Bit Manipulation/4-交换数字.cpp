#include<bits/stdc++.h>
using namespace std;

/*
    亦或运算
    相同亦或得0：520^520=0
    0与任意数亦或得本身：1314^0=1314 

    // a = a^b
    // b = a^b = a^b^b = a^0 = a
    // a = a^b = a^b^a = a^a^b = 0^b = b
*/

vector<int> swapNumbers(vector<int>& numbers) {
    numbers[0] = numbers[0]^numbers[1];
    numbers[1] = numbers[0]^numbers[1];
    numbers[0] = numbers[0]^numbers[1];
    return numbers;
}

int main(){
    vector<int> numbers;
    for(int i = 0; i < 2; i++){
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    swapNumbers(numbers);
    for(int i = 0; i < 2; i++){
        cout << numbers[i] << " ";
    }
    return 0;
}