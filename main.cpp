#include <iostream>
#include "Date.hpp"
#include "Bank.hpp"
#include "Transaction.hpp"
#include "DepositTransaction.hpp"
#include "WithdrawTransaction.hpp"
#include <time.h>
#include <string>

using namespace std;

bool subChoices(char c);    //check user enter saving or checking or other invalid symbols
bool choice(char c);    //check user choice input
void printServiceOptions(); //print instruction for customers
string generateCustomerId();  //generate customerid
string registerAction(); //
string getName();    //get user name
int getAge();   //get user age
string getAddress(); //get user address
string getPhoneNumber(); //get user phone number
int generateAccountId();    //generate random account id

int main(void)
{
    //    Date d1("11/12/2012");
    //    Date d2("13/10/2014");
    //    Date d3("09/12/2015");
    
    Customer customer1("chase927374", "Ziyu Huang", "123 albert st", "0014421234");
    Customer customer2("boa78783873", "Zanny Qute", "123 albert st", "9233639738");
    
    CheckingAccount checking1(823989894, 300.0, "password", customer1);
    CheckingAccount checking2(387823789, 335.0, "password", customer2);
    
    DepositTransaction deposit1(307);
    DepositTransaction deposit2(500);
    DepositTransaction deposit3(736.9);
    DepositTransaction deposit4(1736.9);
    DepositTransaction deposit5(863);
    DepositTransaction deposit6(2873.9);
    WithdrawTransaction withdraw1(111);
    
    WithdrawTransaction withdraw2(10.8);
    
    Bank b;
    
    checking1.deposit(deposit1);
    checking1.deposit(deposit2);
    checking1.deposit(deposit3);
    checking1.withdraw(withdraw2);
    
    checking2.deposit(deposit4);
    checking2.deposit(deposit5);
    checking2.deposit(deposit6);
    checking2.withdraw(withdraw1);
    
    SavingAccount saving1(1235, 560.0, "password", customer1);
    
    CheckingAccount* checkingptr1 = &checking1;
    CheckingAccount* checkingptr2 = &checking2;
    
    checkingptr1->showAccountActivities();
    cout << endl << "current balance in checking account: $" << checkingptr1->getBalance() << endl << endl;
    
    cout << endl;
    
    checkingptr2->showAccountActivities();
    cout << endl << "current balance in checking account: $" << checkingptr2->getBalance() << endl << endl;
    
    SavingAccount* savingptr1 = &saving1;
    
    b.addAccount(checkingptr1);
    b.addAccount(checkingptr2);
    b.addAccount(savingptr1);
    b.printCustomerList();
    
    vector<Account*> list = b.getAccountList();
    int checking = 0;
    int saving = 0;
    for(int i = 0; i < list.size(); i++){
        if(dynamic_cast<CheckingAccount*>(list[i])){
            checking++;
        }else{
            saving++;
        }
    }
    
    cout << endl;
    cout << "The Bank now has " << checking << " Checking accounts " <<
    saving << " Saving accounts" << endl << endl;
    
    return EXIT_SUCCESS;
}
