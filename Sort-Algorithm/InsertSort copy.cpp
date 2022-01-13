#include<iostream>
using namespace std;

void InsertSort(int a[6], int n){
    int i, j;
    for(i = 2; i < n; i++){
        if(a[i] < a[i - 1]){
            a[0] = a[i];
            for(j = i - 1; a[j] > a[0]; j--){
                a[j + 1] = a[j];
            }
            a[j + 1] = a[0];
        }
    }
}

int main(){
    int i, j;
    int a[6];
    for(i = 1; i < 6; i++){
        cin >> a[i];
    }
    InsertSort(a, 6);
    cout << "Sorted Number As Follows：" << endl;
    for(j = 1; j < 6; j++){
        cout << a[j] << endl;
    }
}