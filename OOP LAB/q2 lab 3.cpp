#include<iostream>
using namespace std;
class animal{
public:
int age;
string name;
void set_value(int age,string name);
};
void animal :: set_value(int a,string n){
age=a;
name=n;
}
main(){
animal zebra,dolphin;
zebra.set_value(2,"Suarez");
dolphin.set_value(5,"Pique");
cout<<"The name and age of ZEBRA is: "<<zebra.name<<" "<<zebra.age<<endl;
cout<<"The name and age of DOLPHIN is: "<<dolphin.name<<" "<<dolphin.age<<endl;
}

