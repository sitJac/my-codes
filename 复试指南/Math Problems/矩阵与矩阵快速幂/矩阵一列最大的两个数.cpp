#include<bits/stdc++.h>

using namespace std;

const int MAXN = 100;

struct Matrix {
    int matrix[MAXN][MAXN];
    int row, col;                               //行与列
    Matrix(int r, int c): row(r), col(c) {}     //构造函数
};

void InputMatrix(Matrix &x) {                   //矩阵输入
    for (int i = 0; i < x.row; ++i) {
        for (int j = 0; j < x.col; ++j) {
            scanf("%d", &x.matrix[i][j]);
        }
    }
}

void Function(Matrix &x){
    vector<int> first;
    vector<int> second;
    
    for(int j = 0; j < x.col; ++j){
        int a[4];
        memset(a, 0, sizeof(a));
        for(int i = 0; i < x.row; ++i){
            a[i] = x.matrix[i][j];
        }
        //将每一列的数字存储到了数组a中
        int temp[4];
        for(int i = 0; i < 4; ++i){
            temp[i] = a[i];
        }
        sort(temp, temp + 4);
        int one = temp[3];
        int two = temp[2];
        for(int i = 0; i < 4; ++i){
            if(a[i] == one){
                first.push_back(one);
                second.push_back(two);
                break;
            }
            if(a[i] == two){
                first.push_back(two);
                second.push_back(one);
                break;
            }
        }
    }
    
    for(int i = 0; i < first.size(); ++i){
        cout << first[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < second.size(); ++i){
        cout << second[i] << " ";
    }
}

int main() {
    Matrix x(4, 5);
    InputMatrix(x);
    Function(x);
    return 0;
}