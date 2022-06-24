#include<iostream>
using namespace std;
class ttt{
	int fill[3][3];
	public:
		ttt(){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					fill[i][j]=0;
				}
			}
		}		
		int getfill(int i,int j){
			return fill[i][j];
		}	
		void setfill(int i){
			int j=0;
			if(i>2&&i<6){
				j=1;
				i-=3;
			}
			else if(i>5){
				j=2;
				i-=6;
			}
			fill[j][i]=1;
		}	
		void setf(int i){
			int j=0;
			if(i>2&&i<6){
				j=1;
				i-=3;
			}
			else if(i>5){
				j=2;
				i-=6;
			}
			fill[j][i]=2;
		}		
		int win1(){
			if(fill[0][0]==1 && fill[0][1]==1 && fill[0][2]==1)
				return 1;
			else if(fill[1][0]==1 && fill[1][1]==1 && fill[1][2]==1)
				return 1;
			else if(fill[2][0]==1 && fill[2][1]==1 && fill[2][2]==1)
				return 1;
			else if(fill[0][0]==1 && fill[1][1]==1 && fill[2][2]==1)
				return 1;
			else if(fill[2][0]==1 && fill[1][1]==1 && fill[0][2]==1)
				return 1;
			else if(fill[0][0]==1 && fill[1][0]==1 && fill[2][0]==1)
				return 1;
			else if(fill[0][1]==1 && fill[1][1]==1 && fill[2][1]==1)
				return 1;
			else if(fill[0][2]==1 && fill[1][2]==1 && fill[2][2]==1)
				return 1;
			else
				return 0;			
		}
		int win2(){
			if(fill[0][0]==2 && fill[0][1]==2 && fill[0][2]==2)
				return 1;
			else if(fill[1][0]==2 && fill[1][1]==2 && fill[1][2]==2)
				return 1;
			else if(fill[2][0]==2 && fill[2][1]==2 && fill[2][2]==2)
				return 1;
			else if(fill[0][0]==2 && fill[1][1]==2 && fill[2][2]==2)
				return 1;
			else if(fill[2][0]==2 && fill[1][1]==2 && fill[0][2]==2)
				return 1;
			else if(fill[0][0]==2 && fill[1][0]==2 && fill[2][0]==2)
				return 1;
			else if(fill[0][1]==2 && fill[1][1]==2 && fill[2][1]==2)
				return 1;
			else if(fill[0][2]==2 && fill[1][2]==2 && fill[2][2]==2)
				return 1;
			else
				return 0;			
		}
};
void draw(char a,char b,ttt l){
	
	cout<<"Status of game is:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(l.getfill(i,j)==1)
				cout<<a<<"\t";
			else if(l.getfill(i,j)==2)
				cout<<b<<"\t";
			else if(l.getfill(i,j)==0)
				cout<<"*"<<"\t";
		}
		cout<<endl;
	}
}
int check(ttt l){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(l.getfill(i,j)==0)
				return 1;				
		}
	}
	return 0;
} 
int dick(ttt l,int i){
	int j=0;
			if(i>2&&i<6){
				j=1;
				i-=3;
			}
			else if(i>5){
				j=2;
				i-=6;
			}
			if(l.getfill(j,i)==0){
				return 0;}
			else if(l.getfill(j,i)==1||l.getfill(j,i)==2)
				return 1;			
}
int main(){
	char a,b;
	cout<<"Player 1: Enter first letter of your name\n";
	cin>>a;
	cout<<"Player 2: Enter first letter of your name\n";
	cin>>b;
	cout<<"Enter this keyword to give input for that particular place."<<endl;
	cout<<"1\t2\t3\n4\t5\t6\n7\t8\t9\n\n\n";
	cout<<"Please dont overwrite on other's keywords because then, as a punishment your turn will be skipped."<<endl;
	cout<<"Player's name's first letter is used to show his mark on board.* symbol shows that the space is unoccupied"<<endl;
	ttt l;
	int n,p,q;
	do{
		draw(a,b,l);
		cout<<"Player 1 turn:"<<endl;
		cin>>n;	
		if(dick(l,n-1)==0)
			l.setfill(n-1);
		else if(dick(l,n-1)==1)
			cout<<"Sorry. Because of wrong keyword your turn is skipped"<<endl;		
		p=l.win1();	
		draw(a,b,l);
		cout<<"Player 2 turn:"<<endl;
		cin>>n;
		if(dick(l,n-1)==0)
			l.setf(n-1);
		else if(dick(l,n-1)==1)
			cout<<"Sorry. Because of wrong keyword your turn is skipped"<<endl;	
		q=l.win2();				
	}while(check(l)==1 && (q==0 && p==0));
	if(check(l)!=1)
		cout<<"Draw"<<endl;
	else if(p==1)
		cout<<"Player 1 won"<<endl;
	else if(q==1)
		cout<<"Player 2 won"<<endl;
		
}


