#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Input{
public:
    char inputarray[10];
    Input(){
    }
    ~Input(){
    }
};
int main(){
int choice=0;
Input t;
cout<<"Enter elements of array: "<<endl;
for(int i=0;i<10;i++){
cin>>t.inputarray[i];
}
cout<<"Input array is: "<<endl;
for(int i=0;i<10;i++){
cout<<t.inputarray[i]<<endl;
}
cout<<"Press 1 for Integer,2 for float and 3 for character: "<<endl;
cin>>choice;
switch (choice){
case 1:
int array1[10];
for(int i=0;i<10;i++){
array1[i]=static_cast<int>(t.inputarray[i]);
}
cout<<"Array in Integer: "<<endl;
for(int i=0;i<10;i++){
cout<<array1[i]<<endl;
}
break;

case 2:
int array2[10];
for(int i=0;i<10;i++){
array2[i]=static_cast<float>(t.inputarray[i]);
}
cout<<"Array in Integer: "<<endl;
for(int i=0;i<10;i++){
cout<<array2[i]<<endl;
}
break;

case 3:
int array3[10];
for(int i=0;i<10;i++){
array3[i]=static_cast<char>(t.inputarray[i]);
}
cout<<"Array in Integer: "<<endl;
for(int i=0;i<10;i++){
cout<<array3[i]<<endl;
}
break;
default:
cout<<"Error"<<endl;
}
}
