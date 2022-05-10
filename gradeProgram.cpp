// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 10, 2022
// This program asks the user for their grade level
// then calculate we calculate their middle percentrage


#include <iostream>
// import decimal
#include <iomanip>
#include <string>


// function to calculate the area of triangle
std::string CalculateArea(std::string level) {
    if (level == "4+"){
        return "97.5%";
    } else if (level == "4"){
        return "90.5%";
    } else if (level == "4-"){
        return "83%";
    } else if (level == "3+"){
        return "78%";
    } else if (level == "3"){
        return "74.5%";
    } else if (level == "3-"){
        return "71%";
    } else if (level == "2+"){
        return "68%";
    } else if (level == "2"){
        return "64.5%";
    } else if (level == "2-"){
        return "61%";
    } else if (level == "1+"){
        return "54.5%";
    } else if (level == "1"){
        return "54.5%";
    } else if (level == "1"){
        return "51%";
    } else if (level == "R"){
        return "below 50%";
    } else{
        return "-1";
    }

}

main() {
    
    // variables
    std::string input_level;
    std::string percentage;

    // user inputs for grade
    std::cout << "Enter your level: ";
    std::cin >> input_level;
    // assingn function to variables and call it
    percentage = CalculateArea(input_level);
     // display the answer
    std::cout << "Level " << input_level << " has a middle percentage of " <<
    percentage << std::endl;
}
