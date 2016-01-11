// David Jung (Yeonkyu) 2403425
#include<iostream>
using namespace std;

int main()
{
    float totalSales = 4600000; // 4.6 million in total sales 
    float salesPercent = 0.62; // 62 percent of the total sales
    float result;
    
    result = totalSales*salesPercent;
    
    cout << "When the company generates $" << totalSales << endl;
    cout << "in sales this year, the East Coast" << endl;
    cout << "division will generate $"<< result <<endl;
    return 0;
}