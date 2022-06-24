#include <iostream>
#include <iomanip>

using namespace std;

void initialise(int& x, int& y, char& z);
void getHoursRate(double& rate, double& hours);
double payCheck(double rate, double hours);
void printCheck(double rate, double hours, double amount);
void funcOne(int& x, int y);
void nextChar(char& z);

int main()
{
    int x, y;
    char z;
    double rate, hours;
    double amount;
    
    initialise(x, y, z);
    getHoursRate(rate, hours);
    amount = payCheck(rate, hours);
    printCheck(rate, hours, amount);
    cout << "The value of x is currently: " << x << endl;
    funcOne(x, y);
    cout << "The value of x is : " << x << endl;
    nextChar(z);
    cout << "The value of z is : " << z << endl;
    
    return 0;
}

void initialise(int& x, int& y, char& z) {
    x = 0;
    y = 0;
    z = ' ';
}

void getHoursRate(double& rate, double& hours) {
    cout << "Please enter the hourly rate: ";
    cin >> rate;
    cout << "Please enter the hours worked: ";
    cin >> hours;
}

double payCheck(double rate, double hours) {
    double amount = 0;
    
    if (hours > 40) {
        amount += ((hours - 40) * rate) * 1.5;
        amount += 40 * rate;
        return amount;
    } else {
        amount = hours * rate;
        return amount;
    }
}

void printCheck(double rate, double hours, double amount) {
    cout << "For working " << hours << " hours at $" << rate << "/hr you get a total of $";
    cout << fixed << showpoint << setprecision(2);
    cout << amount << endl;
}

void funcOne(int& x, int y) {
    int tempNum;
    cout << "Please enter a number: ";
    cin >> tempNum;
    
    x = (x * 2) + y - tempNum;
}

void nextChar(char& z) {
    z++;
}
