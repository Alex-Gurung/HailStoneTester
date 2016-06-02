//
// Created by Alex Gurung
//

#ifndef TEST_MAIN_H
#define TEST_MAIN_H
#include <iostream>
using namespace std;


unsigned long long testHail(unsigned long long num){ //Following statements follow the rules of Hailstone numbers
															//It returns the next number in the sequence, reverting to zero once it reaches 4
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
