// David Jung (Yeonkyu) 2403425

#include<iostream>
using namespace std;

int main()
{
 float Cookies, totalCalories;

 cout << "Enter the number of cookies you ate: ";
 cin >> Cookies;

 totalCalories = Cookies * 75;

 cout << "You consumed: " << totalCalories << " calories!" << endl;

 return 0;
}