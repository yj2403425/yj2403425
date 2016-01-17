// David Jung (Yeonkyu) 2403425

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int score = 0;
    string grade;

    cout << "Enter your score" << endl;
    cin >> score;
    
    if (score >= 90)
    {
        grade = "A";
    }
    else
        
    if (score >= 80)
    {
        grade = "B";
    }
    else 
        
    if (score >= 70)
    {
        grade = "C";
    }
    else
        
    if (score >= 60)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
  
    cout << "Your grade is: " << grade << endl;

    return 0;
}