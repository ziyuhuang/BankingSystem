//
//  Date.hpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Date{
public:
    Date();
    Date(string theDate){date = theDate;}
    bool checkDateFormat(string theDate);
    int compare(Date &d);
    vector<int> convertStringToVecInt(string theDate);
    string toString()const {return date;}
    
private:
    string date;
};
#endif /* Date_hpp */
