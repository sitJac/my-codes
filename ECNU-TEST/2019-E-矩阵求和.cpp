#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct Matrix
{
    int col;
    int row;
    int matrix[MAXN][MAXN];
    Matrix(int c, int r): col(c), row(r) {}
};

void InputMatrix(Matrix &m)
{
    for (int i = 1; i <= m.row; i++)    //下标从1开始
    {
        for(int j = 1; j <= m.col; j++)
        {
            int temp;
            cin >> temp;
            m.matrix[i][j] = temp;
        }
    }
}

int Sum(int x1, int y1, int x2, int y2, Matrix &m)
{
    int sum = 0;
    for(int i = x1; i <= x2; ++i)
    {
        for(int j = y1; j <= y2; ++j)
        {
            sum += m.matrix[i][j];
        }
    }
    return sum;
}

void Print(int q, Matrix &m, vector< vector<int> > &xy)
{
    for(int i = 0; i < q; i++)
    {
        int sum = 0;
        sum = Sum(xy[i][0], xy[i][1], xy[i][2], xy[i][3], m);
        cout << sum << endl;
    }
}

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    Matrix mat(n, m);
    vector< vector<int> > xy;
    for(int i = 0; i < q; ++i)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> temp;
        temp.push_back(x1);
        temp.push_back(y1);
        temp.push_back(x2);
        temp.push_back(y2);
        xy.push_back(temp);
    }
    InputMatrix(mat);
    Print(q, mat, xy);
    return 0;
}