#include <iostream>
#include <string>

using namespace std;

class Heartrates{
    private:
    string firstname;
    string lastname;
    int birth_day;
    int birth_month;
    int birth_year;
    int current_day;
    int current_month;
    int current_year;
    int age;
    double Maxheartrate;
    double targetRate;



    public:
   void Getdata()
   {
        cout<<"Please Enter your firstname\n";
        cin>>firstname;
        cout<<"\n\n";
        cout<<"Please Enter your lastname\n";
        cin>>lastname;
        cout<<"\n\n";
        cout<<"Please Enter your date of birth\n";
        cout<<"year:";
        cin >> birth_year;
        cout<<"month:";
        cin>> birth_month;
        cout<<"day:";
        cin >> birth_day;

    cout<<"Data for:"<<firstname<< "  "<<lastname<<endl;
        cout<< "Your date of birth in the format dd/mm/yyyy is:"<<birth_day<<"/"<<birth_month<<"/"<<birth_year<<endl;
        cout<<"\n\n";
    }
   void getAge ()
    {
        cout<<"Enter the current date dd/mm/yyyy \n";
        cout<<"Day: ";
        cin>>current_day;
        cout<<"month:";
        cin>>current_month;
        cout<<"year:";
        cin>> current_year;

         if (current_month >= birth_month and current_day >= birth_day)
    {
        age= current_year- birth_year;
    }
        else
    {
        age= (current_year- birth_year)-1;
    }
        cout<<"Your are currently "<< age<<"  "<<"years old"<<endl;
    }
   void getMaximumHeartRate()
   {
       Maxheartrate= 220-age;
       cout<<"Your Maximum heartrate is:"<<Maxheartrate<<endl;
   }
   void getTargetHeartRate()
   {
        targetRate=  Maxheartrate*0.65;
        cout<< "Your target heartrate is"<<targetRate<<endl;
    }
};
int main()
{
    Heartrates Juanito;
    cout<<"Welcome to Heart Rate Systems\n\n\n";
    Juanito.Getdata();
    Juanito.getAge();
    Juanito.getMaximumHeartRate();
    Juanito.getTargetHeartRate();

    return 0;
}

