#include<bits/stdc++.h>
using namespace std;

bool isPopOrder(vector<int> pushOrder, vector<int> popOrder) {
    if(pushOrder.size() != popOrder.size()) {
        return false;
    }
    int n = pushOrder.size();
    int j = 0;
    stack<int> s;
    for(int i = 0; i < n; i++) {
        s.push(pushOrder[i]);
        while(!s.empty() && popOrder[j] == s.top()) {
            s.pop();
            j++;
        }
    }
    if(s.empty()) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    vector<int> pushOrder; //[1,2,3,4,5]
    vector<int> popOrder; //[4,5,3,2,1]
    for(int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        pushOrder.push_back(tmp);
    }
    for(int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        popOrder.push_back(tmp);
    }
    if(isPopOrder(pushOrder, popOrder)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}