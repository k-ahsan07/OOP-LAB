#include<iostream>
using namespace std;
class invoice
{
	public:
	string number;
	string description;
	int quantity;
	int price;
	
	invoice( string a,string b, int x, int y){
		number=" ";
		description= " ";
		quantity= 0;
		price = 0;
		
	}
	void setnumber(string a)
	{
		number = a;
	}
	string getnumber()
	{
		return number;
	}
	void setdescription(string b)
	{
		description = b;
	}
	string getdescription()
	{
		return description;
	}
	void setprice(int x)
	{
		price = x; 
	}
	int  getprice(){
		return price;
	}
	void setquantity(int y)
	{
		quantity = y;
	}
	int getquantity()
	{
		return quantity;
	}
	int getinvoiceamount()
	{
		int value = quantity*price;
		if(value= 0)
		{
			return 0;
		}
		else
		{
		
		return value;
	}
	}
};
	int main()
	{
		invoice ob("123","hello",12,3);
		ob.setnumber("kwe-456");
		ob.setdescription("very good part for car engine");
		ob.setquantity(6);
		ob.setprice(3000);
		cout<<"invoice: \n";
		cout<<ob.getnumber()<<endl;
		cout<<ob.getdescription()<<endl;
		cout<<ob.getquantity()<<endl;
		cout<<ob.getprice()<<endl;
		
		cout<<endl;
		
		cout<<"invoice amount is:"<<ob.getinvoiceamount();
	}
	
	
	

