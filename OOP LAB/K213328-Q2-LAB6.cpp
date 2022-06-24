#include<iostream>
using namespace std;
class CatPicture{
	private:
		string CatName;
	public:	
		CatPicture(string x=" ")
		{
			CatName=x;	
		}	
	protected:	
		void setcat(string a){
			CatName=a;
		}	
		string getcat(){
			return CatName;
		}	
};
class CuteCatPicture:public CatPicture {
	private:	
		string description;
		int likescount;
	public:
		CuteCatPicture(string a):CatPicture(a)
		{
			likescount=0;
		}	
	void setdescription(string a) 
	{
		description=a;
	}
	void getdescription()
	{
		cout<<"The Cat Name: "<<getcat()<<endl;
		cout<<"Description of the cat: "<<description<<endl;
	}
	void likes()
	{
		likescount++;
	}
	int getlikes()
	{
		return likescount;	
	}		
};
class GrumpyCatPicture:public CatPicture {	
	private:	
		string description;
		int likescount;	
	public:	
		GrumpyCatPicture(string a):CatPicture(a)
		{
			likescount=0;
		}		
	void setdescription(string a) 
	{
		description=a;
	}
	void getdescription()
	{
		cout<<"The Cat Name: "<<getcat()<<endl;
		cout<<"Description of the cat: "<<description<<endl;
	}
	void likes()
	{
		likescount++;
	}	
	int getlikes()
	{
		return likescount;	
	}		
};
int main(){	
	CuteCatPicture cat1("AAAAAAAAAAAA");
	cat1.setdescription("HHHHHHHHHHHHHHH");
	cat1.getdescription();
	cat1.likes();
	cat1.likes();
	cout<<"Total Likes: "<<cat1.getlikes()<<endl;
	cout<<endl;
	GrumpyCatPicture cat2("OOOOOOOOOOOOOOOOOOOOOOOO");
	cat2.setdescription("NNNNNNNNNNN");
	cat2.likes();
	cat2.getdescription();
	cout<<"Total Likes: "<<cat2.getlikes()<<endl;
	
}

