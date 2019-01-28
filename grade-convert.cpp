/* Faruqui, Nishat
Week4   Homework: Expressions    Program #1
*/
#include <iostream>
using namespace std;

int main()
{
cout.setf(ios::fixed); //forcing the decimal point to always be displayed
cout.precision(1); // one digit will be displayed after the decimal point
float gradeN;

cout << "Grade Converter:" << endl;

cout << "----------------" << endl;
cout << "Input grade (60-100): ";
cin >> gradeN;

float gradeA = ((gradeN - 60.0)/40.0) * 4.0;
cout << "\nConverted Grade (0.0 to 4.0): " << gradeA << endl;

return 0;
}
