//
// Created by Abakli on 02/08/2022.
//

#include <iostream>

static void divide(int dividend, int divisor){

    int quotient = 0;

    while (dividend > divisor){

        dividend -= divisor;
        quotient++;
    }
    std::cout << "Quotient: ";
    std::cout << quotient;
    std::cout << " Remainder: ";
    std::cout << dividend;
}
/*
int main(){

    divide(75, 4);
}*/