#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    while(cin>>n)
    {
        cin>>x>>y>>z;
        int temp = x*1000+y*100+z*10;
        int total; //记录总价格
        int MAX = -99999; //记录蕞大价格
        bool find = false; //是否有符合条件的结果
        int first,last; // 第一位 与 最后一位
        for(int i=1;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                total = temp + 10000*i + j;
                if(total%n==0)
                {
                    find = true;
                    if(total/n>MAX)
                    {
                        MAX = total/n;
                        first = i;
                        last = j;
                    }
                }
            }
        }
        if(!find)
        {
            cout<<0<<endl;
        }else{
            cout<<first<<" "<<last<<" "<<MAX<<endl;
        }
            
        
    }
    return 0;
}
