/*
 * Author: Abdusamad Nigmatov
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include <iostream>
#include <vector>
#include <string>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    
    std::cout << "Task 1" << std::endl;
    std::vector<std::string> bookTitles;

    bookTitles.push_back("Catcher in the Rye");
    bookTitles.push_back("Pride and Prejudice");
    bookTitles.push_back("To Kill a Mockingbird");
    bookTitles.push_back("The Great Gatsby");
    bookTitles.push_back("Moby Dick");

    bubbleSort(bookTitles);

    std::cout << "Sorted list of book titles:" << std::endl;
    for (const std::string &title : bookTitles) {
        std::cout << title << std::endl;
    }


    
    std::cout << "Task 2" << std::endl;
    std::vector<int> denominations;

    denominations.push_back(83);
    denominations.push_back(12);
    denominations.push_back(61);

    selectionSort(denominations);

    std::cout << "Sorted list of denominations:" << std::endl;
    for (const int &denomination : denominations) {
        std::cout << denomination << " ";
    }    
    
    
    
    std::cout << "Task 3" << std::endl;
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    rearrangeSoldiers(soldiers);

    std::cout << "Rearranged list of soldiers:" << std::endl;
    for (const std::string &soldier : soldiers) {
        std::cout << soldier << std::endl;
    }
    
    
    
    
    
    std::cout << "Task 4" << std::endl;
    int arr[] = {5, 2, 8, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countElementsWithSmallerNeighbors(arr, size);

    std::cout << "Count of elements with both smaller neighbors: " << result << std::endl;

    
    
    
    
    std::cout << "Task 5" << std::endl;

    std::vector<std::vector<char>> matrix = {
        {'b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'},
        {'y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'},
        {'y', 'e', 'y', 'e', 'y', 'w', 'w', 'b', 'b'},
        {'w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w'}
    };

    displayColors(matrix);
    
    
    
    return 0;
}
