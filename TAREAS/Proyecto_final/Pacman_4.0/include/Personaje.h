#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <allegro.h>


class Personaje
{
protected:
    BITMAP *personaje_imagen,*personaje;
public:
    Personaje(BITMAP *p_i,BITMAP *p);
    void dibujar_personaje(int,int,int,BITMAP*);
};

class Pacman:public Personaje
{
    int x,y;
public:
    Pacman(BITMAP *p_i,BITMAP *p,int mi_x,int mi_y);

};

#endif // PERSONAJE_H
