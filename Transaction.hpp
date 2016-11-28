//
//  Transaction.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Transaction_hpp
#define Transaction_hpp

#include <stdio.h>
#include <string>
#include "Date.hpp"
#include <iomanip> //set precision
#include <cmath> //round
using namespace std;

class Transaction{
public:
    Transaction(float theAmount);
    Transaction(float theAmount, Date theDate);
//    ~Transaction(){delete date;}
    Date* getDate() const {return date;}
    void setDate(Date theDate){date = &theDate;}
    float getAmount()const{return amount;}
    string getStatement()const {return info;}
    void setStatement(string theStatement){info = theStatement;}
private:
    float amount;
    Date* date;
    string info;
};
#endif /* Transaction_hpp */
