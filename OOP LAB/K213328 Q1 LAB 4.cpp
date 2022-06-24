#include<iostream>
using namespace std;
class account{
	int bankbal;
	public:
	account(int inibalance)
	{
		if (inibalance < 0)
		{
			cout<<"Enter valid balance"<<endl;
			bankbal = 0;
		}
		else
		{
			bankbal = inibalance;
		}
	}
		void credit()
		{
			int available_bal;
			cout<<"Enter balance"<<endl;
			cin>>available_bal;
			bankbal+= available_bal;
		}
		
		void debit()
		{
			int available_bal;
			cin>>available_bal;
			if(available_bal>bankbal)
			{
				cout<<"amount exceeded the current balance"<<endl;
			}
			else
			{
				bankbal-= available_bal;
				
			}
		}
		int getbal()
		{
			return bankbal;
		}
};
int main()
{
	account bank(25000);
	bank.credit();
	bank.debit();
	cout<<bank.getbal()<<endl;
}
