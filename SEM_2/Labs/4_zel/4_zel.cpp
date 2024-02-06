#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x[200], i, n, k, j, r;
    srand((unsigned)time(NULL));
    cout << "Размерность массива: " << endl;
    cin >> n;
    cout << "Массив:" << endl << "   " << endl;
    for (i = 0; i < n; i++) { x[i] = rand() % 99; cout << x[i] << "  "; }



    cout << endl << "Какое значение нужно удалить? ";
    cin >> k;

    cout << endl << ":" << endl;
    for (i = 0; i < n; i++)
    {
        if (x[i] == k) { for (j = i; j < n; j++) { x[j] = x[j + 1]; } n--; x[j] = -1; i--; }
    }
    for (i = 0; i < n; i++) { cout << x[i] << "  "; }
    _getch();

    cout << endl << "массив 2";

    for (i = 0; i < n; i++) { if (x[i] % 2 == 0) { n++; for (r = n; r > i - 1; r--) { x[r] = x[r - 1]; }x[i] = 1; i++; } }

    for (i = 0; i < n; i++) { cout << x[i] << "  "; }
}

