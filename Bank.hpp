//
//  Bank.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//
//Bank account class enables add account and remove account
//It stores all the user account information

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include "Account.h"
#include <string>
#include <vector>
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include <set>

using namespace std;

struct Comp{
    bool operator()(const Customer &c1, const Customer &c2){
        return c1.getName() < c2.getName();
    }
};

class Bank{
public:
    
    //default construtor
    Bank();
    
    //constructor
    //param: name of the bank, initial size equals zero
    Bank(string theName);
    
    //getter, return the name of the bank
    string getBankName() const;
    
    //return a pointer points to the account has the accountId
    Account* getAccountInfo(int accountId);
    
    //return true if the account which contains the id is removed
    bool removeAccount(int accountId);
    
    //add the account to the bank
    //param: account pointer
    void addAccount(Account*);
    
    //return the total account size of the bank
    int getSize() const;
    
    //return a list than contains all the accounts of the bank
    vector<Account*> getAccountList();
    
    //print all the bank customers
    void printCustomerList();
    
private:
    string name; //name of the bank
    vector<Account*> account_list; //list to hold the accounts
    int size; //total account numbers of the bank
    set<Customer, Comp> customer_list;
};
#endif /* Bank_hpp */
