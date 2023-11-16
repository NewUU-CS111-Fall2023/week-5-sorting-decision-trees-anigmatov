/*
 * Author: Abdusamad Nigmatov
 * Date: 16.11.2023
 * Name: main.cpp
 */

#include "task_2.h"
using namespace std;

void selectionSort(vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the vector
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(denominations[i], denominations[minIndex]);
    }
}