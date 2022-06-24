#include<iostream>
using namespace std;

class healthprofile{
	public:
		string fname;
		string lname;
		string gender;
		int weight;
		int height;
		int day;
		int month;
		int year;
		int heartrate;
		int target;
		int BMI;
	
	healthprofile(){
	}
	
	healthprofile(string f,string l,string g,int w,int h,int d,int m,int y,int bmi){
		fname=f;
		lname=l;
		gender=g;
		weight=w;
		height=h;
		day=d;
		month=m;
		year=y;
		BMI=bmi;
	}
	
	void setfname(){
		cout<<"enter your first name : ";
		cin>>fname;
	}
	
	void setlname(){
		cout<<"enter your last name : ";
		cin>>lname;
	}
	void setgender(){
		cout<<"enter your gender : ";
		cin>>gender;
	}
	void setweight(){
		cout<<"enter your weight in pounds : ";
		cin>>weight;
	}
	void setheight(){
		cout<<"enter your height in inches : ";
		cin>>height;
	}
	void setday(){
        cout<<"enter your DAY : ";
        cin>>day;
    }
    void setmonth(){
        cout<<"enter your month : ";
        cin>>month;
        if(month>12 || month<0){
	        month=1;
        }
        else{month=month;
        }
    }
    void setyear(){
        cout<<"enter the year : ";
        cin>>year;
    }
    void setmaxheartrate(){
	    heartrate=220-(2022-year);	
	}
	void settargetrate(){
		target=heartrate*0.85;
	}
	void setBMI(){
		BMI=(weight*703)/(height*height);
    }

    int getfname(){
		cout<<"\n\nYour first name is : "<<fname;
	}
	
	int getlname(){
		cout<<"\nYour last name is : "<<lname;
	}
    int getgender(){
		cout<<"\nGender : "<<gender;
	}
	int getweight(){
		cout<<"\nweight : "<<weight;
	}
	int getheight(){
		cout<<"\nHeight : "<<height;
	}
    int displaydate(){
        cout<<"\nyour date of birth is : "<<day<<"/"<<month<<"/"<<year;
    }
    int getage(){
    	year=2022-year;
    	cout<<"\nYou are "<<year<<" years old";
	}
	int getmaxheartrate(){
		cout<<"\nMaximum heart rate is : "<<heartrate;
	}
	int gettargetrate(){
		cout<<"\nTarget heart rate is : "<<target;
	}
	int getBMI(){
		cout<<"\nYour BMI is : "<<BMI;
		if(BMI<18.5){
			cout<<"\nYou are underweight";
		}
		if(BMI>=18.5 && BMI<25){
			cout<<"\nYou have normal weight";
		}
		if(BMI>=25 && BMI<30){
			cout<<"\nyou are overweight";
		}
		if(BMI>=30){
			cout<<"\nYou are obese";
		}
	}
};

int main(){
    healthprofile H;
	H.setfname();
	H.setlname();
	H.setgender();
	H.setweight();
	H.setheight();
	H.setday();
	H.setmonth();
	H.setyear();
	H.setmaxheartrate();
	H.settargetrate();
	H.setBMI();
	
	H.getfname();
	H.getlname();
	H.getgender();
	H.getweight();
	H.getheight();
	H.displaydate();
	H.getage();
	H.getmaxheartrate();
	H.gettargetrate();
	H.getBMI();
}
