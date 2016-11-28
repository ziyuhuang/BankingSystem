#include <iostream>
#include "Date.hpp"
#include "Bank.hpp"
#include "Transaction.hpp"
#include "DepositTransaction.hpp"
#include "WithdrawTransaction.hpp"

using namespace std;

int main(void)
{
    Date d1("11/12/2012");
    Date d2("13/10/2014");
    Date d3("09/12/2015");
//
//    cout << d1.compare(d2) <<"\n";
   
    DepositTransaction d(307, d2);
    
    DepositTransaction dd1(500);
    
    WithdrawTransaction w1(11100, d3);
//
//    WithdrawTransaction d9(10.8);
//    
//    cout << d.getStatement() << endl;
//    cout << d9.getStatement() << endl;
    
    Bank b;
    
    Customer customer1("1999", "ziyu Huang", "123 albert st", 0014421234);
    
    CheckingAccount c(1234, 300.0, "password", customer1);
    
    c.deposit(d);
    c.deposit(dd1);
    c.withdraw(w1);
    SavingAccount c1(1235, 560.0, "password", customer1);
    
    CheckingAccount* ptr = &c;
    
    ptr->showAccountActivities();
    
    cout << endl << "current balance in checking account: $" << ptr->getBalance() << endl << endl;
    
//    SavingAccount* ptr1 = &c1;
    
    b.addAccount(ptr);
    
//    b.addAccount(ptr1);
    
//    cout << "there are " << b.getSize() << " accounts." << endl;
//    vector<Account*> list = b.getAccountList();
//    
//    for(int i = 0; i < list.size(); i++){
//        if(dynamic_cast<CheckingAccount*>(list[i])){
//            cout << "This is a checking account" << endl;
//        }else{
//            cout << "This is a saving account" << endl;
//        }
//    }
    
    
//    cout << b.getSize() << endl;
    
//    Account* temp = b.getAccountInfo(1235);
//    cout << temp->getBalance() << endl;
//    
//    if(dynamic_cast<SavingAccount*>(temp)){
//        cout << "It is a saving account" << endl;
//    }
    
    
    
    return EXIT_SUCCESS;
}
