/*
 * Author: Abdusamad Nigmatov
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_1.h"
using namespace std;

// Function to perform Bubble Sort on a vector of strings
void bubbleSort(vector<string> &books) {
    int n = books.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent book titles and swap if they are in the wrong order
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}