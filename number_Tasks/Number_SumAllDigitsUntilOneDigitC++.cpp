//
// Created by Abakli on 02/08/2022.
//
#include "iostream"

void sumAllDigitsUntilOneDigit(int n){

    while (n > 9){

        int digit = n, sum = 0;

        while (digit > 0){

            sum += digit % 10;
            digit /= 10;
        }
        std::cout << sum;
        std::cout << "\n";

        n = sum;
    }
}
/*
int main(){

    sumAllDigitsUntilOneDigit(797897);
}*/