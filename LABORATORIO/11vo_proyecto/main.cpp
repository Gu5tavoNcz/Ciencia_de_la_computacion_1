#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Camion.h"
#include "Moto.h"

using namespace std;

int main()
{
    Auto car1("AO894",2010,"Deportivo");
    Auto car2("TV8934789",2012,"Camioneta");
    Auto car3("AO-1234894",2016,"electrico");
    Moto mot1("34748df7",2017,"lineal");
    cout<<car1.getEstilo()<<endl;
    cout<<mot1.getLicencia()<<endl;
    cout<<mot1.getColor();

}
