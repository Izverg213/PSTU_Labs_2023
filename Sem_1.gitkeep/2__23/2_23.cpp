#include <iostream>
#include <cmath>
using namespace std;
// Посчитать количество элементов с максимальным значением в последовательности. 
// Последовательность элементов задана формулой общего члена $a_{ i } = sin(n + \frac{ i }{n})$
int main()
{
	float n, a, max;
	int i = 2;
	int count = 1;
	setlocale(LC_ALL, "RU");
    cin >> n;

    max = sin(n + 1 / n);

    while (i <= n)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
            count = 1;
        }
        else if (a == max)
        {
            count++;
        }
        i++;
    }
    cout << "Максимальный элемент: " << max << endl;
    cout << "Число элементов с этим значением: " << count << endl;
}

