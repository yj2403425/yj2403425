// David Jung (Yeonkyu) 2403425

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
 string month1, month2, month3;
 float rain1, rain2, rain3;
 float average;

 cout << "Enter the name of the month: ";
 cin >> month1;
 cout << "Enter the rainfall (in inches): ";
 cin >> rain1;
 cout << "Enter the name of the month: ";
 cin >> month2;
 cout << "Enter the rainfall (in inches): ";
 cin >> rain2;
 cout << "Enter the name of the month: ";
 cin >> month3;
 cout << "Enter the rainfall (in inches): ";
 cin >> rain3;

 average = (rain1 + rain2 + rain3) / 3;

 cout << setprecision(2) << fixed << "The average rainfall for " 
         << month1 << ", " << month2 << ", and " 
         << month3 << " is: " << average << endl;

 return 0;
}