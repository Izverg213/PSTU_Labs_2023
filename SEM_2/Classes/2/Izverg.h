#pragma once
#include <iostream>
#include <string>

using namespace std;
class Izverg
{
    string ln_fn_p;
    string post;
    double salary;

public:
    Izverg(string, string, double);

    Izverg();

    Izverg(const Collaborator&);

    ~Izverg();

    string get_fio();
    double get_salary();
    string get_post();
    void set_fio(string);
    void set_salary(double);
    void set_post(string);

    void show();


};

