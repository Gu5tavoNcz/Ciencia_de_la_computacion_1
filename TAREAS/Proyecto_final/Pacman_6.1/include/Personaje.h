#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <allegro.h>
#include <iostream>

using namespace std;



class Personaje
{
protected:
    BITMAP *personaje_imagen,*personaje,*buff3r;
    int x,y,sentido;
public:
    Personaje(BITMAP *p_i,BITMAP *p);
    virtual int get_x_y(int,int,int,BITMAP*);
    virtual void dibujar_personaje();

};


class Pacman:public Personaje
{
public:
    Pacman(BITMAP *p_i,BITMAP *p);
    int get_x_y(int,int,int,BITMAP*);
    void dibujar_personaje();


};
/*
class Fantasma:public Personaje
{
    string color;
public:
    Fantasma(BITMAP *f_i,BITMAP *f,string);
    int get_x_y(int,int,int,BITMAP*);
    void dibujar_personaje();
    virtual void chocar_pacman();
    virtual void mover_fantasma();

};
*/
#endif // PERSONAJE_H
