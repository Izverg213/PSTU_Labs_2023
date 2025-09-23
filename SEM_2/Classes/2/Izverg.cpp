#include<iostream>
#include "Izverg.h"
Izverg::Izverg(string fio,string position, double pay) {
    ln_fn_p = fio;
    post = position;
    salary = pay;
}
Izverg::Izverg() {
    ln_fn_p = "";
    post = "";
    salary = 0;
}
Izverg::Izverg(const Collaborator& p) {
    ln_fn_p = p.ln_fn_p;
    post = p.post;
    salary = p.salary;
}
Izverg::~Izverg() {}

string Izverg::get_fio() {
    return ln_fn_p;
}

string Izverg::get_post() {
    return post;
}
double Izverg::get_salary() {
    return salary;
}

void Izverg::set_fio(string fio) {
    ln_fn_p = fio;
}

void Izverg::set_post(string position) {
    post = position;
}
void Izverg::set_salary(double zp) {
    salary = zp;
}
void Izverg::show() {
    cout << "\nÔÈO ñîòðóäíèêà: " << ln_fn_p;
    cout << "\nÇàðïëàòà: " << salary;
    cout << "\nïîçèöèÿ: " << post;
}
