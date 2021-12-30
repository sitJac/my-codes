#include <iostream>
using namespace std;

void BubbleSort(int a[6], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = n - 1; j > i; j--){
            int temp;
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[6];
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    BubbleSort(a, 6);
    cout << "Sorted Numbers:" << endl;
    for (int j = 0; j < 6; j++){
        cout << a[j] << endl;
    }

    return 0;

}