//
//  DepositTransaction.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include "DepositTransaction.hpp"

DepositTransaction::DepositTransaction(float theAmount)
:Transaction(theAmount){
    
    float k = theAmount;
    string statement = "";
    statement = "\nDeposit Date: " + getDate()->toString() + "\n" +
    "Deposit Amount: " + to_string(k) + "\n";
    setStatement(statement);
}

DepositTransaction::DepositTransaction(float theAmount, Date theDate)
:Transaction(theAmount, theDate){
    float k = theAmount;
    string statement = "";
    statement = "\nDeposit Date: " + getDate()->toString() + "\n" +
    "Deposit Amount: " + to_string(k) + "\n";
    setStatement(statement);
}
