#include<iostream>
using namespace std;

class Employee{
public:
string firstname;
string lastname;
double salary;
void setsalary(double salary);
};

void Employee :: setsalary(double s){
salary=s;
if(salary>0)
	{
	salary=0;
	}
else
	{
	salary=s;
	}
}
void EmployeeTest(Employee ob1,Employee ob2){
	ob1.salary=12500+(12500*1.1);
	ob2.salary=15000+(15000*1.1);
	cout<<"The Employee 1 salary is: "<<ob1.salary<<endl;
	cout<<"The Employee 2 salary is: "<<ob2.salary<<endl;
}
main(){
	Employee ob1,ob2;
	ob1.firstname="Ali";
	ob1.lastname="Khan";
	ob1.salary=(12500);
	cout<<"The original salary of Employee 1 is: "<<ob1.salary<<endl;
	ob2.firstname="Jamil";
	ob2.lastname="Khan";
	ob2.salary=(15000);
	cout<<"The original salary of Employee 2 is: "<<ob2.salary<<endl;
	EmployeeTest(ob1,ob2);
}
