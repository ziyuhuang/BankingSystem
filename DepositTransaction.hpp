//
//  DepositTransaction.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//
//DepositTransaction class to generate the info message of the deposit transaction

#ifndef DepositTransaction_hpp
#define DepositTransaction_hpp

#include <stdio.h>
#include "DepositTransaction.hpp"
#include "Transaction.hpp"
#include <string>
using namespace std;

class DepositTransaction:public Transaction{
public:
    
    //constructor
    DepositTransaction(float theAmount);
    DepositTransaction(float theAmount, Date theDate);
};
#endif /* DepositTransaction_hpp */
