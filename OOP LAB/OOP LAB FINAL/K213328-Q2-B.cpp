#include<iostream>
using namespace std;
class ListedCompany;
class stock{
	public:
	int share;
		stock(int share){
			this->share=share;
		}
		virtual void buyshare(ListedCompany company, int u)=0;
		virtual void sellshare(ListedCompany company, int u)=0;
		virtual void display()=0;
};
class ListedCompany : public stock{
		public:
	float unit;
		virtual void display(){
			cout<<"SHARES IS  "<<share<<" AND UNITPRICE IS "<<unit<<endl;
		}
		void transfer(ListedCompany company)
		{
			share+=200;
			company.share=200;
		}
		void buyshare(ListedCompany company, int u)
		{
			company.share-=u;
			share+=u;
		}
		void sellshare(ListedCompany company, int u)
		{
			company.share+=u;
			share-=u;
		}
		ListedCompany(int share, float unit) : stock(share)
		{
			this->unit=unit;
		}	
};
class Trader : public ListedCompany{
	public:
	string name;
	int id;
		void display()
		{
			cout<<"TRADER IS :\n"<<endl<<id<<"\t"<<name<<endl;
			cout<<"SHARES ARE :\n"<<share<<endl;	
		}
		Trader(int share, float unit, string name, int id) : ListedCompany(share,unit)
		{
			this->name=name;
			this->id=id;
		}
};
int main(){
	ListedCompany PSO(134,12.5);
	cout<<"PSO"<<endl;
	PSO.display();
	ListedCompany KE(245,15);
	cout<<"KE"<<endl;
	KE.display();
	ListedCompany HBL(123,17.5);
	cout<<"HBL"<<endl;
	HBL.display();
	Trader ali(30,0,"ALI",123);
	ali.display();
	Trader arsalan(30,0,"ARSALAN",456);
	arsalan.display();	
	Trader danish(30,0,"DANISH",789);
	danish.display();
	cout<<"\n\nWILL START SHARE TRANSFER"<<endl<<endl<<endl;
	ali.buyshare(PSO,30);
	arsalan.sellshare(HBL,10);
	danish.buyshare(KE,200);
	PSO.transfer(KE);
	stock *p1=(stock*)&ali;
	p1->display();
	stock *p2=(stock*)&arsalan;
	p2->display();
	stock *p3=(stock*)&danish;
	p3->display();
	

}
