#include <iostream>
#include "MEstudiante.h"
#include "Vector.h"

using namespace std;

void imprimirVector(VectorPunto v){
    cout<<"Puntos de inicio: "<<v.inicio.x<<","<<v.inicio.y<<endl;
    cout<<"Puntos de fin: "<<v.fin.x<<","<<v.fin.y<<"\n"<<endl;
}

int main()
{

    MEstudiante alumno1;
    alumno1.nombre="Gustavo";
    cout<<alumno1.nombre<<"\n"<<endl;
    //------------------
    Vector Vec1;
    Vec1.star(2.6,4.0);
    Vec1.fin(7.4,9.2);
    cout<<"Vector 1"<<endl;
    Vec1.mostarPuntos();
    //------------------
    VectorPunto Vec2;
    Vec2.inicio.x=6.6;
    Vec2.inicio.y=2.3;
    Vec2.fin.x=9.6;
    Vec2.fin.y=8.2;
    cout<<"Vector 2\n"<<Vec2.inicio.x<<","<<Vec2.inicio.y<<endl;
    cout<<Vec2.fin.x<<","<<Vec2.fin.y<<"\n"<<endl;

    VectorPunto Vec3;
    Vec3.inicio=Vec2.inicio;
    Vec3.inicio.x = 7.0;
    imprimirVector(Vec3);
}
