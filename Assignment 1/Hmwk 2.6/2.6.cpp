// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 float Amount = 1700.00; // Amount = pay amount 
 float Periods = 26; // Periods = pay periods in a year 
 float Pay = Amount * Periods; // Pay = the employee's annual pay 

 cout << "The employee earns $" << Amount << " each pay period. \n";
 cout << "There are " << Periods << " pay periods in a year. \n";
 cout << "The annual pay is: $" << Pay << endl;

 return 0;
}