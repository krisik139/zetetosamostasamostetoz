#include "function.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void fillInt(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void showInt(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int minInt(const int* arr, int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

int maxInt(const int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

void sortInt(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void editInt(int* arr, int index, int newValue) {
    arr[index] = newValue;
}