#include "account.h"
#include <iostream>
#include <iomanip>

using namespace std;

//float SavingAccount::profit = 0.05;
int SavingAccount::order = 1;
void SavingAccount::display(){
    cout << num << ' ';
    cout << fixed << setprecision(2);
    cout << deposit << ' ';
    cout << profit << endl;
}

void SavingAccount::calculate(){
    deposit = deposit*(1+profit);
}

void SavingAccount::changerate(float new_rate){
    profit = new_rate;
}