#include<bits/stdc++.h>
using namespace std;

int subsetXORSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < (1 << n); i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                tmp ^= nums[j];
            }
        }
        sum += tmp;
    }
    return sum;
}

int main() {
    vector<int> nums;
    for(int i = 0; i < 2; i++){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    cout << subsetXORSum(nums);
    return 0;
}