#include<iostream>
using namespace std;
class rational{
	private:
     int denominator;
     int numerator;
		
		public:
			rational(){
				denominator=0;
				numerator=0;
			}
			rational(int a ,int b){
				denominator=a;
				numerator=b;
			}
			 void setnum(int b){
			 	numerator=b;
			 }   
			 void setden(int a){
			 	denominator=a;
			 }      
			 void calc(rational o1,rational o2){
			 	int add,a1,lcm,a2;
			 	lcm=o1.denominator*o2.denominator;
			 	a1=o1.numerator*o2.denominator;
			 	a2=o1.denominator*o2.numerator;
			 	add=a1+a2;
			 	cout<<add<<"/"<<lcm<<endl;
			 	float f;
				 f=(float)add/lcm;
			 	cout<<f;
			
			 }     
			 void calc2(rational o1,rational o2){
			 	int add,a1,lcm,a2;
			 	lcm=o1.denominator*o2.denominator;
			 	a1=o1.numerator*o2.denominator;
			 	a2=o1.denominator*o2.numerator;
			 	add=a1-a2;
			 	cout<<add<<"/"<<lcm<<endl;
			 	float f;
				 f=(float)add/lcm;
			 	cout<<f;
			
			 }         
			 void calc3(rational o1,rational o2){
			 	int add,a1,lcm,a2;
			 	lcm=o1.denominator*o2.denominator;
			 	a1=o1.numerator*o2.numerator;
			 	
			 	cout<<a1<<"/"<<lcm<<endl;
			 	float f;
				 f=(float)a1/lcm;
			 	cout<<f;
			 	
			
			 }         
			 void calc4(rational o1,rational o2){
			 	int add,a1,lcm,a2;
			 	lcm=o1.numerator*o2.denominator;
			 	a1=o1.denominator*o2.numerator;
			 	
			
			 	cout<<lcm<<"/"<<a1<<endl;
			 	float f;
				 f=(float)lcm/a1;
			 	cout<<f;
			
			 }  
		};
			    
				
int main(){
	int a,a2,b,b2,op;
	rational o1(3,2);
	rational o2(2,3);
	
	cout<<"Enter numerator for number 1\n";
	cin>>b;
	cout<<"Enter denominator for number 1\n";
	cin>>a;
	cout<<"Enter numerator for number 2\n";
	cin>>b2;
	cout<<"Enter denominator for number 2\n";
	cin>>a2;
	o1.setnum(b);
	o2.setnum(b2);
	o1.setden(a);
	o2.setden(a2);
	rational o3;
	cout<<"Enter 1 for add , 2 for subtract,3 for multiply and 4 for division";
	cin>>op;
	
	if(op==1){
		o3.calc(o1,o2);
	}
	else if(op==2){
		o3.calc2(o1,o2);
	}
	else if(op==3){
		o3.calc3(o1,o2);
	}
	else if(op==4){
		o3.calc4(o1,o2);
	}
	else{
		cout<<"invalid number";
	}
	
	
	
	
	
}         
