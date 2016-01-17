// David Jung (Yeonkyu) 2403425

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float score1, score2, score3, score4, score5, average;

 cout << "Enter score 1: ";
 cin >> score1;
 cout << "Enter score 2: ";
 cin >> score2;
 cout << "Enter score 3: ";
 cin >> score3;
 cout << "Enter score 4: ";
 cin >> score4;
 cout << "Enter score 5: ";
 cin >> score5;

 average = (score1 + score2 + score3 + score4 + score5)/5;

 cout << setprecision(1) << fixed;
 cout << "The average score is: " << average << endl << endl;

 return 0;
}