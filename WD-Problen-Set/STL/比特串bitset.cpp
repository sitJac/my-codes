#include<bits/stdc++.h>
using namespace std;

int main(){
	//bitset 使用整数初始化bitset
	bitset<3> bs(7);
	//输出bs各个位的值
	cout<<"bs[0] is "<<bs[0]<<endl;
	cout<<"bs[1] is "<<bs[1]<<endl;
	cout<<"bs[2] is "<<bs[2]<<endl;
	//下面的语句会抛出outofindexexception
	//cout<<"bs[3] is "<<bs[3]<<endl;

	//使用字符串初始化bitset
	//注意：使用string初始化时从右向左处理，如下初始化的各个位的值将是110，而非011
	string strVal("011");
	bitset<3> bs1(strVal);
	//输出各位	
	cout<<"bs1[0] is "<<bs1[0]<<endl;
	cout<<"bs1[1] is "<<bs1[1]<<endl;
	cout<<"bs1[2] is "<<bs1[2]<<endl;
	//cout输出时也是从右边向左边输出
	cout<<bs1<<endl;

	//bitset的方法
	//any()方法如果有一位为1，则返回1
	cout<<"bs1.any() = "<<bs1.any()<<endl;

	//none()方法，如果有一个为1none则返回0，如果全为0则返回1
	bitset<3> bsNone;
	cout<<"bsNone.none() = " <<bsNone.none()<<endl;

	//count()返回几个位为1
	cout<<"bs1.count() = "<<bs1.count()<<endl;

	//size()返回位数
	cout<<"bs1.size() = "<<bs1.size()<<endl;

	//test()返回某一位是否为1
	//flip()诸位取反
	bitset<3> bsFlip = bs1.flip();
	cout<<"bsFlip = "<<bsFlip<<endl;

	//to_ulong
	unsigned long val = bs1.to_ulong();
	cout<<val;
}