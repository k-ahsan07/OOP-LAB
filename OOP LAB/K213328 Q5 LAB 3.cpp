#include<iostream>
using namespace std;
class Books{
	public:
	string ISBN;
	string author;
	string book;
	string publisher;
	string getbookinfo(){
		return (ISBN+" "+author+" "+book+" "+publisher);
	}
	void set(string a,string b, string c, string d){
		ISBN=a;
		author=b;
		book=c;
		publisher=d;
	}
};

int main(){
	string a,b,c,d;
	Books obj[5];
	int i;
	for(i=0;i<5;i++){
		cout<<"enter name: ";
		cin>>obj[i].book;
		cout<<"enter ISBN: ";
		cin>>obj[i].ISBN;
		cout<<"enter Author: ";
		cin>>obj[i].author;
		cout<<"enter Publisher: ";
		cin>>obj[i].publisher;
		obj[i].set(obj[i].ISBN,obj[i].author,obj[i].book,obj[i].publisher);
		
		
	}
	cout<<"Book DATA: \n\n";
	
	for(i=0;i<5;i++){
		cout<<obj[i].getbookinfo();
		cout<<endl;
	}
}
