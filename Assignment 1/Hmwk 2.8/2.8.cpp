// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 float item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
 float subtotal = item1 + item2 + item3 + item4 + item5;
 float tax = 0.06 * subtotal;
 float total = tax + subtotal; 

 cout << "Price of item 1 = $" << item1;
 cout << "Price of item 2 = $" << item2;
 cout << "Price of item 3 = $" << item3;
 cout << "Price of item 4 = $" << item4; 
 cout << "Price of item 5 = $" << item5;
 cout << "Subtotal = $" << subtotal;
 cout << "Tax = $" << tax;
 cout << "Total = $" << total << endl;

 return 0;
}