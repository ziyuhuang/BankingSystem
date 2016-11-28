//
//  CheckingAccount.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h
#include <iostream>
#include <string>
#include "Customer.h"
#include "Account.h"

using namespace std;
class CheckingAccount:public Account{
public:
//    CheckingAccount();
    CheckingAccount(int theId, float theBalance, string thePassword, Customer theCustomer)
    :Account(theId, theBalance, thePassword, theCustomer){}
    
//    ~CheckingAccount();
    bool withdraw(WithdrawTransaction transaction);
private:
    
};

#endif /* CheckingAccount_h */
