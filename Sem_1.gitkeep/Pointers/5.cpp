#include <iostream>
using namespace std;
//��������� ��������� ����� N ����� ���������
unsigned int n, fact = 1;
unsigned int* f = &fact;
setlocale(LC_ALL, "RU");
cin >> n;
for (int i = 1; i <= n; i++) {
    *f *= i;
}
cout << "factorial - " << n << " raven - " << fact << endl;