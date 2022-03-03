#include<bits/stdc++.h>

using namespace std;

struct animal
{
    int number; //动物编号
    int order;  //收容次序
    animal(int n, int o): number(n), order(o){} //构造方法
};

queue<animal> dogs;
queue<animal> cats;

queue<int> answer;

int main()
{
    int n;
    cin >> n;
    int order = 0;
    for (int i = 0; i < n; ++i)
    {
        int event;
        cin >> event;
        if (event == 1) //有动物进入收容所
        {
            int number;
            cin >> number;
            if(number > 0)
                dogs.push(animal(number, order++));
            else
                cats.push(animal(number, order++));
        }
        else //有人收养动物
        {
            int type;   //收养方式
            cin >> type;
            if(type == 0 && !dogs.empty() && !cats.empty()) //第一种 猫和狗都有就收养最早进入收容所的
            {
                if(dogs.front().order < cats.front().order)
                {
                    //cout << dogs.front().number << " ";
                    answer.push(dogs.front().number);
                    dogs.pop();
                }
                else
                {
                    //cout << cats.front().number << " ";
                    answer.push(cats.front().number);
                    cats.pop();
                }
            }
            else if(type == 0 && dogs.empty() && !cats.empty()) //狗空收养猫
            {
                //cout << cats.front().number << " ";
                answer.push(cats.front().number);
                cats.pop();
            }
            else if(type == 0 && !dogs.empty() && cats.empty()) //猫空收养狗
            {
                //cout << dogs.front().number << " ";
                answer.push(dogs.front().number);
                dogs.pop();
            }
            else if(type == 1 && !dogs.empty())  //指定收养狗
            {
                //cout << dogs.front().number << " ";
                answer.push(dogs.front().number);
                dogs.pop();
            }
            else if(type == -1 && !cats.empty())    //指定收养猫
            {
                //cout  << cats.front().number << " ";
                answer.push(cats.front().number);
                cats.pop();
            }
        }
    }
    for (int i = 0; i < answer.size(); i++)
    {
        /*if(i == (answer.size() - 1))
        {
            cout << answer.front();
            answer.pop();
        }
        else
        {
            cout << answer.front() << " ";
            answer.pop();
        }*/
        cout << answer.front() << " ";
        answer.pop();
    }
    
    return 0;
}