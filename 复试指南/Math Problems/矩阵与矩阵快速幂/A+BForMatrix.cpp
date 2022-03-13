/*
题意：给出两个同型矩阵A，B（行列数在每组数据第一行给出），判断矩阵A+B全0行和全0列共有多少
个人思路：用三次二重循环：
第一次读矩阵A；
第二次按行优先读矩阵B，同时判断每个元素是否和A对应位置的元素互为相反数（通过flag标记）。
第三次按列优先判断A和B的每一对应列。
*/

#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 20;

struct Matrix {
    int matrix[MAXN][MAXN];
    int row, col;                               //行与列
    Matrix(int r, int c): row(r), col(c) {}     //构造函数
};

Matrix Add(Matrix x, Matrix y) {                //矩阵加法
    Matrix answer(x.row, x.col);
    for (int i = 0; i < answer.row; ++i) {
        for (int j = 0; j < answer.col; ++j) {
            answer.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
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

int Count(Matrix x) {
    int number = 0;
    for (int i = 0; i < x.row; ++i) {
        bool flag = true;
        for (int j = 0; j < x.col; ++j) {
            if (x.matrix[i][j] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            number++;
        }
    }
    for (int j = 0; j < x.col; ++j) {
        bool flag = true;
        for (int i = 0; i < x.row; ++i) {
            if (x.matrix[i][j] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            number++;
        }
    }
    return number;
}

int main() {
    int m, n;
    while (scanf("%d", &m) != EOF) {
        if (m == 0) {
            break;
        }
        scanf("%d", &n);
        Matrix a(m, n);
        Matrix b(m, n);
        InputMatrix(a);
        InputMatrix(b);
        Matrix sum = Add(a, b);
        printf("%d\n", Count(sum));
    }
    return 0;
}