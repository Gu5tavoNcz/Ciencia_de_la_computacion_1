#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <allegro.h>



class Personaje
{
protected:
    BITMAP *personaje,*personaje_imagen,*buffer;
    int direccion,x,y;
public:
    Personaje(int,int,BITMAP*);
    virtual void dibujar_personaje()=0;
    virtual void mover_personaje() = 0;
};

class Pacman:public Personaje
{
public:
    Pacman(int,int,BITMAP*);
    void actualizar_x_y(int,int,int);
    void dibujar_personaje();
    void mover_personaje();
};


#endif // PERSONAJE_H
