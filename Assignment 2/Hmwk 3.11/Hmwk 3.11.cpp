// David Jung (Yeonkyu) 2403425

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float YPD = 83.14; //YPD = Yen per dollar
 float EPD = 0.7337; //EPD = Euro per dollar

 float dollars, yen, euros;

 cout << setprecision(2) << fixed;

 cout << "Enter dollar amount: ";
 cin >> dollars;

 yen = dollars * YPD;
 euros = dollars * EPD;
 
 cout << "$" << dollars << " = " << yen << " Yen \n";
 cout << "$" << dollars << " = " << euros << " Euros \n\n" << endl;

 return 0;
}