//
// Created by Abakli on 17/08/2022.
//

#include <string>
#include <iostream>

static int maximumPossibleValue(int number){

    std::string numberToString;

    if (number > 0){

        numberToString = std::to_string(number);

        for (int i = 0; i < numberToString.length(); ++i) {

            if (stoi(numberToString.substr(i, 1))  < 5){

                return stoi(numberToString.substr(0,i) + "5" + numberToString.substr(i));
            }
        }
        return stoi(numberToString + "5");

    } else if (number < 0){

        numberToString = std::to_string(-number);

        for (int i = 0; i < numberToString.length(); ++i) {

            if (std::stoi(numberToString.substr(i, 1)) > 5){

                return -std::stoi(numberToString.substr(0,i) + "5" + numberToString.substr(i));
            }
        }
        return -std::stoi(numberToString + "5");

    } else return 50;
}
/*
int main(){

    std::cout << maximumPossibleValue(-168);
    std::cout << "\n";
    std::cout << maximumPossibleValue(168);
    std::cout << "\n";
    std::cout << maximumPossibleValue(0);
}*/