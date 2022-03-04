#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int >myMap;
    string str;
    cin>>str;
    for(int i = 0; i < str.size(); i++)
    {
        for(int j = i; j < str.size(); j++)
        {
            myMap[str.substr(i,j-i+1)]++;
        }
    }
    for(map<string, int>::iterator it = myMap.begin(); it != myMap.end(); it++)
    {
        if(it->second>1) cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}