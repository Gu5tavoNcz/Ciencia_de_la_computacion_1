#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point punto1(2,3);
    Point punto2;
    PointArray pa1(&punto1,10);
    cout<<punto1.getX();
    cout<<punto2.getY();
}
