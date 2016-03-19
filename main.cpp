//
// Created by Alex Gurung
//
#include "helper.h" //Contains the helper method to find the next hailstone number

void testnums(unsigned long long int hail){ //Tests the given number by going through each iteration of the hailstone sequence until it gets to zero
    unsigned long long int orghail = hail;
    while(hail!= 0){
        hail = testHail(hail); //Within helper.h file, testHail returns the next hailstone number, or 0 if you get to 4
    }
    cout << orghail << endl; //This is a test commit
}
int main(){
    //unsigned long long int counter = 10000;
    for(unsigned long long int i = 5476377146882523136; i<18446744073709551615 ; i++){ 
//18446744073709551615 is the largest value available for an unsigned long long int, and 5476377146882523136 was the previous largest tested value
        testnums(i);
    }
    return 0;
}
