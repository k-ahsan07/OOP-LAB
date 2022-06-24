#include<iostream>
using namespace std;
class Inventory{
    private:
        int itemNumber;
        int quantity;
        double cost;
        double totalCost;
    public:
        Inventory(){
        }
        Inventory(int itno,int qu,double c,double total){
            itemNumber=itno;
            quantity=qu;
            cost=c;
            totalCost=total;
            }
            void set_itemNumber(){
                cout<<"Enter Item Number: "<<endl;
                cin>>itemNumber;
            };
            void set_quantity(){
                 cout<<"Enter Quantity: "<<endl;
                 cin>>quantity;
            };
            void set_cost(){
                cout<<"Enter cost: "<<endl;
                cin>>cost;
            };
            void set_totalcost(){
                totalCost=cost*quantity;
            };
            void get_itemNumber(){
                cout<<"The Item Number is: "<<itemNumber<<endl;
            };
            void get_quantity(){
                cout<<"The Quantity is: "<<quantity<<endl;
            };
            void get_cost(){
                cout<<"The Cost is: "<<cost<<endl;
            };
            void get_totalcost(){
                cout<<"The Total Cost is: "<<totalCost<<endl;
            };
            void allfunc(){
            	set_itemNumber();
    			set_quantity();
    			set_cost();
    			set_totalcost();
    			get_itemNumber();
    			get_quantity();
    			get_cost();
    			get_totalcost();
			};
};
int main(){
    Inventory inv;
	inv.allfunc();
}
