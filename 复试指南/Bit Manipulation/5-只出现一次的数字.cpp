#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int res = 0;
    for(int i = 0; i < nums.size(); i++) {
        res = res ^ nums[i];
    }
    return res;
}

int main() {
    vector<int> numbers;
    for(int i = 0; i < 5; i++){
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    cout << singleNumber(numbers);
    return 0;
}