
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
    
    //constructor
    //theId: id of the customer
    Customer(string theId):customer_id(theId){}
    
    //constructor
    Customer(string theId, string theName, string theAddress, string thePhoneNumber){
        customer_id = theId, name = theName, address = theAddress; phoneNumber = thePhoneNumber;
    }
    
    //getter
    string getCustomerID() const {return customer_id;}
    string getName() const {return name;}
    string getAddress() const {return address;}
    string getPhoneNumber() const {return phoneNumber;}
    
    //setter
    void setName(string& theName){name = theName;}
    void setAddress(string& theAddress){address = theAddress;}
    void setPhone(int& thePhoneNumber){phoneNumber = thePhoneNumber;}
    
    
private:
    string customer_id;
    string name;
    string address;
    string phoneNumber;
};
#endif /* Customer_h */
