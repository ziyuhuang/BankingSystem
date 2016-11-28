//
//  WithdrawTransaction.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include "WithdrawTransaction.hpp"

WithdrawTransaction::WithdrawTransaction(float theAmount)
:Transaction(theAmount){
    
    float k = theAmount;
    string statement = "";
    statement = "\nWithdraw Date: " + getDate()->toString() + "\n" +
    "Withdraw Amount: " + to_string(k) + "\n";
    setStatement(statement);
}

WithdrawTransaction::WithdrawTransaction(float theAmount, Date theDate)
:Transaction(theAmount, theDate){
    float k = theAmount;
    string statement = "";
    statement = "\nWithdraw Date: " + getDate()->toString() + "\n" +
    "Withdraw Amount: " + to_string(k) + "\n";
    setStatement(statement);
}
