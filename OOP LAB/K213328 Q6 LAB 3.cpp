#include<iostream>
using namespace std;
class Result{
    public:
    int rollno;
    string name;
    int marks[3];
    void input();
    void show();
    void total();
    void average();
    void allfunc();
};
void Result :: input(){
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter Roll Number: "<<endl;
    cin>>rollno;
    for (int i = 0; i < 3; i++) {
        cout<<"Enter marks of subject: "<<i+1<<endl;
        cin>>marks[i];
    }
}
void Result :: show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollno<<endl;
    for(int i=0;i<3;i++){
        cout<<"Marks are: "<<marks[i]<<endl;
    }
}
void Result :: total(){
    int total=0;
    for(int i=0;i<3;i++){
        total=total+marks[i];
    }
    cout<<"The total is: "<<total<<endl;
}
void Result :: average(){
    int avg;
    int total=0;
    for(int i=0;i<3;i++){
        total=total+marks[i];
        avg=total/3;
    }
    cout<<"The average is: "<<avg<<endl;
}
void Result :: allfunc(){
		input();
    	show();
    	total();
    	average();
}
int main(){
    Result re;
    re.allfunc();
}
