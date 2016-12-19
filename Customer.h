
//
//  Customer.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/31/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//
//Customer class to define customer property 

#ifndef Customer_h
#define Customer_h
#include <string>
#include <iostream>
using namespace std;
class Customer{
public:
    
    //default construtor
    Customer();
    
//    constructor
//    theId: id of the customer
    Customer(string theId);
    
//    constructor
    Customer(string theId, string theName, string theAddress, string thePhoneNumber);

    //getter
    string getCustomerID();
    string getName() const;
    string getAddress() const;
    string getPhoneNumber() const;
    
    //setter
    void setName(string& theName);
    void setAddress(string& theAddress);
    void setPhone(int& thePhoneNumber);
    
    
private:
    string customer_id;
    string name;
    string address;
    string phoneNumber;
};
#endif /* Customer_h */
