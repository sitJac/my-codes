#include<bits/stdc++.h>
using namespace std;

struct list {
	int gold, all, number;  //金牌数，奖牌数和人口数
	int l1, l2, l3, l4;     //对应四种排名方式
	int order;              //原来的输入顺序，方便在排序完后回归原来的顺序
};

//四种排名方式sort函数所对应要用的compare函数
bool compare1(list x, list y) {
	return x.gold > y.gold;
}
bool compare2(list x, list y) {
	return x.all > y.all;
}
bool compare3(list x, list y) {
	return 1.0*x.gold / x.number > 1.0*y.gold / y.number;
}
bool compare4(list x, list y) {
	return 1.0*x.all / x.number > 1.0*y.all / y.number;
}
//回归原来输入顺序的函数
bool compare5(list x, list y) {
	return x.order < y.order;
}

int main() {
	int n;
	int m;
	cin >> n >> m;  //n是国家数，m是排名的国家数
	list* arr = (list*)malloc(sizeof(list) * n);
	int* country = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].gold >> arr[i].all >> arr[i].number;
		arr[i].order = i;
	}
	for (int i = 0; i < m; i++)cin >> country[i];
	sort(arr, arr + n, compare1);//对金牌数进行排序
	arr[0].l1 = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i].gold == arr[i - 1].gold)arr[i].l1 = arr[i - 1].l1;
		else arr[i].l1 = i + 1;
	}//排名记录在l1中
	sort(arr, arr + n, compare2);//对奖牌数进行排序
	arr[0].l2 = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i].all == arr[i - 1].all)arr[i].l2 = arr[i - 1].l2;
		else arr[i].l2 = i + 1;
	}//排名记录在l2中
	sort(arr, arr + n, compare3); arr[0].l3 = 1;//对金牌人口比例进行排序
	for (int i = 1; i < n; i++) {
		if (1.0*arr[i].gold / arr[i].number == 1.0*arr[i - 1].gold / arr[i - 1].number)arr[i].l3 = arr[i - 1].l3;
		else arr[i].l3 = i + 1;
	}//排名记录在l3中
	sort(arr, arr + n, compare4);//对奖牌人口比例进行排序
	arr[0].l4 = 1;
	for (int i = 1; i < n; i++) {
		if (1.0*arr[i].all / arr[i].number == 1.0*arr[i - 1].all / arr[i - 1].number)arr[i].l4 = arr[i - 1].l4;
		else arr[i].l4 = i + 1;
	}//排名记录在l4中
	sort(arr, arr + n, compare5);//回归原来的排序顺序
	for (int i = 0; i < m; i++) {
		if (arr[country[i]].l1 <= arr[country[i]].l2 && arr[country[i]].l1 <= arr[country[i]].l3 && arr[country[i]].l1 <= arr[country[i]].l4)
			cout << arr[country[i]].l1 << ':' << 1 << endl;
		else if (arr[country[i]].l2 <= arr[country[i]].l1 && arr[country[i]].l2 <= arr[country[i]].l3 && arr[country[i]].l2 <= arr[country[i]].l4)
			cout << arr[country[i]].l2 << ':' << 2 << endl;
		else if (arr[country[i]].l3 <= arr[country[i]].l1 && arr[country[i]].l3 <= arr[country[i]].l2 && arr[country[i]].l3 <= arr[country[i]].l4)
			cout << arr[country[i]].l3 << ':' << 3 << endl;
		else cout << arr[country[i]].l4 << ':' << 4 << endl;
	}//对需要排序的国家，输出四种排名方式中最小的一个
	return 0;
}