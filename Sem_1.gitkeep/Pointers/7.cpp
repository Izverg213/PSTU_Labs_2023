#include <iostream>
//»зменение значение переменной через указатель
int main()
{
	int n;
	int* ptr = &n;

	cin >> *ptr;

	cout << n;
}