//
//  Transaction.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//
//Transaction interface to define transaction

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
    
    //constructor
    Transaction(float theAmount);
    Transaction(float theAmount, Date theDate);
    
    //getter
    
    //return a Date type pointer
    Date* getDate() const {return date;}
    
    //return the amount of the transaction
    float getAmount()const{return amount;}
    
    //set the date of the transaction
    void setDate(Date theDate){date = &theDate;}
    
    //return the transaction info of the transaction
    string getStatement()const {return info;}
    
    //prepare the statement of the current transaction
    void setStatement(string theStatement){info = theStatement;}
private:
    float amount; //amount involved in the transaction
    Date* date; //date of the transaction
    string info;    //transaction message (amount and date)
};
#endif /* Transaction_hpp */
