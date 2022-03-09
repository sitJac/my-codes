#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int charToInt(char x){
    if(x<='9')return x-'0';
    else return x-'A'+10; 
}
char intToChar(int x){
    if(x<=9)return x+'0';
    else return x-10+'A';
}
string divide(int x,string a,int y){
    string res;
    while(a.size()!=0){
        int remainder=0;
        for(int i=0;i<a.size();i++){        //    a/y一次
            int num=remainder*x+charToInt(a[i]);
            a[i]=intToChar(num/y);
            remainder=num%y; 
        }
        res+=(intToChar(remainder));       //   res加上最后一位的余数
        int pos=0;
        while(a[pos]=='0')pos++;//因为字符串除法有前导0存在的可能，所以把‘0’去掉
        a=a.substr(pos);
    }
    reverse(res.begin(),res.end());       //因为是相反的，随意最后进行反向。
    return res;
}
int main(){
    int x,y;string a;
    while(cin>>x>>a>>y){
        for(int i=0;i<a.size();i++){
            if(a[i]>='a'&&a[i]<='z')
                a[i]=a[i]-'a'+'A';
        }
        cout<<divide(x,a,y)<<endl;
    }
    return 0;
}