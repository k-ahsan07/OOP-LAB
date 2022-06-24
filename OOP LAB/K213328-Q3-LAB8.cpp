#include<iostream>
using namespace std;
class printclass;
class perimeter{
	double length;
	double breadth;
	public:
		perimeter(){
			length=5;
			breadth=4;
		}	
		friend class printclass;			
};
class printclass{
	public:
		void display(){
			perimeter p;
			cout<<"length is "<<p.length<<endl;
			cout<<"breath is "<<p.breadth<<endl;
			cout<<"perimeter is "<<2*(p.length * p.breadth);
		}
};
int main(){
	printclass p;
	p.display();
	
}
