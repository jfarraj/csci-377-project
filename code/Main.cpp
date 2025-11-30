#include <iostream>
#include "Account.h"

int main(){

    std::cout<<"This is a test!"<<std::endl;

    Account p1("Henry", 404, 25.50, 2000.70);

    p1.printPerson();

    return 0;

}