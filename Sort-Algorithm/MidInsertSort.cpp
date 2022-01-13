#include<iostream>
using namespace std;

void MidInsertSort(int a[], int n){
    int i, j, low, high, mid;
    for(i = 2; i < n; i++){
        low = 1;
        high = i - 1;
        while(low <= high){
            a[0] = a[i];
            mid = (low + high) / 2;
            if(a[0] < a[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        for(j = i - 1; j >= high + 1; j--){
            a[j + 1] = a[j];
        }
    }
}

int main(){
    int i, j;
    int a[6];
    for(i = 1; i < 6; i++){
        cin >> a[i];
    }
    MidInsertSort(a, 6);
    cout << "Sorted Number As Follows：" << endl;
    for(j = 1; j < 6; j++){
        cout << a[j] << endl;
    }
}