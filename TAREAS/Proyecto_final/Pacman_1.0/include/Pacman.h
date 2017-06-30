#ifndef PACMAN_H
#define PACMAN_H
#include <iostream>

#include <allegro.h>

using namespace std;


class Pacman
{
protected:
    BITMAP *pacman_imagen,*pacman;
public:
    Pacman();
    void dibujar_pacman(int,int,int,BITMAP*);
};

#endif // PACMAN_H
