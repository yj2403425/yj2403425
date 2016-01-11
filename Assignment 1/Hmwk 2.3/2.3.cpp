// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 int purchase = 52;
 int statetax = 0.04 * purchase;
 int countytax = 0.02 * purchase;
 int totaltax = statetax + countytax;

 cout << "The total sales tax on a $" << purchase << " purchase is: $" 
         << totaltax << endl;

 return 0;
}