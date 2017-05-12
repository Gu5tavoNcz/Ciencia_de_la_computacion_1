#include <iostream>
#include "Vector.h"
#include <math.h>

using namespace std;

void Vector::print()
{
    start.print();
    cout << " -> ";
    fin.print();
    cout << endl;
}

double Vector::modulo()
{
    return sqrt(pow(start.x-fin.x,2)+pow(start.y-fin.y,2));
}
