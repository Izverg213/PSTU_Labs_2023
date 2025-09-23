#pragma once
#include <iostream>

using namespace std;

// Àáñòðàêòíûé áàçîâûé êëàññ Object
class Object {
public:
    virtual void Show() const = 0; // ×èñòî âèðòóàëüíàÿ ôóíêöèÿ
    virtual ~Object() {}
};
