// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: This program calculates the tax paid
// on a given subtotal in Nunavut
#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float GST = 0.05;
    float tax;
    float subTotal;
    float total;

    // greeting
    printf("You are currently in Nunavut where the tax rate is 5 percent \n");
    // get subtotal
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // calculate tax and total
    tax = + subTotal * GST;
    total = subTotal + tax;

    // display results
    std::cout << "" << std::endl;
    std::cout << "The GST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
