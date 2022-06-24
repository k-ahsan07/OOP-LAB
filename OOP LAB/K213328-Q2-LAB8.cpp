#include<iostream>
using namespace std;
class shape{
	public:
		double length;
		shape(double l){
			length=l;
		}
		double area(){
			return length*length;
		}
		int operator + (shape s2){
			return area() + s2.area();
		}
};
int main(){
	shape s1(4);
	shape s2(6);
	cout<<"area of shape 1 is "<<s1.length * s1.length<<endl;
	cout<<"area of shape 2 is "<<s2.length * s2.length<<endl;
	cout<<s1 + s2<<endl;
}
