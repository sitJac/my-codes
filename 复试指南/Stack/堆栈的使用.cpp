#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    stack<int> myStack;
    while(cin >> n){
        for(int i = 0; i < n; ++i){
            char command;
            cin >> command;
            if(command == 'A'){  //取栈顶元素top
                if(myStack.empty()){
                    cout << 'E' << endl;
                }
                else{
                    cout << myStack.top() << endl;
                }
            }
            if(command == 'P'){  //Push元素入栈
                int num;
                cin >> num;
                myStack.push(num);
            }
            if(command == 'O'){  //Pop元素出栈
                if(!myStack.empty()){
                    myStack.pop();
                }
            }
        }
    }
    return 0;
}