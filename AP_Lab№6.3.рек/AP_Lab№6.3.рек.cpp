#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArray(int a[], int size, int index = 0) {
    if (index == size) return;
    a[index] = rand() % 46 - 10;
    generateArray(a, size, index + 1);
}

void Sort(int* a, const int size, int i) {
    if (i >= size - 1) return;

    int min = a[i];
    int imin = i;
    for (int j = i + 1; j < size; j++) {
        if (min > a[j]) {
            min = a[j];
            imin = j;
        }
    }
    a[imin] = a[i];
    a[i] = min;

    Sort(a, size, i + 1);
}

void Print(int* a, const int size, int i) {
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int main() {
    const int n = 10;
    int a[n];

    srand((unsigned)time(NULL));

    generateArray(a, n);

    Print(a, n, 0);

    Sort(a, n, 0);

    Print(a, n, 0);

    return 0;
}