#include "Money.h"
#include <iostream>
using namespace std;

int Money::get_rub() const { return rub; }
int Money::get_copeck() const { return copeck; }


void Money::set_rub(long r) { rub = r; }
void Money::set_copeck(int c) { copeck = c; }

  
Money& Money::operator= (const Money& m) {
    if (this != &m) {
        rub = m.rub;
        copeck = m.copeck;
    }
    return *this;
}


Money& Money::operator++ () {
    ++copeck;
    if (copeck >= 100) {
        ++rub;
        copeck -= 100;
    }
    return *this;
}


Money Money::operator++ (int) {
    Money temp = *this;
    ++(*this);
    return temp;
}

// Îïåðàòîð ñëîæåíèÿ
Money Money::operator+ (const Money& m) {
    Money result = *this;
    result.copeck += m.copeck;
    result.rub += m.rub + result.copeck / 100;
    result.copeck %= 100;
    return result;
}


bool Money::operator== (const Money& m) const {
    return (rub == m.rub) && (copeck == m.copeck);
}

bool Money::operator!= (const Money& m) const {
    return !(*this == m);
}


istream& operator>>(istream& in, Money& m) {
    in >> m.rub >> m.copeck;
    return in;
}

ostream& operator<<(ostream& out, const Money& m) {
    out << m.rub << " ðóá. " << m.copeck << " êîï.";
    return out;
}
