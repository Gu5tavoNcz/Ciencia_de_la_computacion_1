#include "Personaje.h"

Personaje::Personaje(BITMAP *p_i,BITMAP *p):personaje_imagen(p_i),personaje(p){}

int Personaje::get_x_y(int mi_x,int mi_y,int mi_direccion,BITMAP* mi_buffer)
{
    x=mi_x;
    y=mi_y;
    sentido=mi_direccion;
    buff3r=mi_buffer;
}

void Personaje::dibujar_personaje()
{
    blit(personaje_imagen,personaje,sentido*20,0,0,0,20,20);//cual imagen,desde donde,dimencion
    draw_sprite(buff3r,personaje,x,y);
    //clear(personaje);
}



Pacman::Pacman(BITMAP *p_i,BITMAP *p):Personaje(p_i,p){}

int Pacman::get_x_y(int mi_x,int mi_y,int mi_direccion,BITMAP* mi_buffer)
{
    x=mi_x;
    y=mi_y;
    sentido=mi_direccion;
    buff3r=mi_buffer;
}

void Pacman::dibujar_personaje()
{
    Personaje::dibujar_personaje();
}


Fantasma::Fantasma(BITMAP *p_i,BITMAP *p,string mi_color):Personaje(p_i,p)
{
    color=mi_color;
}

int Fantasma::get_x_y(int mi_x,int mi_y,int mi_direccion,BITMAP* mi_buffer)
{
    x=mi_x;
    y=mi_y;
    sentido=mi_direccion;
    buff3r=mi_buffer;
}

void Fantasma::dibujar_personaje()
{
    Personaje::dibujar_personaje();
}
/*
void mover_fantasma()
{

    dibujar_fantasma();
    chocar_pacman();
    if(fan_direccion==0)
    {
        if(mapa[f_y/ti][(f_x-ti)/ti]==' ' || mapa[f_y/ti][(f_x-ti)/ti]=='.') f_x-=ti;
        else fan_direccion=rand()%4;
    }
    if(fan_direccion==1)
    {
        if(mapa[f_y/ti][(f_x+ti)/ti]==' ' || mapa[f_y/ti][(f_x+ti)/ti]=='.') f_x+=ti;
        else fan_direccion=rand()%4;
    }
    if(fan_direccion==2)
    {
        if(mapa[(f_y-ti)/ti][f_x/ti]==' ' || mapa[(f_y-ti)/ti][f_x/ti]=='.') f_y-=ti;
        else fan_direccion=rand()%4;
    }
    if(fan_direccion==3)
    {
        if(mapa[(f_y+ti)/ti][f_x/ti]==' ' || mapa[(f_y+ti)/ti][f_x/ti]=='.') f_y+=ti;
        else fan_direccion=rand()%4;
    }
    atajos(f_x);
}
*/
