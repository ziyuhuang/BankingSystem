//
//  WithdrawTransaction.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef WithdrawTransaction_hpp
#define WithdrawTransaction_hpp

#include <stdio.h>
#include "Transaction.hpp"
#include <string>
using namespace std;

class WithdrawTransaction:public Transaction{
public:
    WithdrawTransaction(float theAmount);
    WithdrawTransaction(float theAmount, Date theDate);
};
#endif /* WithdrawTransaction_hpp */
