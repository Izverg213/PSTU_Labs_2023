#include<iostream>
#include "Izverg.h"
using namespace std;

Izverg make_payday() {
    string fio;
    string post;
    double zp;

    cout << "Введите ФИО работника\n";
    getline(cin, fio);

    cout << "Введите зарплату работника\n";
    cin >> zp;

    cout << "Введите должность\n";
    getline(cin, post);

    Izverg p(fio, post, zp);
    return p;
}

void print_Izverg(Izverg p) {
    p.show();
}

int  main() {
    system("chcp 1251>null");
    Izverg p1;
    p1.show();
    cout << "\n";

    Izverg p2("Костылёв s1mple Олегович", "Скамейка запасных", 200000);
    p2.show();
    cout << "\n";
    Izverg p3(p2);
    p3.show();
    p3.set_fio("Крышковец donk Данил");
    p3.set_post("рифлер");
    p3.set_salary(250000);
    print_Izverg(p3);
    cout << "\n\n";
    p1 = make_payday();
    p1.show();
    cout << "\n";

}
