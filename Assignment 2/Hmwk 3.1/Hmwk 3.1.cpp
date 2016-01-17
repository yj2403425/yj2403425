// David Jung (Yeonkyu) 2403425

#include<iostream>
using namespace std;

int main()
{
 float capacity, miles, average;

 cout << "Enter the number of size of the tank (gallons): ";
 cin >> capacity;
 cout << "Enter the number of miles per tank of gas: ";
 cin >> miles;
 
 average = miles/capacity;

 cout << "The car's MPG is: " << average << endl << endl;

 return 0;
}