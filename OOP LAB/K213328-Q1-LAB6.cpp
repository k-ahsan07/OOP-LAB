#include<iostream>
#include<string>
using namespace std;
class book{
public:
string genre;
public:
book(string a){
genre=a;
}

void set_genre(string a){
genre=a;
}
string get_genre(){
return genre;
}
};
class book1:public book{
public:
string title;
string author;
book1(string a,string b, string genre): book(genre){
title=a;
author=b;
}
void set_title(string b){
title=b;
}
void set_author(string c){
author=c;
}
string get_title(){
return title;
}
string get_author(){
return author;
}
};
class book2:public book{
public:
string title;
string author;
book2(string a,string b, string genre): book(genre){
title=a;
author=b;
}
void set_title(string b){
title=b;
}
void set_author(string c){
author=c;
}
string get_title(){
return title;
}
string get_author(){
return author;
}
};
int main(){
string l,m,n,o,p,q,r;
book1 a("L","k","d");
book2 b("P","M","d");
cout<<"enter genre of book 1 "<<"\n";
cin>>l;
a.set_genre(l);
cout<<"enter genre of book 2 "<<"\n";
cin>>m;
b.set_genre(m);
cout<<"enter title of book 1 "<<"\n";
cin>>n;
a.set_title(n);
cout<<"enter title of book 2 "<<"\n";
cin>>o;
b.set_title(o);
cout<<"enter author of book 1 "<<"\n";
cin>>p;
a.set_author(p);
cout<<"enter author of book 2 "<<"\n";
cin>>q;
b.set_author(q);
cout<<"genre of book 1 is "<<a.get_genre()<<"\n";
cout<<"title of book 1 is "<<a.get_title()<<"\n";
cout<<"author of book 1 is "<<a.get_author()<<"\n";

cout<<"genre of book 2 is "<<b.get_genre()<<"\n";
cout<<"title of book 2 is "<<b.get_title()<<"\n";
cout<<"author of book 2 is "<<b.get_author()<<"\n";
}
