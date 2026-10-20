#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int M, N;

    cout << "Введіть розмір масиву A: ";
    cin >> M;
    cout << "Введіть розмір масиву B: ";
    cin >> N;

    if (M <= 0 || N <= 0) {
        cout << "Неправильний розмір масиву";
        return 0;
    }

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N];

    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < M; i++)
        cin >> A[i];

    cout << "Введіть елементи масиву B: ";
    for (int i = 0; i < N; i++)
        cin >> B[i];

    for (int i = 0; i < M; i++)
        C[i] = A[i];

    for (int i = 0; i < N; i++)
        C[M + i] = B[i];

    cout << "Об'єднаний масив: ";
    for (int i = 0; i < M + N; i++)
        cout << C[i] << " ";

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}