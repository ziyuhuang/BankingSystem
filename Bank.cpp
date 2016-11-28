//
//  Bank.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/30/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include "Bank.hpp"
#include "CheckingAccount.h"
#include "SavingAccount.h"

Bank::Bank(){
    name = "Chase";
    size = 0;
}

Account* Bank:: getAccountInfo(int accountId){
    Account* temp = nullptr;
    for(int i = 0; i < account_list.size(); i++){
        if(account_list[i]->getAccountNumber() == accountId){
            temp = account_list[i];
            return temp;
        }
    }
    return nullptr;
}

bool Bank::removeAccount(int accountId){
    for(int i = 0 ; i < account_list.size(); i++){
        if(account_list[i]->getAccountNumber() == accountId){
            account_list.erase(remove(account_list.begin(), account_list.end(), account_list[i]), account_list.end());
            return true;
        }
    }
    return false;
}

void Bank::addAccount(Account* account){
    
    //ensure no duplicate account number
    for(int i = 0; i < account_list.size(); i++){
        try{
            if(account_list[i]->getAccountNumber() == account->getAccountNumber()){
                throw account_list[i]->getAccountNumber();
            }
        }
        catch(int e){
            cout << "Account number " << e << " is already been used, please choose another one." << endl;
            return;
        }
    }
    
    SavingAccount* s;

    
    
    if((s = dynamic_cast<SavingAccount*>(account))){
        try{
            if(s->checkMinBalance()){
                account_list.push_back(account);
            }else{
                throw s->getBalance();
            }
        }catch(int e){
            cout << s->getBalance() << " MINIMUM balance in the saving account is required.\n";
            return;
        }
    }else{
        //add account to the bank
        account_list.push_back(account);
    }
    
    size++;
}

