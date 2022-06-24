#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;
class Saving{
	int balance;
	static int interest;
	public:
		int calculateinterest(){
			int a=interest*balance/(12*100);
			balance+=a;
			return balance;			
		}
		static void modifyInterest(){
			interest=4;	
		}
		static int setinterest(){
			interest=3;
		}
		Saving(int a){
			balance=a;
			setinterest();
		}
};
int Saving::interest;
int main(){
	int ch;
	Saving s1(5000);
	Saving s2(7015);
	cout<<"\nThe saving balance for Person 1 is "<<s1.calculateinterest()<<endl;
	cout<<"\nThe saving balance for Person 2 is "<<s2.calculateinterest()<<endl;
	cout<<"\nNow with new interest rate"<<endl;
	Saving::modifyInterest();
	cout<<"\nThe saving balance for Person 1 is "<<s1.calculateinterest()<<endl;
	cout<<"\nThe saving balance for Person 2 is "<<s2.calculateinterest()<<endl;
}
