#include <iostream>
#include "Vector.h"

using namespace std;

void Vector::print()
{
    start.print();
    cout << " -> ";
    fin.print();
    cout << endl;
}

