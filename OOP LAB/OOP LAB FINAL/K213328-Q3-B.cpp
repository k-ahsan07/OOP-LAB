#include<iostream>
using namespace std;
template <class T>
class zooanimal {
   private:
    T weighttype;
   public:
    zooanimal(T w) : weighttype(w) {}

    T get_weighttype() {
        return weighttype;
    }
};
int main() {
	int a,b;
	cout<<"ENTER FIRST WEIGHTYPE : ";
	cin>>b;
	zooanimal<int>obj(b);
	obj.get_weighttype();
	cout<<"\nTHE WEIGHT TYPE IS : "<<obj.get_weighttype();
	try{
		if(obj.get_weighttype()<=0){
			throw obj.get_weighttype();
		}
	}
	catch(int a){
		cout<<"\n\nEXCEPTION CAUGHT"<<endl;
		cout<<"\nENTER VALUE AGAIN AS IT WAS BELOW 0 : ";
		cin>>a;
		cout<<"\nTHE NEW VALUE OF WEIGHTTYPE IS : "<<a<<endl;
		
	}
}

