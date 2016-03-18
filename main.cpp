//
// Created by Alex Gurung
//
#include "helper.h"

void testnums(unsigned long long int hail){
    unsigned long long int orghail = hail;
    while(hail!= 0){
        hail = testHail(hail); //Within helper.h file, testHail returns the next hailstone number, or 0 if you get to 4
    }
    cout << orghail << endl;
}
int main(){
    unsigned long long int counter = 10000;
    for(unsigned long long int i = 5476377146882523136; i<18446744073709551615 ; i++){ 
//18446744073709551615 is the largest value available for an unsigned long long int, and 5476377146882523136 was the previous largest tested value
        testnums(i);
    }
    return 0;
}
