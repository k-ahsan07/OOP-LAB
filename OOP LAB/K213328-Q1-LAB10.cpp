#include<iostream>
using namespace std;
class Animal{
public:
    void animalSound(){
    cout<<"The Animal makes a sound"<<endl;
    }
};
class Cat:public Animal{
public:
    void animalSound(){
    cout<<"The Cats say Meow"<<endl;
 }
};
class Dog: public Animal{
public:
    void animalSound(){
    cout<<"The Dog says bow wow"<<endl;
    }
};
class Duck:public Animal{
public:
    void animalSound(){
    cout<<"The Duck says quack quack"<<endl;
    }
};
int main(){
Cat ca;
Dog dg;
Duck du;

//for upcasting
cout<<"For Upcasting:"<<endl;

Animal *a=&ca;
a->animalSound();
a=&dg;
a->animalSound();
a=&du;
a->animalSound();
cout<<endl;

//for downcasting
cout<<"For Downcasting:"<<endl;

Cat*c=(Cat*)&a;
c->animalSound();
Dog*d=(Dog*)&a;
d->animalSound();
Duck*dk=(Duck*)&a;
dk->animalSound();
}
