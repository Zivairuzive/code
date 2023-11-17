// program file: reserved.cpp
// This program illustrates the use of reserved words.

#include <iostream>
#include <iomanip>

using namespace std;

const int LOOP_LIMIT = 10; 

int main(){

    //declaring variables 
    int j , number, sum;
    double average ;

    // initialise the varible 
    sum = 0 ; 

    for (j=1; j <= LOOP_LIMIT; ++j){
        cout << "Enter the number and press <Enter>: ";
        cin >> number ; 
        sum = sum + number;
    }

    average = double(sum)/LOOP_LIMIT;
    cout << setiosflags (ios::fixed | ios::showpoint | ios::right)
         << setprecision(2);
    cout << endl;
    cout << setw(10) << "The average is " << setw(8) << average<<endl;
    cout << endl;
    cout << setw(10) << LOOP_LIMIT<< endl;

    return 0 ;

}