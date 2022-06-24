#include<iostream>
using namespace std;

class employee{
	public:
		employee(string  f = " ", string l = " ", int s = 0)
		{
			fname = f;
			lname = l;
			monthlysalary = s;
		}
	private:
	string fname,lname;
	double monthlysalary;
    public:
	void getdata(string fn,string ln,double ms){
		fname=fn;
		lname=ln;
		if(ms<0){
			monthlysalary=0;
		}
		else{
		
		monthlysalary=ms;}
		
	}
	void display(){
		cout<<endl<<"The actual salary is:"<<monthlysalary;
		cout<<endl<<"The salary after raise is :"<<(monthlysalary*0.1)+(12*monthlysalary);
	}	
};


int main (){
    employee e1,e2;
    string fn,ln;
    double ms;
    cout<<"Enter the first name of employee and last name and monthly salary: "<<endl;
	cin>>fn>>ln>>ms;
	e1.getdata(fn,ln,ms);
	
	cout<<"Enter the second name of employee and last name and monthly salary: "<<endl;
	cin>>fn>>ln>>ms;
	e2.getdata(fn,ln,ms);
	
	e1.display();
	e2.display();	
}

