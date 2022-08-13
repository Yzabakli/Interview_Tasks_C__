//
// Created by Abakli on 31/07/2022.
//

#include "iostream"

using namespace std;

int sumOfDigitsOfInteger(int n){

    int sum = 0;

    while (n > 0){

        sum+= n % 10;

        n /= 10;

    }

    return sum;
}
/*
int main(){

    cout << sumOfDigitsOfInteger(1234);
    return 0;
}*/