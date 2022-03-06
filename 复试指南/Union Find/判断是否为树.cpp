#include <bits/stdc++.h>

using namespace std;

const int MAX = 10000;
int father[MAX];
int height[MAX];
int inDegree[MAX];
bool visited[MAX];

void Initial () { // 初始化
    for (int i = 0; i < MAX; ++i) {
        father[i] = i;
        height[i] = 0;
        visited[i] = false;
        inDegree[i] = 0;
    }
}

bool IsTree() { // 判断是否符合树的定义
    int part = 0, root = 0, isTree = true;

    for (int i = 0; i < MAX; ++i) {
        if (!visited[i])
            continue;

        if (inDegree[i] == 0)
            root++;

        if (father[i] == i)
            part++;

        if (inDegree[i] > 1)
            return false; // 如果某个节点的入度大于1，直接返回false
    }
    if (root != 1 || part != 1) { // 一棵树应该只有一个节点的入度等于0
        isTree = false;
    }
    if (root == 0 && part == 0) { // 空树也是树...
        isTree = true;
    }
    return isTree;
}

int Find(int x) { // 查找根结点
    if (x != father[x]) {
        father[x] = Find(father[x]); // 路径压缩
    }
    return father[x];
}

void Union(int x, int y) { // 合并集合
    x = Find(x);
    y = Find(y);

    if (x != y) {
        if (height[x] < height[y]) {
            father[x] = y;
        } else if (height[x] > height[y]) {
            father[y] = x;
        } else {
            father[x] = y;
            height[y]++;
        }
    }
}

int main() {
    int a, b, k = 1;
    Initial();
    while (cin >> a >> b) {
        if (a == -1 && b == -1)
            break;
        else if (a == 0 && b == 0) {

            if (IsTree()) {
                cout << "Case " << k++ <<" is a tree." << endl;
            } else {
                cout << "Case " << k++ <<" is not a tree." << endl;
            }
            Initial(); // 这里别忘记
        } else {
            Union(a, b);
            visited[a] = true;
            visited[b] = true;
            inDegree[b]++;
        }
    }
    return 0;
}
