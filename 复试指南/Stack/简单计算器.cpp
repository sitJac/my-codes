#include<bits/stdc++.h>
using namespace std;

int Priority(char c)    //定义优先级顺序 #, $, +-, */
{
    if(c == '#')
        return 0;
    else if(c == '$')
        return 1;
    else if(c == '+' || c == '-')
        return 2;
    else if(c == '*' || c == '/')
        return 3;
    return 0;
}

double getNumber(string str, int& index)
{
    double number = 0;
    while (isdigit(str[index]))
    {
        number = number * 10 + str[index] - '0';
        index++;
    }
    return number;
}

double Calculate(double x, double y, char op)
{
    double result = 0;
    if(op == '+'){
        result = x + y;
    }
    if(op == '-'){
        result = x - y;
    }
    if(op == '*'){
        result = x * y;
    }
    if(op == '/'){
        result = x / y;
    }
    return result;
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        if(str == "0")
            break;
        stack<char> operation;
        stack<double> number;
        str += '$';
        operation.push('#');
        int index = 0;
        while (index < str.size())
        {
            if (str[index] == ' ')
                index++;
            else if(isdigit(str[index]))
                number.push(getNumber(str, index));
            else
            {
                if(Priority(operation.top()) < Priority(str[index]))
                {
                    operation.push(str[index]);
                    index++;
                }
                else
                {
                    double y = number.top();
                    number.pop();
                    double x = number.top();
                    number.pop();
                    number.push(Calculate(x, y, operation.top()));
                    operation.pop();
                }
            }
        }
        printf("%.2f\n", number.top());
    }
    return 0;
}