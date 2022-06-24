#include<iostream>
using namespace std;
class electronics{
    public:
	int objno;
	static int objcount;
	public:
	electronics(){
		objno=++objcount;
		cout<<"ELECTRONICS"<<endl;
	}
};
class mobile : public electronics{
	public:
	mobile(){
		cout<<"MOBILE"<<endl;
	}
};
class nokia : public mobile{
	public:
	nokia(){
		cout<<"NOKIA"<<endl;
	}
};
class laptops :public electronics{
	public:
		laptops(){
			cout<<"LAPTOPS"<<endl;
		}
};
class asus : public laptops{
	public:
		asus(){
			cout<<"ASUS"<<endl;
		}
};
int electronics::objcount=0;
int main(){
	mobile o;
	laptops p;
	laptops s;
cout<<"The Total count is: "<<electronics ::objcount<<endl;	
}
