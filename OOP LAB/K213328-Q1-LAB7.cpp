#include<iostream>
using namespace std;
class animal{
	public:
	animal(){
	}
	virtual void animalsound(){
	cout<<"THE ANIMAL MAKES A SOUND"<<endl;
}
};
class cat : public animal{
	public:
	cat(){
	}
	virtual void animalsound(){
	cout<<"THE CAT MAKES SOUND MEOW"<<endl;
	}
};
class dog : public animal{
	public:
	dog(){
	}
	virtual void animalsound(){
	cout<<"THE DOG SAYS BOW WOW"<<endl;
	}
};
class duck : public animal{
	public:
	duck(){
	}
	virtual void animalsound(){
	cout<<"THE DOG SAYS QUACK QUACK"<<endl;
	}
};

int main(){
	cat a;
	dog o;
	duck u;
	animal *ob=&a;
	ob->animalsound();
	animal *ob1=&o;
	ob1->animalsound();
	animal *ob2=&u;
	ob2->animalsound();
}
