#include<iostream>
using namespace std;

void ShellSort(int a[],int n)
{
    int dk;
    for(dk=n/2; dk>=1; dk/=2){
        int high = (int)(n / dk) * dk;
        for(int i = 0; i <= high;i += dk){
            int temp = a[i];
            for(int j = 0; j < i; j += dk){
                if(temp < a[j]){
                for(int k = i; k > j; k -= dk){
                    a[k] = a[k - dk];
                }
                a[j] = temp;
                break;
            }
            }
        }
    }
}

int main(){
    int i, j;
    int a[6];
    for(i = 1; i < 6; i++){
        cin >> a[i];
    }
    ShellSort(a, 6);
    cout << "Sorted Number As Follows：" << endl;
    for(j = 1; j < 6; j++){
        cout << a[j] << endl;
    }
}