#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200;

int n;
long long nums[MAXN];

void Function(){    //判断是否可以通过任意次操作，使数组变为不严格的升序数组
    if(n == 1){
        cout << "NO";
        return;
    }
    for(int i = 0; i < n - 1; i++){
        if(nums[i] > nums[i+1]){
            if((nums[i] % 2 == 0 && nums[i + 1] % 2 != 0) || (nums[i] % 2 != 0 && nums[i + 1] % 2 == 0)){
                long long temp = nums[i];
                nums[i] - nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }
    int flag = 1;
    for(int i = 0; i < n-1; i++){
        if(nums[i] > nums[i+1]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    cin >> n;
    if(n == 0){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    Function();
    return 0;
}