#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b;

    cin >> n;

    while(n != 0){
        cin >> a >> b;
        cout << a + b << endl;
        --n;
    }
    return 0;
}