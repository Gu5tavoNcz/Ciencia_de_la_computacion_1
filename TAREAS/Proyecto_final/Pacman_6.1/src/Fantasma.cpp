#include "Fantasma.h"
#include "mapa.h"

Fantasma::Fantasma(int mi_x,int mi_y,BITMAP* mi_buffer):x(mi_x),y(mi_y),buff3r(mi_buffer)
{
    sentido=rand()%4;
    enemigo=create_bitmap(20,20);
    enemigo_imagen=load_bitmap("enemigo.bmp",NULL);
}
/*
void Fantasma::dibujar_personaje()
{
    blit(enemigo_imagen,enemigo,0,0,0,0,20,20); //cual imagen,desde donde,dimencion
    draw_sprite(buff3r,enemigo,x,y);
}

void Fantasma::chocar_pacman(int mi_x,int mi_y,int anterior_x,int anterior_y,BITMAP* pacman,BITMAP* muerte_imagen,int mi_direccion)
{
    if(mi_y==y && mi_x==x || y==anterior_y && x==anterior_x)
    {
        for(int j=0;j<=5;j++)
        {
            clear(pacman);
            clear(buff3r);
            dibujar_mapa();
            blit(muerte_imagen,pacman,j*20,0,0,0,20,20);
            draw_sprite(buff3r,pacman,x,y);
            blit(buff3r,screen,0,0,0,0,20*50,20*30);
            rest(80);
        }
        mi_direccion=4;
        x=ti*25;
        y=ti*26;
    }
}
*/
