#include<iostream>
using namespace std;

void BinarySort(int a[6], int n){
    int i, j, low, high, mid;
    for(i = 2; i < n; i++){
        a[0] = a[i];
        low = 1;
        high = i - 1;
        while (low <= high){
            mid = (high + low) / 2;
            if(a[mid] > a[0]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        for(j = i - 1; j > 0; --j){
            a[j + 1] = a[j];
        }
        a[high + 1] = a[0];
    }
}

int main(){
    int a[6];
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    BinarySort(a, 6);
    cout << "Sorted Numbers:" << endl;
    for (int j = 1; j < 6; j++){
        cout << a[j] << endl;
    }
    
    return 0;
}