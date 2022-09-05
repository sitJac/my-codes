#include<bits/stdc++.h>
using namespace std;

typedef struct Student{
    string num;
    string name;
    int score;
    Student(string num,string name,int score):num(num),name(name),score(score){}
}Student;

bool cmp1(Student s1,Student s2){
    return s1.num<s2.num;
}

bool cmp2(Student s1,Student s2){
    if(s1.name!=s2.name)
        return s1.name<s2.name;
    else
        return s1.num<s2.num;
}

bool cmp3(Student s1,Student s2){
    if(s1.score!=s2.score)
        return s1.score<s2.score;
    else
        return s1.num<s2.num;
}

void print(vector<Student> s){
    cout<<"Case:"<<endl;
    for(vector<Student>::iterator it=s.begin();it!=s.end();it++){
        cout<<it->num<<" "<<it->name<<" "<<it->score<<endl;
    }
}

int main(){
    int N,C;
    while(cin>>N&&N){
        cin>>C;
        vector<Student> s;
        string num,name;
        int score;
        while(N--){
            cin>>num>>name>>score;
            s.push_back(Student(num,name,score));
        }
        switch(C){
            case 1:
                sort(s.begin(),s.end(),cmp1);
                print(s);
                break;
            case 2:
                sort(s.begin(),s.end(),cmp2);
                print(s);
                break;
            case 3:
                sort(s.begin(),s.end(),cmp3);
                print(s);
                break;
        }
    }
    return 0;
}