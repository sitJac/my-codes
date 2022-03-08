/*
    最小生成树+Kruskal的问题
    这种问题就是初始化边，然后给边排序，利用Kruskal就可以解决
    这个问题描述真的是看的我头皮发麻。
    就是有n个村庄，然后要你计算最小的维护成本，其实就是求一个最小生成树
    9  // 这个是总的村庄数量
    A 2 B 12 I 25 // 开头A是起点，后面的2是指A有多少条道路去往别的村庄,B和12就是目的地和成本了
*/
#include <bits/stdc++.h>
using namespace std;
const int VMAXN = 26; // 村庄的最大数
const int RMAXN = 75; // 道路的最大数
struct Road{
	int from,to;
	int cost;
};
bool cmp(Road a,Road b){// 按照维护成本排序
	return a.cost<b.cost;
}
int father[VMAXN]; // 并查集
int height[VMAXN]; // 路径的高度
Road road[VMAXN*VMAXN];
int getRoot(int x){ // 获取其根节点
	if(x!=father[x]){
		father[x] = getRoot(father[x]);
	}
	return father[x];
}
void Union(int x,int y){ // 将两个不同集合的点合并为一个并且做路径压缩
	x = getRoot(x);
	y = getRoot(y);
	if(x!=y){
		if(height[x]<height[y]){
			father[x] = y;
		}else if(height[x]>height[y]){
			father[y] = x;
		}else{
			father[y] = x;
			height[x]++;
		}
	}
}
void init(){ // 初始化函数
	for(int i=0;i<VMAXN;i++){
		father[i] = i;
		height[i] = 0;
	}
}
int Kruskal(int vNum,int rNum){ // Kruskal 算法
	int sum = 0;
	sort(road,road+rNum,cmp); // 给边排序
	for(int i=0;i<rNum&&vNum>1;i++){
		Road cur = road[i];
		if(getRoot(cur.from)!=getRoot(cur.to)){
			Union(cur.from,cur.to);
			sum+=cur.cost;
			vNum--;
		}
	}
	return sum;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n){
		init(); // 初始化
		char v; // 记录每次输入的村庄数
		int num,cost,rNum=0;// num 用来记录每次输入的道路条路，cost记录成本，rNum记录总的道路数
		getchar(); // 吃掉空格，如果用cin不知道这一步可不可以省去，可以自己试一下
		for(int i=0;i<n-1;i++){ // 村庄的个数
			scanf("%c%d",&v,&num); // A 2
			getchar(); // 吃掉空格
			int from = v-'A'; // 当前村庄的下标
			for(int j=0;j<num;j++){
				scanf("%c%d",&v,&cost);
				int to = v-'A'; // 目的地村庄
				road[rNum].from = from;
				road[rNum].to = to;
				road[rNum++].cost = cost;
				getchar(); // 吃掉空格和回车
			}
		}
		int answer = Kruskal(n,rNum);
		printf("%d\n",answer);
	}
	return 0;
}