//
//  SavingAccount.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include <stdio.h>
#include "SavingAccount.h"
using namespace InvalidInput;
using namespace NotEnoughBalance;

SavingAccount::SavingAccount(int theId, float theBalance, string thePassword, Customer theCustomer)
:Account(theId, theBalance, thePassword, theCustomer){
    minBalance = 500;
    
    assert(theBalance > minBalance);
}

bool SavingAccount::withdraw(WithdrawTransaction transaction){
    try{
        if(transaction.getAmount() < 0) throw InputError();
        if(transaction.getAmount() > getBalance()) throw BalanceError();
    }
    catch(InputError e){
        cout << "Amount can not be negative. Invaild transaction." << endl;
        return false;
    }catch(BalanceError e){
        cout << "Not enough balance. Invaild transaction." << endl;
        return false;
    }
    
    setBalance(getBalance() - transaction.getAmount());
    addWithdrawTransaction(transaction);
    return true;
}
