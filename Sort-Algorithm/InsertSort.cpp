#include <iostream>
using namespace std;

void InsertSort(int a[6], int n){
    int i, j;
    for(i = 2; i < n; i++){
        if(a[i] < a[i - 1]){
            a[0] = a[i];
            for(j = i - 1; a[0] < a[j]; j--){
                a[j + 1] = a[j];
            }
            a[j + 1] = a[0];
        }
    }
}

int main(){
    int a[6];
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    InsertSort(a, 6);
    cout << "Sorted Numbers:" << endl;
    for (int j = 1; j < 6; j++){
        cout << a[j] << endl;
    }
    
    return 0;
}