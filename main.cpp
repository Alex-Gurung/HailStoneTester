//
// Created by Alex Gurung
//
#include "helper.h"

void testnums(unsigned long long int hail){
    long long orghail = hail;
    while(hail!= 0){
        hail = testHail(hail);
    }
    cout << orghail << endl;
}
int main(){
    unsigned long long int counter = 10000;
    for(long long i = 30000000; i<18446744073709551615 ; i++){
        testnums(i);
    }
    return 0;
}