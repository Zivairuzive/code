// program file: chbook.cpp
// This program updates a checkbook 

#include <iostream>
#include <iomanip>
// need to add comment here 
using namespace std;

int main(){
    double starting_balance, ending_balance, trans_amount ;
    char trans_type; 
    char deposit = 'D';
    char withdraw = 'W';

    // Module for collecting the data from the user 
    cout << "Enter the starting balance and press <Enter>: ";
    cin >> starting_balance;
    cout << "Enter transcation type (D) for deposit and (W) for withdraw";
    cout << " and press <Enter>: ";
    cin >> trans_type;
    cout << "Enter the amount and press <Enter>: ";
    cin >> trans_amount;

    char _type_to_uppr = toupper(trans_type);

    // perform computations 
    if (_type_to_uppr == deposit){
        ending_balance = starting_balance + trans_amount; 
        }
    else if (_type_to_uppr == withdraw){
        if (starting_balance > trans_amount){
            ending_balance = starting_balance - trans_amount;
        }else{
            cout << "Balance not sufficient."<<endl;
            cout << "Available balance is " << starting_balance << endl;
            return 0; 
        }
    }
    else{
        return 1;
    }
    // Module for displaying the results
    cout << setiosflags (ios::fixed | ios ::showpoint | ios::right)
        << setprecision(2);
    cout << endl; 
    cout << "Start Balance:  $" << setw(8)
         << starting_balance << endl;
    cout << "Transcation:    $" << setw(8)
         << trans_amount << setw(2) << _type_to_uppr << endl;
    cout << setw(25) <<"--------"<< endl;
    cout << "Remain balance:  $" << setw(7)
         << ending_balance << endl;

    return 0;
}