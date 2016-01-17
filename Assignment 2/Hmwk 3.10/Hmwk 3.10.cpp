// David Jung (Yeonkyu) 2403425

#include<iostream>
using namespace std;

int main()
{
 float Celsius, conversion;

 cout << "Enter Celsius temperature: ";
 cin >> Celsius;

 conversion = (1.8 * Celsius) + 32;

 cout << Celsius << " Celsius = " << conversion << " Fahrenheit \n\n" << endl;

 return 0;
}