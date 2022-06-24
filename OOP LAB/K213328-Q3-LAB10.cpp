#include<iostream>
using namespace std;
class Animal{
protected:
    string name;
public:
    Animal(){
    }
    Animal(string n){
      name=n;
    }
    void setname(string n){
        name=n;
    }
    string getname(){
        return name;
        }
    void foundin(){
    cout<<" An Animal can be found in many places"<<endl;
    }
    ~Animal(){
    }
};
class Mammal:virtual public Animal{
public:
    Mammal(string n):Animal(n){
    }
    void foundin(){
    cout<<" A Mammal can be found in water or on land"<<endl;
    }
    ~Mammal(){
    }
};
class MarineAnimal:virtual public Animal{
public:
    MarineAnimal(string n):Animal(n){
    }
    void foundin(){
    cout<<" A MarineAnimal can only be found in bodies of water"<<endl;
    }
    ~MarineAnimal(){
    }
};
class Whales:public Mammal,public MarineAnimal{
    string whaleType;
public:
    Whales(string n,string wt):Mammal(n),MarineAnimal(n),Animal(n){
       whaleType=wt;
    }
    void foundin(){
      cout<<" A "<<whaleType<<" "<<getname()<<" can only be found in the ocean"<<endl;
      }
    ~Whales(){
    }
};
int main(){
Whales wh("astra","Gray Whale");
wh.foundin();

wh.Animal::foundin();

wh.MarineAnimal::foundin();

wh.Mammal::foundin();
}
