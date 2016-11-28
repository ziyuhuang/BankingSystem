//
//  Bank.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include "Account.h"
#include <string>
#include <vector>
#include "CheckingAccount.h"
#include "SavingAccount.h"

using namespace std;

class Bank{
public:
    Bank();
    Bank(string theName):name(theName){size = 0;}
    string getBankName() const {return name;}
    Account* getAccountInfo(int accountId);
    bool removeAccount(int accountId);
    void addAccount(Account*);
    int getSize() const {return size;}
    vector<Account*> getAccountList(){return account_list;}
    
private:
    string name;
    vector<Account*> account_list;
    int size;
};
#endif /* Bank_hpp */
