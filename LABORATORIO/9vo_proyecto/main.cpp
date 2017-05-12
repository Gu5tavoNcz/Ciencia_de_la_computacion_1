#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector vec;
    vec.start.x = 2;
    vec.start.y = 2;
    vec.fin.x = 5;
    vec.fin.y = 5;
    vec.print();

    return 0;
}
