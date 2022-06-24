#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int stno;
		string stna;
		double stav;
	public:
		student(){
		}
		student(int n,string na,double a){
			stno=n;
			stna=na;
			stav=a;
		}
	void set_stno(int n){
		stno=n;
	}
	void set_stna(string na){
		stna=na;
	}
	void set_stno(double a){
		stav=a;
	}
	int get_stno(){
		return stno;
	}
	string get_stna(){
		return stna;
	}
	double get_stav(){
		return stav;
	}
	print(){

		cout<<"THE STUDENT NO IS "<<student::get_stno();
		cout<<"\nTHE STUDENT NAME IS :"<<student::get_stna();
		cout<<"\nTHE STUDENT AVERAGE IS :"<<student::get_stav();
	}
};
class graduatestudent:public student{
	private:
	int level;
	int year;
	public:
		graduatestudent(){
		}
		gradtuatestudent(int l,int y){
			level=l;
			year=y;
		}
		void set_level(int l){
		level=l;
	}
	int get_level(){
		return level;
	}
	void set_year(int y){
		year=y;
	}
	int get_year(){
		return year;
	}
	print(){
		cout<<"\nTHE STUDENT LEVEL IS : "<<graduatestudent::get_level()<<endl;
		cout<<"\nTHE STUDENT YEAR IS : "<<graduatestudent::get_level()<<endl;
	}
};
class master :public graduatestudent{
	private:
		int newid;
	public:
		master(){
		}
	master(int i){
		newid=i;
	}
	void set_newid(int i){
		newid=i;
	}
	int get_newid(){
		return newid;
	}
	print(){
		cout<<"\nTHE NEW ID IS : "<<master::get_newid()<<endl;
	}
};
int main(){
	student a(2,"KHUZAIMA AHSAN",67.2);
	a.print();
	master b(32);
	b.print();
}
