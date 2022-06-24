#include<iostream>
#include <iomanip>
using namespace std;
class Multiplication{
public:
int multiply(int a,int b){
return(a*b);
}
int multiply(int d,int e,int f){
return(d*e*f);
}
float multiply(float a,float b){
return(a*b);
}
float multiply(float a,float b,float c){
return(a*b*c);
}

};
int main(){
Multiplication s;
cout<<s.multiply(2,3)<<endl;;
cout<<s.multiply(1,2,3)<<endl;
cout<<fixed<<setprecision(2)<<s.multiply(1.0f,3.0f,4.0f)<<endl;
cout<<s.multiply(2.0f,3.0f);
}

