/* Faruqui, Nishat
Week4   Homework: Expressions    Program #2
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout.setf(ios::fixed);
cout.precision(2);

float first;
float second;
float third;

cout << "Shopping Cart" << endl;
cout << "--------------------" << endl;
cout << left << setw(25) << "Cost of first item:" << right << "$";
cin >> first; //input stored into variable first

cout << left << setw(25) << "Cost of second item:"<< right << "$";
cin >> second; //input stored into variable second

cout << left << setw(25) << "Cost of third item:"<< right << "$";
cin >> third; //input stored into variable third
cout << endl;

float subtotal = first + second + third; //adding all three inputs
cout << left << setw(25) << "Subtotal:" << right << "$" << subtotal << endl;

const float TAX = 0.08875 * subtotal; //calculating tax
cout << left << setw(25) << "Tax:" << right << "$" <<  TAX << endl;

float total = TAX + subtotal; //calculating total 
cout << left << setw(25) << "Total:" << right << "$" << total << endl;

return 0;
}
