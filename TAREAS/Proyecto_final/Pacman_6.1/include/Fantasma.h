#ifndef FANTASMA_H
#define FANTASMA_H
#include "Personaje.h"


class Fantasma
{
protected:
    BITMAP *enemigo_imagen,*enemigo,*buff3r;
    int x,y,sentido;
public:
    Fantasma(int mi_x,int mi_y,BITMAP* mi_buffer);
    //int getSet(int,int,int,BITMAP*);
    ////virtual void dibujar_personaje();
    //virtual void chocar_pacman(int,int,int,int,BITMAP*,BITMAP*,int);
    //virtual void mover_fantasma();

};

#endif // FANTASMA_H
