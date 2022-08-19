//
// Created by Abakli on 08/08/2022.
//


#include <string>
#include <cmath>
#include <iostream>

int power1(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power1(x, y / 2) * power1(x, y / 2);
    return x * power1(x, y / 2) * power1(x, y / 2);
}

int order(int x)
{
    int n = 0;
    while (x) {
        n++;
        x = x / 10;
    }
    return n;
}

bool isArmstrong2(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power1(r, n);
        temp = temp / 10;
    }

    return (sum == x);
}

static bool isArmstrong(int number){

    std::string numberToString = std::to_string(number);

    int power = (int) numberToString.length();

    int sum = 0;

    for (int i = 0; i < power; ++i) {

        sum += (int) pow(std::stoi(numberToString.substr(i,1)), power);
    }

    return sum == number;
}
/*
int main(){

    std::cout << isArmstrong(371);
}*/