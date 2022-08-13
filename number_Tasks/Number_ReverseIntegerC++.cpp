//
// Created by Abakli on 05/08/2022.
//

#include <iostream>

static int reverseInteger(int num){

    int temp = 0;

    while (num != 0){

        temp = temp * 10 + num % 10;
        num /= 10;
    }
    return temp;
}
/*
int main(){

    std::cout << reverseInteger(34895394);
}*/