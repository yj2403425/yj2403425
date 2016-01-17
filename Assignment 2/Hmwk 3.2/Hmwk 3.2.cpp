// David Jung (Yeonkyu) 2403425

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
 float classA = 15, classB = 12, classC = 9;
 int numberA, numberB, numberC;
 float total;

 cout << "How many tickets were sold for Class A? >> ";
 cin >> numberA;
 cout << "How many tickets were sold for Class B? >> ";
 cin >> numberB;
 cout << "How many tickets were sold for Class C? >> ";
 cin >> numberC;

 cout << setprecision(2) << fixed;
 cout << "Sales from Class A: $" << numberA * classA << endl;
 cout << "Sales from Class B: $" << numberB * classB << endl;
 cout << "Sales from Class C: $" << numberC * classC << endl;

 total = (numberA*classA) + (numberB*classB) + (numberC*classC);

 cout << "Total sales generated: $" << total << endl << endl;

 return 0;
}