#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n)     //判断是否是质数
{
	if(n < 2)
    {
        return false;
    }
	if(n == 2)
	{
		return true;
	}
    int bound = sqrt(n);
    for (int i = 2; i <= bound; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
	vector<int> v; // 存储2-b的所有质数
	int a,b;  
	cin >> a;
	cin >> b;
	for (int i = 2; i<=b; ++i) // 存储质数过程
	{
		if (IsPrime(i))
		{
			v.push_back(i);
		}
	}

	for (int i = a; i <= b; ++i) // 从a开始处理直到b
	{
		if (IsPrime(i))   // 是质数的话 直接输出
		{
			cout << i << "=" << i;
		}
		else if(i == 1)	// 1既不是质数也不是合数
		{
			cout << i << "=" << i;
		}
		else  // 不是质数分别处理
		{
			cout << i << "=";
			int temp = i;// 暂存i
			int index = 0; //存储质数的数组下标 索引
			while (temp != 1)  // 当前数字没有被除尽时继续
			{
				if (temp % v[index] == 0)  // 从第一个质数开始除1 
				{
					cout << v[index];  
					temp /= v[index];     
					index = 0; // 还原   即 继续从第一个质数2开始尝试
					if (temp != 1)   // 控制 * 的输出
						cout << "*";
				}
				else  // 不能整除的话尝试下一个质数
				{
					index++;
				}
			}
		}
		cout << endl;
	}
	return 0;
}