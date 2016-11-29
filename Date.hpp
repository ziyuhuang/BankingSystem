//
//  Date.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//
//Date class to perform date operations: convertion, comparision, generate current date

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Date{
public:
    
    //constructors
    Date();
    Date(string theDate){date = theDate;}
    
    //return true if date format (month/date/year) is correct
    bool checkDateFormat(string theDate);
    
    //return 1 if the current date is old than the date of d, else return -1
    int compare(Date &d);
    
    //helper method to convert a string for comparision use
    vector<int> convertStringToVecInt(string theDate);
    
    //return a string of the date
    string toString()const {return date;}
    
private:
    string date;
};
#endif /* Date_hpp */
