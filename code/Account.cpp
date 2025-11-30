#include "Account.h"
#include <iostream>

// Empty constructor
Account::Account(){}

// Destructor (if needed)
Account::~Account(){}

// Constructor
Account::Account(std::string newName, int newAccNum, double newCheck, double newSavings){
    setName(newName);
    setAccNum(newAccNum);
    setChecking(newCheck);
    setSavings(newSavings);
}

std::string Account::getName() const{
    return name;
}

int Account::getAccNum() const {
    return accNum;
}

double Account::getTotal() const{
    return total;
}

double Account::getChecking() const {
    return checking;
}

double Account::getSavings() const {
    return savings;
}

void Account::setName(std::string newName){
    name = newName;
}

void Account::setAccNum(int newAccNum){
    accNum = newAccNum;
}

void Account::setChecking(double newCheck){
    checking = newCheck;
}

void Account::setSavings(double newSavings){
    savings = newSavings;
}

void Account::printPerson(){
    std::cout << "Account Number: " << accNum << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Checkings: " << checking << std::endl;
    std::cout << "Savings: " << savings << std::endl;
    std::cout << "= = = = =" << std::endl;
}

