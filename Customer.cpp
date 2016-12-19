//
//  Customer.cpp
//  BankingSystem
//
//  Created by ZIYU HUANG on 12/18/16.
//  Copyright © 2016 ZIYU HUANG. All rights reserved.
//

#include <stdio.h>
#include "Customer.h"
#include <string>

Customer::Customer(){
    
}

Customer::Customer(string theId)
{
    customer_id = theId;
}

Customer::Customer(string theId, string theName, string theAddress, string thePhoneNumber)
:customer_id(theId), name(theName), address(theAddress), phoneNumber(thePhoneNumber)
{

}

string Customer::getName() const{
    return name;
}

string Customer::getCustomerID(){
    return customer_id;
}

string Customer::getAddress() const {return address;}

string Customer::getPhoneNumber() const {return phoneNumber;}

void Customer:: setName(string& theName){name = theName;}
void Customer:: setAddress(string& theAddress){address = theAddress;}
void Customer:: setPhone(int& thePhoneNumber){phoneNumber = thePhoneNumber;}
