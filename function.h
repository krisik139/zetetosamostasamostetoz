#ifndef FUNCTION_H
#define FUNCTION_H

#define INTEGER 

void fillInt(int* arr, int size);
void showInt(const int* arr, int size);
int minInt(const int* arr, int size);
int maxInt(const int* arr, int size);
void sortInt(int* arr, int size);
void editInt(int* arr, int index, int newValue);

#ifdef INTEGER
#define fill fillInt
#define show showInt
#define findMin minInt
#define findMax maxInt
#define sortArr sortInt
#define edit editInt
#endif

#endif