#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    while (getline(cin, s1))
    {
        vector<string> vec;
        int left = 0;
        getline(cin, s2);
        getline(cin, s3);
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == ' ')
            {
                vec.push_back(s1.substr(left, i-left));
                left = i + 1;
            }
            if(i == s1.size() - 1)
            {
                vec.push_back(s1.substr(left, s1.size() - left));
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            if(vec[i] == s2)
            {
                vec[i] = s3;
            }
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
将主串s1以空格为切割符，切割为若干子串，用vector作为容器存放s1的各个子串
遍历vector容器所有元素,逐个与待替换的子串s2对比，若匹配成功则将替换子串s3赋值给vector中对应元素
*/