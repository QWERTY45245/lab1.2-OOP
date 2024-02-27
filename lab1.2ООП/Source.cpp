#include <iostream>
#include "Лічильник.h"
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int min_val, max_val, init_val;

    cout << "Введіть мінімальне значення для лічильника: ";
    cin >> min_val;
    cout << "Введіть максимальне значення для лічильника: ";
    cin >> max_val;
    cout << "Введіть початкове значення лічильника: ";
    cin >> init_val;

    Лічильник myCounter(min_val, max_val, init_val);

    cout << "Поточне значення лічильника: " << myCounter.getCurrentValue() << endl;

    myCounter.increase();
    cout << "Після збільшення поточне значення лічильника: " << myCounter.getCurrentValue() << endl;

    return 0;
}
