#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr, n);

    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}