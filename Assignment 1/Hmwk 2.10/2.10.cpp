// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 int gallons = 12, miles = 350;
 int MPG = miles/gallons;

 cout << "A car that holds " << gallons << " gallons of gasoline and \n"
         << "travels " << miles << " before refueling \n"
         << "gets " << MPG << " MPG \n\n" << endl;

 return 0;
}