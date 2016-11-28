//
//  Account.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include "Customer.h"
#include <string>
#include "DepositTransaction.hpp"
#include "WithdrawTransaction.hpp"
#include <list>
#include "Exception.h"

using namespace std;
class Account{
public:
    
    Account(int theId, float theBalance, string thePassword, Customer theCustomer)
        :account_id(theId), balance(theBalance), password(thePassword), customer(theCustomer){}
//    ~Account();
    int getAccountNumber() const {return account_id;};
    float getBalance() const {return balance;};
    void setBalance(float newBalance){balance = newBalance;}
    string getPassword(){return password;}
    virtual bool withdraw(WithdrawTransaction transaction);
    bool deposit(DepositTransaction transaction);
    void showAccountActivities();
    void addWithdrawTransaction(WithdrawTransaction transaction) {tranSacRecords.push_back(transaction);}
    
private:
    int account_id;
    float balance;
    string password;
    Customer customer;
    list<Transaction> tranSacRecords;
};

#endif /* Account_h */
