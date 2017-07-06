#ifndef F_ROJO_H
#define F_ROJO_H
#include "Personaje.h"

class Fantasma:public Personaje
{
    BITMAP *muerte_imagen;
public:
    Fantasma(int,int,BITMAP*);
    virtual void actualizar_x_y(int,int,int);
    virtual void dibujar_personaje();
    virtual void mover_personaje(){}
    virtual void impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc);
};

class F_rojo:public Fantasma
{
    public:
    F_rojo(int,int,BITMAP*);
    void actualizar_x_y(int,int,int);
    void dibujar_personaje();
    void mover_personaje(char mapa[][43]);
    void impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc);
};

class F_naranja:public Fantasma
{
    public:
    F_naranja(int,int,BITMAP*);
    void actualizar_x_y(int,int,int);
    void dibujar_personaje();
    void mover_personaje(char mapa[][43]);
    void impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc);
};

class F_celeste:public Fantasma
{
    public:
    F_celeste(int,int,BITMAP*);
    void actualizar_x_y(int,int,int);
    void dibujar_personaje();
    void mover_personaje(char mapa[][43]);
    void impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc);
};

class F_rosa:public Fantasma
{
    public:
    F_rosa(int,int,BITMAP*);
    void actualizar_x_y(int,int,int);
    void dibujar_personaje();
    void mover_personaje(char mapa[][43]);
    void impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc);
};

#endif // F_ROJO_H
