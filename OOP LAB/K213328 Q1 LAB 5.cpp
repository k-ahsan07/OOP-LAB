#include<iostream>
using namespace std;
class Number{
	double real;
	double imaginary;
	public:
		Number(double a,double b){
			real=a;
			imaginary=b;
		}
		double getreal(){
			return real;
		}
		double getimaginary(){
			return imaginary;
		}
		
		
};

double Addreal(Number n1, Number n2){
	double a; 
	a=n1.getreal()+n2.getreal();
	return a;
}

double Addimaginary(Number n1, Number n2){
	double a;
	a=n1.getimaginary()+n2.getimaginary();
	return a;
}

double Subractreal(Number n1, Number n2){
	double a;
	a=n1.getreal()-n2.getreal();
	return a;
}

double Subractimaginary(Number n1, Number n2){
	double a;
	a=n1.getimaginary()-n2.getimaginary();
	return a;
}

main(){
	double a,b,c,d;
	cout<<"INPUT ALL NUM :\t ";
	cin>>a>>b>>c>>d;
	Number n1(a,b);
	Number n2(c,d);
	cout<<"ADDITION OF TWO NUM IS  "<<Addreal(n1,n2)<<" + "<<Addimaginary(n1,n2)<<"i"<<endl;
	cout<<"SUBTRACTION OF TWO NUM IS "<<Subractreal(n1,n2)<<" + "<<Subractimaginary(n1,n2)<<"i"<<endl;
}
