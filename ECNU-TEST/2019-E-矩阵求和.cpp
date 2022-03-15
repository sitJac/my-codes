#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

int martix[MAXN][MAXN];

int main()
{
    int n, m, q;
    int x1[q], y1[q], x2[q], y2[q];
    cin >> n >> m >> q;
    for (int i = 0; i < q; i++) //输入询问的坐标
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
    }
    /*for (int i = 0; i < m; i++) //输入matrix
    {
        for (int j = 0; j < m; j++)
        {
            cin >> martix[i][j];
        }
    }*/
    
    //测试打印输出
    cout << n << m << q << endl;
    for (int i = 0; i < q; i++)
    {
        cout << x1[i] << y1[i] << x2[i] << y2[i] << endl;
    }
    /*for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << martix[i][j];
        }
        cout << endl;
    }*/
    
    
    
    return 0;
}