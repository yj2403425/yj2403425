// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 float meal = 44.50;
 float tax = 0.0675 * meal; //6.75% tax on the meal
 float tip = (tax + meal) * 0.15;  //tip is 15% after adding the tax
 float total = meal + tax + tip;  //total bill

 cout << "The meal charge is: $" << meal;
 cout << "The tax amount is: $" << tax;
 cout << "The tip amount is: $" << tip;
 cout << "The total bill is: $" << total<< endl;

 return 0;
}