#include<iostream>
using namespace std;

class Student
{
    private : 
   string Name;
   int age ;
   
   public:
     
      void input_value()
      {
         cout << "Please Enter Your  Name\n";
   		cin >> Name;
         cout << "Please Enter Your Age  \n";
         cin >>age;
      }
     
      void output_value()
      {
         cout << "My Name Is "<<Name<<" I am "<< age<<" Years Old";
       
      }
};

main()
{
   Student object;
   
   object.input_value();
   object.output_value();   
   return 0;
}
