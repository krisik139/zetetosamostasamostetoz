#include "function.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251>null");
    srand(time(0));

    const int SIZE = 10;
    int array[SIZE];

    cout << "Заповнення масиву..." << endl;
    fill(array, SIZE);

    cout << "Виведення масиву: ";
    show(array, SIZE);

    cout << "Мінімальний елемент: " << findMin(array, SIZE) << endl;
    cout << "Максимальний елемент: " << findMax(array, SIZE) << endl;

    cout << "Редагуємо елемент під індексом 0 (значення 999)..." << endl;
    edit(array, 0, 999);
    cout << "Масив після редагування: ";
    show(array, SIZE);

    cout << "Сортування масиву..." << endl;
    sortArr(array, SIZE);
    cout << "Відсортований масив: ";
    show(array, SIZE);

    return 0;
}
