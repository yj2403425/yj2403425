// David Jung (Yeonkyu) 2403425

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int score = 0;
    
    cout << "Enter your score" << endl;
    cin >> score;
    
    string grade 
            =(score >= 90) ? "A"   //90+ = A
            :(score >= 80) ? "B"   //80+ = B
            :(score >= 70) ? "C"   //70+ = C
            :(score >= 60) ? "D"   //60+ = D
            : "F";                 //59- = F
    
    cout << "Your grade is: " << grade << endl;
    
    return 0;
}