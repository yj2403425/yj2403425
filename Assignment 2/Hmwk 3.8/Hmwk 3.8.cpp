// David Jung (Yeonkyu) 2403425

#include<iostream>
using namespace std;

int main()
{
 float replacementCost;

 cout << "Enter the replacement cost of your building: $";
 cin >> replacementCost;

 cout << "The Minimum insurance you should buy is: $" << replacementCost * 0.80 << endl;

 return 0;
}