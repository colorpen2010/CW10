#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int M;

    cout << "Введіть розмір масиву: ";
    cin >> M;

    if (M <= 0) {
        cout << "Неправильний розмір масиву";
        return 0;
    }

    int* A = new int[M];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < M; i++)
        cin >> A[i];

    int choice;

    cout << "\n1 - Видалити парні числа";
    cout << "\n2 - Видалити непарні числа";
    cout << "\nВаш вибір: ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Неправильний вибір";
        delete[] A;
        return 0;
    }

    int size = 0;

    for (int i = 0; i < M; i++) {
        if (choice == 1 && A[i] % 2 != 0) {
            A[size] = A[i];
            size++;
        }
        else if (choice == 2 && A[i] % 2 == 0) {
            A[size] = A[i];
            size++;
        }
    }

    cout << "Масив після видалення: ";
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";

    if (size == 0)
        cout << "Масив порожній";

    delete[] A;

    return 0;
}