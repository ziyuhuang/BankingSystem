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
//    char serviceChoice;
//    cout << "*********************************************************" << endl;
//    cout << "***************Simple Banking System in C++**************" << endl;
//    cout << "***********WELCOME, WE ARE PLEASED TO SERVER YOU*********" << endl;
//    cout << "*********************************************************" << endl << endl;
//    
// 
//    printServiceOptions();
//    
//    cin >> serviceChoice;
//    cin.ignore();
//    while(!choice(serviceChoice)){
//        cout << "Error, Wrong input."<< endl;
//        printServiceOptions();
//        cin.clear();
//        cin >> serviceChoice;
//        cin.ignore();
//    }
//    
//    if(serviceChoice == 'r'){
//        string customerId = generateCustomerId();
//        string name = getName();
//        string address = getAddress();
//        string phoneNumber = getPhoneNumber();
//        
//        Customer customer(customerId, name, address, phoneNumber);
//        
//        cout << "Do you want to open checking or saving?" << endl;
//        cout << "Enter 'c' for checking and 's' for saving" << endl;
//        char checkingOrSaving;
//        cin.clear();
//        cin >> checkingOrSaving;
//        cin.ignore();
//        while(!subChoices(checkingOrSaving)){
//            cout << "Input error." << endl;
//            cout << "Enter 'c' for checking and 's' for saving" << endl;
//            cin.clear();
//            cin >> checkingOrSaving;
//            cin.ignore();
//        }
//        
//        if(checkingOrSaving == 'c'){
//            int accountId = generateAccountId();
//            double deposit;
//            cout << "Enter how much you want to deposit the first time" << endl;
//            cin >> deposit;
//            
//            CheckingAccount checkacc(accountId, deposit, "password", customer);
//            cout << endl << "Your account has been created: " << endl;
//            cout << "Name: " << customer.getName() << endl
//            << "Checking account number: " << accountId << endl
//            << "Balance: " << checkacc.getBalance() << endl << endl;
//            
//        }else if(checkingOrSaving == 's') {
//            int accountId = generateAccountId();
//            double deposit;
//            cout << "Enter how much you want to deposit the first time. Minimum Balance for " <<
//            " Saving account is $500" << endl;
//            cin >> deposit;
//            
//            SavingAccount checkacc(accountId, deposit, "password", customer);
//            cout << endl << "Your account has been created: " << endl;
//            cout << "Name: " << customer.getName() << endl
//            << "Checking account number: " << accountId << endl
//            << "Balance: " << checkacc.getBalance() << endl << endl;
//        }
//    }else if(serviceChoice == 'd'){
//        
//    }
//    
  
//
//
//bool subChoices(char c){
//    if(c == 's' || c=='c') return true;
//    else return false;
//}
//
//bool choice(char c){
//    if(c == 'r' || c == 'd' || c == 'w'){
//        return true;
//    }else{
//        return false;
//    }
//}
//
//void printServiceOptions(){
//    cout << "Please choose one of the service:" << endl;
//    cout << "Press 'r' to register" << endl;
//    cout << "Press 'd' to deposit" << endl;
//    cout << "Press 'w' to withdraw" << endl << endl;
//}
//
//int generateAccountId(){
//    srand(int (time(nullptr)));
//    int id = rand() % 1000000000 + 1000000001;
//    return id;
//}
//
//string generateCustomerId(){
//    srand(int(time(nullptr)));
//    int id = rand() % 10000000 + 127362;
//    return to_string(id);
//}
//
//string getName(){
//    cout << "Please enter your name" << endl;
//    string name;
//    cin >> name;
//    cin.ignore();
//    while(name == " "){
//        cin.clear();
//        cout << "Your name can't be empty" << endl;
//        cout << "Please enter your name" << endl;
//        cin >> name;
//        cin.ignore();
//    }
//    return name;
//}
//
//int getAge(){
//    cout << "Please enter your age" << endl;
//    int age;
//    cin >> age;
//    while(!cin || age < 18 || age > 120){
//        cin.clear();
//        cin.ignore();
//        cout << "Please enter your age" << endl;
//        cin >> age;
//    }
//    return age;
//}
//
//string getAddress(){
//    cout << "Please enter your address" << endl;
//    string address;
//    getline(cin, address);
//    return address;
//}
//
//string getPhoneNumber(){
//    cout << "Enter you phone number" << endl;
//    string phone;
//    cin >> phone;
//    return phone;
//}

//
//    cout << d1.compare(d2) <<"\n";
   
//    DepositTransaction d(307, d2);
//    
//    DepositTransaction dd1(500);
//    
//    WithdrawTransaction w1(11100, d3);
//
//    WithdrawTransaction d9(10.8);
//    
//    cout << d.getStatement() << endl;
//    cout << d9.getStatement() << endl;
    
//    Bank b;
//    
//    Customer customer1("1999", "ziyu Huang", "123 albert st", 0014421234);
//    
//    CheckingAccount c(1234, 300.0, "password", customer1);
//    
//    c.deposit(d);
//    c.deposit(dd1);
//    c.withdraw(w1);
//    SavingAccount c1(1235, 560.0, "password", customer1);
//    
//    CheckingAccount* ptr = &c;
//    
//    ptr->showAccountActivities();
//    
//    cout << endl << "current balance in checking account: $" << ptr->getBalance() << endl << endl;
    
//    SavingAccount* ptr1 = &c1;
    
//    b.addAccount(ptr);
//    b.printCustomerList();
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
    

