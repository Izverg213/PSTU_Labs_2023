#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int n, f;
    cin >> n;
    f = sqrt(n);
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < f; j++)
        {
            cout << '* ';
        }
        cout << endl;
        }
}
