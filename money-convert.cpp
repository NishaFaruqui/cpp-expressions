/* Faruqui, Nishat
Week4   Homework: Expressions    Program #3
*/
#include <iostream>
using namespace std;

int main()
{
int amount; //declaring constant integer variables for the values of each kind of coin
const int QVALUE = 25;
const int DVALUE = 10;
const int NVALUE = 5;
const int PVALUE = 1;

cout << "Change Calculator" << endl;
cout << "-----------------" << endl;
cout << "Enter dollar amount as an integer: $";
cin >> amount;
cout << endl;

cout << "The equivalent in coins:" << endl;

int numquarters = amount/QVALUE; //diving dollar amount by value of quarter to find out how many quarters there are
cout << numquarters << " Quarters" << endl;

amount = amount % QVALUE; //finding out the remaining dollar amount after quarters are taken into account
int numdimes = amount/DVALUE; //dividing the remaining amount by the value of dime to find out how many dimes there are
cout << numdimes << " Dimes" << endl;

amount = amount % DVALUE; //finding out the remaining dollar amount after dimes are taken into account
int numnickels = amount/NVALUE;  //dividing the remaining amount by value of nickel to find out how many nickels there are
cout << numnickels << " Nickels" << endl;

amount = amount % NVALUE; //finding out the remaining dollar amount after nickels are taken into account
int numpennies = amount/PVALUE; //diving the remaining amount by the value of penny to find out how many pennies there are
cout << numpennies << " Pennies" << endl;

return 0;
}
