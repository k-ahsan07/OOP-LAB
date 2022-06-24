#include<iostream>
using namespace std;

class food{
	public:
		int weight;
		int price;
		int static count;
};

class Vegetables : public food{
	public:
		static int count1;
};

class Fruits : public food{
	public:
		static int count2;
};

class Potatoes : public Vegetables{
	public:
		Potatoes()
		{
			cout << "Enter price of potatoes: ";
			cin >> price;
			cout << "Enter weight of potatoes: ";
			cin >> weight;
			count++;
			count1++;
		}
};

class Onions : public Vegetables{
	public:
		Onions()
		{
			cout << "Enter price of onions: ";
			cin >> price;
			cout << "Enter weight of onions: ";
			cin >> weight;
			count++;
			count1++;
		}
};

class Apples : public Fruits{
	public:
		Apples()
		{
			cout << "Enter price of apples: ";
			cin >> price;
			cout << "Enter weight of apples: ";
			cin >> weight;
			count++;
			count2++;
		}
};

class Oranges : public Fruits{
	public:
		Oranges()
		{
			cout << "Enter price of oranges: ";
			cin >> price;
			cout << "Enter weight of oranges: ";
			cin >> weight;
			count++;
			count2++;
		}
};

int food::count=0;
int Vegetables::count1=0;
int Fruits::count2=0;

int main()
{
	Potatoes obj;
	Onions obj1;
	Apples obj2;
	Apples obj3;
	Oranges obj4;
	Oranges obj5;
	
	int tot=0,inv;
	
	tot+=(obj.weight*obj.price)+(obj1.weight*obj1.price)+(obj2.weight*obj2.price)+(obj3.weight*obj3.price)+(obj4.weight*obj4.price)+(obj5.weight*obj5.price);
	
	cout << "\nTotal sale is: " << tot;
	cout << "\nEnter your investments: ";
	cin >> inv;
	cout << "\nTotal profit is: " << tot-inv;
}
