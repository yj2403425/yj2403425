// David Jung (Yeonkyu) 2403425

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float loanPayment, insurance, gas, oil, tires, maintenance;
 float monthlyTotal, annualTotal;

 cout << "Enter your monthly loan payment: ";
 cin >> loanPayment;
 cout << "Enter your monthly insurance: ";
 cin >> insurance;
 cout << "Enter your monthly gas expense: ";
 cin >> gas;
 cout << "Enter your monthly oil expenses: ";
 cin >> oil;
 cout << "Enter your monthly tires expenses: ";
 cin >> tires;
 cout << "Enter your monthly maintenance expenses: ";
 cin >> maintenance;

 monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
 annualTotal = monthlyTotal * 12;

 cout << setprecision(2) << fixed;
 cout << "Your total monthly expenses are: $" << monthlyTotal << "\n";
 cout << "Your total  annual expenses are: $" << annualTotal << endl;

 return 0;
}