#include<iostream>
using namespace std;
class vehicles{
	public:
		int price;
	void set_price(int a){
		price=a;
	}
	int get_price(){
		return price;
	}
};
class car : public vehicles{
	int seatcapacity;
	int noofdoor;
	string fueltype;
	public:
	car(){
		}
	void set_seatcapacity(int s){
		seatcapacity=s;
	}	
	void set_noofdoor(int d){
		noofdoor=d;
	}
	void set_fueltype(string f){
		fueltype=f;
	}
	int get_seatcapacity(){
		return seatcapacity;
	}
	int get_noofdoor(){
		return noofdoor;
	}
	string get_fueltype(){
		return fueltype;
	}
};
class Audi : public car{
	string modeltype;
	public:
	Audi(){
	}
	void set_modeltype(string mt){
		modeltype=mt;
	}
	string get_modeltype(){
		return modeltype;
	}
};
class motorcycle : public vehicles{
	int noofcylinder;
	int noofgear;
	int noofwheel;
	public:
	motorcycle(){
		}
	void set_noofcylinder(int cy){
		noofcylinder=cy;
	}	
	void set_noofgear(int ge){
		noofgear=ge;
	}
	void set_noofwheel(int wh){
		noofwheel=wh;
	}
	int get_noofcylinder(){
		return noofcylinder;
	}
	int get_noofgear(){
		return noofgear;
	}
	int get_noofwheel(){
		return noofwheel;
	}
};
class Yamaha : public motorcycle{
	string mtype;
	public:
		Yamaha(){
		}
		void set_mtype(string mt){
			mtype=mt;
		}
		string get_mtype(){
			return mtype;
		}
};
int main(){
	Audi A;
	cout<<"THE DETAIL OF AUDI"<<endl;
	A.set_price(2000000);
	A.set_seatcapacity(2);
	A.set_noofdoor(4);
	A.set_fueltype("Diesel");
	A.set_modeltype("Sedan");
	cout<<"PRICE : "<<A.get_price()<<endl;
	cout<<"SEATING CAPACITY : "<<A.get_seatcapacity()<<endl;
	cout<<"NUMBER OF DOORS : "<<A.get_noofdoor()<<endl;
	cout<<"FUEL TYPE : "<<A.get_fueltype()<<endl;
	cout<<"MODEL TYPE : "<<A.get_modeltype()<<endl;
	Yamaha Y;
	cout<<"THE DETAIL OF YAMAHA"<<endl;
	Y.set_price(20000);
	Y.set_noofgear(5);
	Y.set_noofwheel(2);
	Y.set_noofcylinder(2);
	Y.set_mtype("Touring");
	cout<<"PRICE : "<<Y.get_price()<<endl;
	cout<<"NUMBER OF GEAR : "<<Y.get_noofgear()<<endl;
	cout<<"NUMBER OF WHEEL :"<<Y.get_noofwheel()<<endl;
	cout<<"NUMER OF CYLINDER : "<<Y.get_noofcylinder()<<endl;
	cout<<"MAKE TYPE : "<<Y.get_mtype()<<endl;
}
