// David Jung (Yeonkyu) 2403425

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float widgetWeight = 9.2; // 9.2 pounds each
 float palletEmpty, palletWeight;
 float widgetNumber;

 cout << "How much does the empty pallet weigh (pounds): ";
 cin >> palletEmpty;
 cout << "How much does the pallet weigh (with widgets): ";
 cin >> palletWeight;

 widgetNumber = (palletWeight - palletEmpty) / 9.2;

 cout << "There are: " << widgetNumber << " widgets on the pallet."<< endl;

 return 0;
}