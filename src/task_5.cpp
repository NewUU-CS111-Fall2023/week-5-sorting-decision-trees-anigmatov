/*
 * Author: Abdusamad Nigmatov
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_5.h"
#include <iostream>
using namespace std;

void displayColors(const std::vector<std::vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char symbol : row) {
            switch (symbol) {
                case 'b':
                    std::cout << "\033[34m\u25A0 ";  // Blue
                    break;
                case 'y':
                    std::cout << "\033[33m\u25A0 ";  // Yellow
                    break;
                case 'w':
                    std::cout << "\033[37m\u25A0 ";  // White
                    break;
                default:
                    std::cout << symbol << " ";
                    break;
            }
        }
        std::cout << "\033[0m" << std::endl;  // Reset color
    }
}
