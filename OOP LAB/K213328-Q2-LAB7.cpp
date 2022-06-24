#include<iostream>
using namespace std;
class Car{
	string engine;
	int wheels;
	int door;
	public:
		Car(){
			engine="660CC";
			door=2;
			wheels=4;
		}
		
		string getengine() const{ return engine;}
		
		int getdoors() const{return door;}
		
		int getwheels() const{return wheels;}
		
		void setengine(string a){ engine=a;	}
		
		void setdoor(int a){ door=a; };
		
		void setwheels(int a){ wheels=a; }
		
		void startengine(bool a){ 
			if(a==1)
				cout<<"BASE:The engine is started"<<endl; }
		
		void accelerate(bool a){
			if(a==1)
				cout<<"BASE:The car is accelerated"<<endl; }
		
		void brake(bool a){
			if(a==1)
				cout<<"BASE:Brake is applied"<<endl;	}
};

class audi : public Car{
	void startengine(bool a){ 
			if(a==1)
				cout<<"DERIVED:The engine is started"<<endl; }
		
		void accelerate(bool a){
			if(a==1)
				cout<<"DERIVED:The car is accelerated"<<endl; }
		
		void brake(bool a){
			if(a==1)
				cout<<"DERIVED:Brake is applied"<<endl;	}
};

class bmw : public Car{
	void startengine(bool a){ 
			if(a==1)
				cout<<"DERIVED:The engine is started"<<endl; }
		
		void accelerate(bool a){
			if(a==1)
				cout<<"DERIVED:The car is accelerated"<<endl; }
		
		void brake(bool a){
			if(a==1)
				cout<<"DERIVED:Brake is applied"<<endl;	}	
};

class ferari : public Car{
	void startengine(bool a){ 
			if(a==1)
				cout<<"DERIVED:The engine is started"<<endl; }
		
		void accelerate(bool a){
			if(a==1)
				cout<<"DERIVED:The car is accelerated"<<endl; }
		
		void brake(bool a){
			if(a==1)
				cout<<"DERIVED:Brake is applied"<<endl;	}	
};
	
int main(){
	
	audi a;
	cout<<"FOR AUDI:"<<endl;
	cout<<"DOORS ARE "<<a.getdoors()<<endl;
	cout<<"ENGINE IS "<<a.getengine()<<endl;
	cout<<"WHEELS ARE "<<a.getwheels()<<endl;
	bool f;
	cout<<"Do you want to start engine. 1 ELSE 0."<<endl;
	cin>>f;
	a.Car::startengine(f);
	cout<<"Do you want to accelerate.  1 ELSE 0."<<endl;
	cin>>f;
	a.Car::accelerate(f);
	cout<<"Do you want to apply brake"<<endl;
	cin>>f;
	a.Car::brake(f);
	
	bmw b;
	cout<<"FOR BMW:"<<endl;
	cout<<"DOORS ARE "<<b.getdoors()<<endl;
	cout<<"ENGINE IS "<<b.getengine()<<endl;
	cout<<"WHEELS ARE "<<b.getwheels()<<endl;
	cout<<"Do you want to start engine. 1 ELSE 0."<<endl;
	cin>>f;
	b.Car::startengine(f);
	cout<<"Do you want to accelerate.  1 ELSE 0."<<endl;
	cin>>f;
	b.Car::accelerate(f);
	cout<<"Do you want to apply brake"<<endl;
	cin>>f;
	b.Car::brake(f);
	
	ferari c;
	cout<<"DOORS ARE "<<c.getdoors()<<endl;
	cout<<"ENGINE IS "<<c.getengine()<<endl;
	cout<<"WHEELS ARE "<<c.getwheels()<<endl;
	cout<<"Do you want to start engine. 1 ELSE 0."<<endl;
	cin>>f;
	c.Car::startengine(f);
	cout<<"Do you want to accelerate.  1 ELSE 0."<<endl;
	cin>>f;
	c.Car::accelerate(f);
	cout<<"Do you want to apply brake"<<endl;
	cin>>f;
	c.Car::brake(f);
	
	
}



