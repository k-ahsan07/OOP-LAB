#include<iostream>
using namespace std;
class person{
	string id;
	public:
		string getdata(){
			return id;
		}
		void display(){
			cout<<"ID IS  "<<getdata()<<endl;
		}
		person(string a){
			id=a;
		}
};
class admin : public person{
	string name;
	int income;
	public:
		admin(string c, int b , string a) :  person(a){
			name=c;
			income=b;
		}
		int getbonus(){
			return ((income * 12)/20);
		}
		int getdata(int a){
			return income;
		}
		string getdata(string a){
			return name;
		}
		void display(){
			cout<<"THE NAME IS  "<<getdata("name")<<endl;
			cout<<"INCOME IS  "<<getdata(1)<<endl;
		}
};
class account : public person{
	string name;
	int income;
	public:
		account(string c, int b , string a) :  person(a){
			name=c;
			income=b;
		}
		int getbonus(){
			return (income * 12)/20;
		}
		int getdata(int a){
			return income;
		}
		string getdata(string a){
			return name;
		}
		void display(){
			cout<<"THE NAME IS  "<<getdata("name")<<endl;
			cout<<"INCOME IS  "<<getdata(1)<<endl;
		}
};
int main(){
	account ac("Aahil",12000,"k-123456");
	ac.person::display();
	ac.display();
	admin ad("Musawar",2000,"k-98765");
	ad.person::display();
	ad.display();
	
	
}

