#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int left = 0, middle = 0, right = 0;
        int n = s.size();
        left = s.find('z');
        middle = s.find('j') - 1 - s.find('z');
        right = n - 1 - s.find('j');
        if(left * middle == right && middle >= 1)
        {
            cout << "Accepted" << endl;
        }
        else
        {
            cout << "Wrong Answer" << endl;
        }
    }
    return 0;
}

// 其实主要也就是 zoj 中间和两边 o 的个数的规律
// 标记为 left, middle, rigt
// left = right，middle = 1，可以 AC
// 由上面可以知道 nzojn (n 表示 n 个 'o') 是可以 AC 的，
// n ≥ 0，那么 nz 2 j (2n) 也是可以 AC 的，
// 同样的可以知道 nz 3 j (3n) 也是可以 AC 的，
// 以此类推，nz m j mn 是可以 AC 的，
// 那我们就得到规律了，left * middle = right

