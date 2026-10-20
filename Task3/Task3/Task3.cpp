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
    int* C = new int[(M < N) ? M : N];

    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < M; i++)
        cin >> A[i];

    cout << "Введіть елементи масиву B: ";
    for (int i = 0; i < N; i++)
        cin >> B[i];

    int sizeC = 0;

    for (int i = 0; i < M; i++) {
        bool foundB = false;
        bool foundC = false;

        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                foundB = true;
                break;
            }
        }

        for (int j = 0; j < sizeC; j++) {
            if (A[i] == C[j]) {
                foundC = true;
                break;
            }
        }

        if (foundB && !foundC) {
            C[sizeC] = A[i];
            sizeC++;
        }
    }

    cout << "Спільні елементи: ";
    if (sizeC == 0)
        cout << "Немає спільних елементів";
    else {
        for (int i = 0; i < sizeC; i++)
            cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}