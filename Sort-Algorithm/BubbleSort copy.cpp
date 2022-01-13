#include<iostream>
using namespace std;

void BubbleSort(int a[],int n){
    int i, j, temp, flag;
    for (i = 0; i < n - 1; i++){
        flag = false;
        for (j = n - 1; j > i; j--){ //每一趟排序
            if (a[j - 1] > a[j]){    //若为倒序 则交换
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
                flag = true;
            }
        }
        if(flag == false){        //若未交换，则有序
            return;
        }
    }
}

int main(){
    int i, j;
    int a[6];
    for(i = 0; i < 6; i++){
        cin >> a[i];
    }
    BubbleSort(a, 6);
    cout << "Sorted Number As Follows:" << endl;
    for(j = 0; j < 6; j++){
        cout << a[j] << endl;
    }
}