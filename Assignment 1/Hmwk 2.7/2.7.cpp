// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
 int cLevel = 0.00;  // cLevel= current level; assume the current level is 0
 int rLevel = 1.5;  // rLevel= rising level; 15 millimiters per year

 cout << "In 5 years, the ocean's level will be " << rLevel * 5 << " mm higher " 
         << "than the current level \n";
 cout << "In 7 years, the ocean's level will be " << rLevel * 7 << " mm higher "
         << "than the current level \n";
 cout << "In 10 years, the ocean's level will be " << rLevel * 10 << " mm higher "
         << "than the current level \n\n"<< endl;

 return 0;
}