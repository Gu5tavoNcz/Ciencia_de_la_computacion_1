#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
public:
    Complejo(double a,double b);
    Complejo suma(Complejo n);
    Complejo resta(Complejo n);
    Complejo escalar(double n);
    Complejo multiplicacion(Complejo n);
    void imprimir();
private:
    double r,i;
};

#endif // COMPLEJO_H
