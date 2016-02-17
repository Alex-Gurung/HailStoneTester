//
// Created by Alex Gurung
//

#ifndef TEST_MAIN_H
#define TEST_MAIN_H
#include <iostream>
using namespace std;


unsigned long long int testHail(unsigned long long int num){
    if (num == 4){
        return 0;
    }
    else if (num % 2 == 0){
        return (num / 2);
    }
    else {
        return ((num * 3) +1);
    }
}
#endif //TEST_MAIN_H
