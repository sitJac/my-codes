#include<bits/stdc++.h>

using namespace std;

struct node{//定义每一种排列的结构体
    int count;
    string str;
    node(int x, string str):count(x),str(str){};
};

int bfs(string str){
    map<string,bool> m;//定义map记录已出现过的字符串节点
    queue<node> q;
    node temp =  node(0,str);
    q.push(temp);
    m[str]=true;
    while(!q.empty()){
        node first = q.front();
        q.pop();
        string firStr = first.str;
        if(firStr.find("2012")!=firStr.npos){
            return first.count;
        }
        for(int i=0;i<firStr.length()-1;i++){//交换字符
            string str2 = firStr;
            swap(str2[i],str2[i+1]);
            if(m.find(str2)!=m.end()&&m[str2]==true);//已出现过则跳过
            else{//否则入队
                node second = node(first.count+1, str2);
                q.push(second);
                m[str2]=true;
            }
        }
    }
    return -1;
}

int main(){
    int n;        //长度
    string str;   //字符串
    while(cin>>n>>str){
        cout<<bfs(str)<<endl;
    }
}
