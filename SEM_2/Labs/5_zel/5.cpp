#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int i, j, n, m, a[10][10], mass[10][10];
	cout << "Введите число сток" << endl;
	cin >> n;
	cout << "Введите число столбцов" << endl;;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			mass[i][j] = a[j][i];
		}
	}
	cout << "Исходная матрица" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout  << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "транспонированная матрица" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << mass[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			if (mass[i][j] != a[i][j]) { cout << "Не  симметрическая"; return 0; }
	
		}

	}
	
	return 0;
}
