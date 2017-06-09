#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point punto1(2,3);
    Point punto2;
    PointArray pa1(&punto1,10);

    pa1.insertar(1,punto2);
    cout<<pa1.getSize()<<endl;
    cout<<punto1.getX()<<endl;
    cout<<punto2.getY()<<endl;
    cout<<pa1.get(0);

}
