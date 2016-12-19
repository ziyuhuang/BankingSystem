//
//  Account.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/27/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include <stdio.h>
#include "Account.h"
using namespace InvalidInput;
using namespace NotEnoughBalance;

Account:: Account(int theId, float theBalance, string thePassword, Customer theCustomer)
:account_id(theId), balance(theBalance), password(thePassword), customer(theCustomer){
    DepositTransaction d(theBalance);
    tranSacRecords.push_back(d);
}

bool Account::deposit(DepositTransaction transaction){
    try{
        if(transaction.getAmount() < 0) throw "Please enter a positive number for deposit.";
    }
    catch(exception e){
        cout << "Invaild transaction." << endl;
        return false;
    }
    balance += transaction.getAmount();
    tranSacRecords.push_back(transaction);
    return true;
}

void Account::showAccountActivities(){
    Customer c = getCustomer();
    cout << "*********" << c.getName() << " Accout Info**********" << endl;
    list<Transaction>::const_iterator iter;
    for(iter = tranSacRecords.begin(); iter != tranSacRecords.end(); iter++){
        cout << iter->getStatement();
    }
}

bool Account::withdraw(WithdrawTransaction transaction){
    try{
        if(transaction.getAmount() < 0) throw InputError();
        if(transaction.getAmount() > balance) throw BalanceError();
    }
    catch(InputError e){
        cout << "Amount can not be negative. Invaild transaction." << endl;
        return false;
    }catch(BalanceError e){
        cout << "Not enough balance. Invaild transaction." << endl;
        return false;
    }
    balance -= transaction.getAmount();
    tranSacRecords.push_back(transaction);
    return true;
}
