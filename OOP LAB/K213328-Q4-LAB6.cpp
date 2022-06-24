#include<iostream>
using namespace std;
class student{
	int id;
	string name;
	public:
		void getstudentdetails(){
			cout<<"STUDENT DETAILS:\n\t1.NAME=\t"<<name<<endl<<"\t2.ID=\t"<<id<<endl;
		}
		student(int a, string b){
			id=a;
			name=b;
		}
};
class marks : public student{
	protected:
		int oop;
		int pf;
		int ds;
		int db;
	public:
		void getmarks(){
			cout<<"MARKS:\n\t1.OOP\t"<<oop<<"\t2.PF\t"<<pf<<"\t3.DS\t"<<ds<<"\t4.DB\t"<<db<<endl;
		}
		marks(int a, int b, int c, int d, int e, string f):student(e,f){
			oop=a;
			pf=b;
			ds=c;
			db=d;
		}
};
class result : public marks{
	protected:
		int total;
		double avg;
		public:
			result(int a, int b, int c, int d, int e, string f):marks(a,b,c,d,e,f){}
			void display(){
				total=oop+pf+ds+db;
				avg=(double)total/4;
				cout<<"TOTAL marks are "<<total<<endl;
				cout<<"AVERAGE marks are "<<avg<<endl;
			}
};
int main(){
	int a,b,c,d,e;
	string f;
	cout<<"Enter id and name respectively"<<endl;
	cin>>e;
	cin.ignore();
	getline(cin,f);
	cout<<"Enter subject marks"<<endl;
	cout<<"1.OOP\t2.PF\t3.DS\t\n4.DB\t"<<endl;
	cin>>a>>b>>c>>d;
	result r(a,b,c,d,e,f);
	r.getstudentdetails();
	r.getmarks();
	r.display();

}
