#include<bits/stdc++.h>

using namespace std;

const int MAXN = 100;

struct Matrix {
    int matrix[MAXN][MAXN];
    int row, col;                               //行与列
    Matrix(int r, int c): row(r), col(c) {}     //构造函数
};

Matrix Multiply(Matrix x, Matrix y) {           //矩阵乘法
    Matrix answer(x.row, y.col);
    for (int i = 0; i < answer.row; ++i) {
        for (int j = 0; j < answer.col; ++j) {
            answer.matrix[i][j] = 0;
            for (int k = 0; k < x.col; ++k) {
                answer.matrix[i][j] += x.matrix[i][k] * y.matrix[k][j];     //重点理解
            }
        }
    }
    return answer;
}

void InputMatrix(Matrix &x) {                   //矩阵输入
    for (int i = 0; i < x.row; ++i) {
        for (int j = 0; j < x.col; ++j) {
            scanf("%d", &x.matrix[i][j]);
        }
    }
}

void OutputMatrix(Matrix x) {                   //矩阵输出
    for (int i = 0; i < x.row; ++i) {
        for (int j = 0; j < x.col; ++j) {
            printf("%d ", x.matrix[i][j]);
        }
        printf("\n");
    }
    return ;
}

int main() {
    Matrix x(2, 3);
    Matrix y(3, 2);
    InputMatrix(x);
    InputMatrix(y);
    Matrix answer = Multiply(x, y);
    OutputMatrix(answer);
    return 0;
}