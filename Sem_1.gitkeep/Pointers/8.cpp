#include <iostream>
using namespace std;
// Написать программу, которая принимает некоторую строку и 2 символа (большую букву и строчную), 
// после чего подсчитывает число заданных символов в строке и всех остальных, а также общее число символов в строке.
int main()
{
        setlocale(LC_ALL, "ru_RU");
        int V, B, N, S;
        V = B = N = S = 0;
        string st;
        char A, a;
        cin >> st;
        cin >> A;
        cin >> a;
        const char* pt = st.c_str();
        for (int i = 0; i < st.length(); i++) {
            if (*pt == A) { V++; }
            else if (*pt == a) { B++; }
            else { N++; }
            pt++;
        }
        total = V + B + N;
        cout << A << V << endl;
        cout << a << B << endl;
        cout << N << endl;
        cout << S;
        return 0;
    }
}