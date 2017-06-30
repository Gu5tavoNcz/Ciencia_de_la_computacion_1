#include "Personaje.h"

Personaje::Personaje(BITMAP *p_i,BITMAP *p):personaje_imagen(p_i),personaje(p){}

void Personaje::dibujar_personaje(int direccion,int mi_x,int mi_y,BITMAP* buffer)
{
    blit(personaje_imagen,personaje,direccion*20,0,0,0,20,20);//cual imagen,desde donde,dimencion
    draw_sprite(buffer,personaje,mi_x,mi_y);
    //clear(personaje);
}

Pacman::Pacman(BITMAP *p_i,BITMAP *p,int mi_x,int mi_y):Personaje(p_i,p),x(mi_x),y(mi_y){}
