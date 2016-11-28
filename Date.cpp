//
//  Date.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 11/26/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include "Date.hpp"
#include <sstream>
#include <ctime>

Date::Date(){
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    
    date = "";
    date = to_string(timePtr->tm_mon) + "/" + to_string(timePtr->tm_mday) + "/" + to_string(timePtr->tm_year + 1900);
}

bool Date::checkDateFormat(string theDate){
    
    vector<int> array = convertStringToVecInt(theDate);
    
    if(array.size() != 3)
        return false;
    
    for(int i = 0; i < array.size(); i++){
        if(array[0] < 1 || array[0] > 12) return false;
        if(array[1] < 1 || array[1] > 31) return false;
        if(array[2] < 1900 || array[0] > 2016) return false;
    }

    return true;
}

vector<int> Date::convertStringToVecInt(string theDate){
   
    for (int i=0; i<theDate.length(); i++)
    {
        if (theDate[i] == '/')
            theDate[i] = ' ';
    }
    
    vector<int> array;
    stringstream ss(theDate);
    int temp;
    while (ss >> temp)
        array.push_back(temp);
    
    return array;
}

int Date::compare(Date &d){
    vector<int> array1 = convertStringToVecInt(toString());
    vector<int> array2 = convertStringToVecInt(d.toString());
    
    if(array1[2] > array2[2]){
        return -1;
    }else if(array1[2] == array2[2]){
        if(array1[1] > array2[1]){
            return -1;
        }if(array1[1] == array2[1]){
            if(array1[0] > array2[0]){
                return -1;
            }
        }
    }
    
    return 1;
}
