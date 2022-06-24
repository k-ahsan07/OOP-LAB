#include<iostream>
using namespace std;
class M{
	public:
		int num;
		void operator -- (){
			num*=4;
		}	
		void operator -- ( int a ){
			num/=4;
		}
		M(int n){
			num=n;
		}
};
int main(){
	int num;
	cout<<"Enter number"<<endl;
	cin>>num;
	M m(num);
	--m;
	cout<<"The -- num is "<<m.num<<endl;
	m--;
	cout<<"The num -- is "<<m.num;
}
