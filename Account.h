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
    //constructor
    //theId: account id
    //theBalance: initial balance
    //thePassword: passowrd of the account
    //theCustomer: customer of the account
    Account(int theId, float theBalance, string thePassword, Customer theCustomer)
        :account_id(theId), balance(theBalance), password(thePassword), customer(theCustomer){
            DepositTransaction d(theBalance);
            tranSacRecords.push_back(d);
        }
    
    //return the id of the account
    int getAccountNumber() const {return account_id;};
    
    //return the balance of this account
    float getBalance() const {return balance;};
    
    //set new balance of this account
    //newBalance: new balance to set
    void setBalance(float newBalance){balance = newBalance;}
    
    //return the password of the account
    string getPassword(){return password;}
    
    //withdraw from the account
    //transaction: transaction to perform
    virtual bool withdraw(WithdrawTransaction transaction);
    
    //deposit to the account
    //transaction: transaction to perform
    bool deposit(DepositTransaction transaction);
    
    //list the acctivities of the account over time
    void showAccountActivities();
    
    //accessor function for CheckingAccount & SavingAccount class
    void addWithdrawTransaction(WithdrawTransaction transaction) {tranSacRecords.push_back(transaction);}
    
    //get customer
    Customer getCustomer() const{
        return customer;
    }
    
private:
    int account_id;
    float balance;
    string password;
    Customer customer;
    list<Transaction> tranSacRecords;
};

#endif /* Account_h */
