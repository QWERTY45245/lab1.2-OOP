#include <iostream>
#include "˳�������.h"
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int min_val, max_val, init_val;

    cout << "������ �������� �������� ��� ���������: ";
    cin >> min_val;
    cout << "������ ����������� �������� ��� ���������: ";
    cin >> max_val;
    cout << "������ ��������� �������� ���������: ";
    cin >> init_val;

    ˳������� myCounter(min_val, max_val, init_val);

    cout << "������� �������� ���������: " << myCounter.getCurrentValue() << endl;

    myCounter.increase();
    cout << "ϳ��� ��������� ������� �������� ���������: " << myCounter.getCurrentValue() << endl;

    return 0;
}
