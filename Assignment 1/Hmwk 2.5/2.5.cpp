// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 int v1 = 28, v2 = 32, v3 = 37, v4 = 24, v5 = 33; // v = value
 int sum = v1 + v2 + v3 + v4 + v5;  //the sum of the values
 double average = sum/5;  //to get the average

 cout << "The sum of " << v1 << " + " << v2 << " + " << v3 
         << " + " << v4 << " + " << v5 << " = " << sum;
 cout << "The average is: " << average << endl;

 return 0;
}