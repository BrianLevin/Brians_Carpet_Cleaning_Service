// Brian's Carpet Cleaning Service.


/* 
    Brian's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
 
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream> // preprocessor stream that includes java libraries to run the program
using namespace std; // name space  that is built in to use std:: without using that syntax for every statement

int main (){ // The function called to  run the program

cout << " Hello, Welcome to Brian's Carpet Cleaning Servive" << endl; // outstatement

int small_room; // variable to hold small rooms

cout << "How many small rooms would you liked cleaned?" << endl;//  output statement 

cin >> small_rooms // input statement that will generate the small rooms value,

int large_rooms; // variable to hold large rooms

cout << " How many large rooms would you like cleaned?" //  output statement
cin >> large_rooms; // input statement 

const double price_per_small_room = 25; // declared constants for rooms

const double price_per_large_room = 35;

const double sales_tax = 0.06; // sales tax

const int estimate_expiry = 30;  // expires in 30 days.

cout << "\nEstimate for carpet cleaning service " << endl; // estimates for  how much the service is going to be
cout << "Number of small rooms " << small_rooms << endl;
cout << "Number of large rooms " << large_rooms << endl;

cout << "Price per small room: $" << price_per_small_room << endl; 

cout << "Price per large room: $" << price_per_large_room << endl; 


    return 0; // program is working
}