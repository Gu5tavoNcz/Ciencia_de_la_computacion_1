#include <iostream>
#include <allegro.h>
#include "Personaje.h"
#include "mapa.h"

using namespace std;

BITMAP *muerte_imagen;
BITMAP *pacman_imagen,*pacman;
BITMAP *enemigo_imagen,*enemigo;

int direccion=4;
int d_anterior,anterior_x,anterior_y;
int fan_direccion=0;
int f_x=ti*14,f_y=ti*14;

void funciones_allegro()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,ti*(MAXCOLUMNAS-1),ti*MAXFILAS,0,0);
}

template<class P>
P atajos(P &px)
{
    if(px<= 0)
        px=ti*(MAXCOLUMNAS-2);
    else if(px>=ti*(MAXCOLUMNAS-2))
        px=0;

}

void dibujar_fantasma()
{
    blit(enemigo_imagen,enemigo,0,0,0,0,ti,ti);//cual imagen,desde donde,dimencion
    draw_sprite(buffer,enemigo,f_x,f_y);
}

void chocar_pacman()
{
    if(y==f_y && x==f_x || f_y==anterior_y && f_x==anterior_x)
    {
        for(int j=0;j<=5;j++)
        {
            clear(pacman);
            clear(buffer);
            dibujar_mapa();
            blit(muerte_imagen,pacman,j*33,0,0,0,ti,ti);
            draw_sprite(buffer,pacman,x,y);
            pantalla();
            rest(80);
        }
        direccion=4;
        x=ti*25;
        y=ti*26;
    }
}

void fantasma()
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

void teclado_direcciones(Personaje gustavo)
{
    while(!key[KEY_ESC])
    {
        d_anterior=direccion;
        anterior_x=x;
        anterior_y=y;

        if(key[KEY_LEFT]) direccion=0;
        else if(key[KEY_RIGHT]) direccion=1;
        else if(key[KEY_UP]) direccion=2;
        else if(key[KEY_DOWN]) direccion=3;
        if(direccion==0)
        {
            if(mapa[y/ti][(x-ti)/ti]==' ' || mapa[y/ti][(x-ti)/ti]=='.') x-=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==1)
        {
            if(mapa[y/ti][(x+ti)/ti]==' ' || mapa[y/ti][(x+ti)/ti]=='.') x+=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==2)
        {
            if(mapa[(y-ti)/ti][x/ti]==' ' || mapa[(y-ti)/ti][x/ti]=='.') y-=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==3)
        {
            if(mapa[(y+ti)/ti][x/ti]==' ' || mapa[(y+ti)/ti][x/ti]=='.') y+=ti;
            else
                direccion=d_anterior;
        }

        atajos(x);
        clear(buffer);
        dibujar_mapa();
        gustavo.get_x_y(x,y,direccion,buffer);
        gustavo.dibujar_personaje();
        //enemigo1.get_x_y(f_x,f_y,fan_direccion,buffer);
        //enemigo1.dibujar_personaje();

        fantasma();
        pantalla();

        rest(100);
    }
}


int main()
{
    funciones_allegro();
    muro();

    buffer=create_bitmap(ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
    pacman_imagen=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(ti,ti);
    enemigo=create_bitmap(ti,ti);
    enemigo_imagen=load_bitmap("enemigo.bmp",NULL);
    muerte_imagen=load_bitmap("muerte.bmp",NULL);

    Pacman gustavo(pacman_imagen,pacman);
    Fantasma enemigo1(enemigo_imagen,enemigo,"rojo");
    teclado_direcciones(gustavo);

}

END_OF_MAIN();
