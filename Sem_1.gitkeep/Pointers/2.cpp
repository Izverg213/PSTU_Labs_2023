#include <iostream>
using namespace std;
// �������� ���� ����� ����� ����� ���������
int main()
{
	setlocale(LC_ALL, "RU");
	int a, b, sum = 0;
	int *ptr1, *ptr2;
	cout << "�������� ����� ������� ����� �������";
	cin >> a >> b;
	ptr1 = &a;
	ptr2 = &b;
	sum = *ptr1 + *ptr2;
	cout << "sum - " << sum << endl;
	return 0;
}