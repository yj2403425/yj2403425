// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
float PBall = 1600000000; 
float LSPen = 0.62; //Lump Sum Penalty
float TPen = 0.52; // Tax Penalty
float MPen = 0.50; //Marriage Penalty
float Dedu1 = PBall*LSPen;
float Dedu2 = PBall*LSPen*TPen;
float Dedu3 = PBall*LSPen*TPen*MPen;
float WIG = PBall*LSPen*TPen*MPen; // What I Get

cout << "You won Power Ball Jackpot $" << PBall<<"!! Congratulation!!! \n";
cout << "You will get $" << Dedu1 << " after deducting Lump Sum. \n";
cout << "You will get $" << Dedu2 << " after deducting Tax. \n";
cout << "You will get $" << Dedu3 << " after deducting Marriage Penalty. \n";
cout << "What you will receive is : $" << WIG << endl;


 return 0;
}