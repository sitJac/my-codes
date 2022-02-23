#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

void permutation(string str,int len) {
	if (len == 1) cout << str << endl;
	for (int i = 0; i < len; i++) {
		string temp(str);
		char head = temp[temp.size() - len + i]; //每次从后缀中选一个字母
		temp.erase(temp.size() - len + i, 1);       //删掉head并加入到前缀的最后
		temp.insert(str.size() - len,1,head);
		permutation(temp,len - 1);                    //递归调用
	}
}
int main() {
	string str;
	while (cin >> str) {
		sort(str.begin(), str.end());        //防止dbc这种未排序好的测例
		permutation(str, str.size());
		printf("\n");
	}
	return 0;
}