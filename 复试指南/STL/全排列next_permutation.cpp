#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {1,2,3};
    sort(nums, nums + 3);
    cout << "Ther 3! possible permutations with 3 elements:" << endl;
    do{
        cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << endl;
    }while (next_permutation(nums, nums + 3));
    
    return 0;

    //对string类型：
    string s;
    while(getline(cin, s)){
        sort(s.begin(), s.end());
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(, s.end())));
        cout << endl;
    }

    //对数组类型
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    do{
        for(int i = 0; i < n; ++i)
            cout << a[i];
        cout << endl;
    }while(next_permutation(a, a + n));
    cout << endl;
}

