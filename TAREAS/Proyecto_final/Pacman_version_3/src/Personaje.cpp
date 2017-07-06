#include "Personaje.h"


Personaje::Personaje(int mi_x,int mi_y,BITMAP* mi_buffer):x(mi_x),y(mi_y),buffer(mi_buffer){}

void Personaje::dibujar_personaje(){}

void Personaje::mover_personaje(char mapa[][43]){}

void Personaje::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc){}


Pacman::Pacman(int mi_x,int mi_y,BITMAP* mi_buffer):Personaje(mi_x,mi_y,mi_buffer)
{
    personaje=create_bitmap(30,30);
    personaje_imagen=load_bitmap("pacman.bmp",NULL);
}

void Pacman::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    x=mi_x;
    y=mi_y;
    direccion=mi_direccion;
}

void Pacman::dibujar_personaje()
{
    blit(personaje_imagen,personaje,direccion*30,0,0,0,30,30);
    draw_sprite(buffer,personaje,x,y);
}

void Pacman::mover_personaje(char mapa[][43])
{

}

