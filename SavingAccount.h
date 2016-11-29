//
//  SavingAccount.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef SavingAccount_h
#define SavingAccount_h
#include "Account.h"
#include "Customer.h"
#include <cassert>

class SavingAccount:public Account{
public:
    
    //public constructor, set minimum balance to 500
    SavingAccount(int theId, float theBalance, string thePassword, Customer theCustomer);
    
//    void getCustomer()const{return customer;
    
//    ~SavingAccount();
    //get minnimum balance
    float getMinBalance() const{return minBalance;}
    
    //set the minimum balance of the saving account
    void setMinBalance(float theMinBalance){minBalance = theMinBalance;}
    
    //check if the balance belows minimum balance
    bool checkMinBalance(){return getBalance() >= minBalance;}
    
    //calculate the interest
    float calculateInterest(int &month);
    
    //get the current interest rate
    float getInterestRate() const {return interestRate;}
    
    //set the current interest rate
    void setInterrestRate(float& rate){interestRate = rate;}
    
    //withdraw from the account
    //transaction:transaction to perform
    bool withdraw(WithdrawTransaction transaction);
private:
    float minBalance;
    float interestRate;
    
};
#endif /* SavingAccount_h */
