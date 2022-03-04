#include<bits/stdc++.h>
using namespace std;

struct Complex
{
    int real;
    int imag;
    Complex(int a, int b): real(a), imag(b){}
    //重载小于号
    bool operator< (Complex c) const {          //重载小于号
        if (real * real + imag * imag == c.real * c.real + c.imag * c.imag) {
            return imag > c.imag;
        } else {
            return real * real + imag * imag < c.real * c.real + c.imag * c.imag;
        }
    }
};

int main()
{
    int n;
    while (cin >> n)
    {
        priority_queue<Complex> myPriorityQueue;
        while(n--)
        {
            string str;
            cin >> str;

            if(str == "Pop")
            {
                if(myPriorityQueue.empty())
                {
                    cout << "empty" << endl;
                }
                else
                {
                    Complex current = myPriorityQueue.top();
                    myPriorityQueue.pop();
                    cout << current.real << "+i" << current.imag << endl;
                    cout << "SIZE = " << myPriorityQueue.size() << endl;
                }
            }
            else
            {
                int a, b;
                scanf("%d+i%d", &a, &b);
                myPriorityQueue.push(Complex(a, b));
                cout << "SIZE = " << myPriorityQueue.size() << endl;
            }
        }
    }
    return 0;
}
