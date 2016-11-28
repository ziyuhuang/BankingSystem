
//
//  Customer.h
//  BankingSystem
//
//  Created by ZIYU HUANG on 10/31/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#ifndef Customer_h
#define Customer_h
#include <string>
#include <iostream>
using namespace std;
class Customer{
public:
    Customer();
    Customer(string theId):customer_id(theId){}
    Customer(string theId, string theName, string theAddress, int thePhoneNumber){
        customer_id = theId, name = theName, address = theAddress; phoneNumber = thePhoneNumber;
    }
//    ~Customer();
    
    string getCustomerID() const {return customer_id;}
    string getName() const {return name;}
    string getAddress() const {return address;}
    int getPhoneNumber() const {return phoneNumber;}
    
    void setName(string& theName){name = theName;}
    void setAddress(string& theAddress){address = theAddress;}
    void setPhone(int& thePhoneNumber){phoneNumber = thePhoneNumber;}
    
private:
    string customer_id;
    string name;
    string address;
    int phoneNumber;
};
#endif /* Customer_h */
