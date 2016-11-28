//
//  Transaction.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include "Transaction.hpp"
#include <string>
#include "Date.hpp"
using namespace std;

Transaction::Transaction(float theAmount)
:amount(theAmount){
    date = new Date();
}

Transaction::Transaction(float theAmount, Date theDate)
:amount(theAmount){
    date = &theDate;
}

