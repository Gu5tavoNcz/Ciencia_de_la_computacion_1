#include <iostream>
#include <allegro.h>

using namespace std;

#define MAXFILAS 30
#define MAXCOLUMNAS 51
BITMAP *buffer;
BITMAP *muro_o;
BITMAP *muro_v;
BITMAP *muro_ai,*muro_ad,*muro_bi,*muro_bd,*muro_a,*muro_b,*muro_i,*muro_d;

char mapa[MAXFILAS][MAXCOLUMNAS]={
    "(----------------------)  (----------------------)",
    "|  o |o o o XXXXX o o o| o| Xo o XXXXX o o o| o  |",
    "| XXX XXXXX XXXXX XXXXX|XX| XXXX XXXXX XXXXX XXX |",
    "|     dXXXX Xi         [--]oXX XXXXX XXXXX XXXoX |",
    "|      o|o   o o   o|o      X  o o   o|o      X  |",
    "|oXXXoXX XXXXXXXXXXX XXoXXXoXXXXXXXXX XXoXXXoX   |",
    "|    |XX    |XXX|    XX     XXX    |XXX|  XX     |",
    "|oXXXoXXXXXX XXX XXXXXXoXXXoXXXXX XXX XXXXXXoXXXo|",
    "| XXXoXX ooo|ooo|ooo XXoXXX Xooo|ooo|ooo XXoXXX X|",
    "[------) XXXXXXX  XXX XX|   o XXX  XXX    XX|   o ",
    "       | XXXaXXXaXXX XXoXXX XX XXXXXXXXXX XXoXXX |",
    "       | oo |ooo|ooo XXoXXXoXoo |ooo|ooo XXoXXXo |",
    "       |XXXXbXXXbXXXXXXoXXX XXXXX XXX XXXXXXoXXX |",
    "(------]X    XXX     XX     X XX  XXX     XX     |",
    "| XXXoXX XXXXXXXXXXX XXoXXX XXXXXXXXXX    XXoXXX |",
    "|oXXX| o| o o o o o |o |XXXoX o    o o o |o |XXXo|",
    "| XXXoXXXX XXXXXXXX XXX XXX XXXXX XXXXXX XXX XXX |",
    "|oXXXoXXXX          XXX XXXoX            XXX XXXo|",
    "|  o |o o  XXXXXXXX o o| o  X o  XXXXXXX o o| o  |",
    " o   |XX XXX  XXX   XXX    XX     XX|   o XXX     ",
    "| XXXoXX XXXXXXXXXXX XXoXXX XX XXXXXXXXXX XXoXXX |",
    "|oXXXoXX oo |ooo|ooo XXoXXXoXoo |ooo|ooo XXoXXXo |",
    "| XXXoXXXXXX XXX XXXXXXoXXX XXXXX XXX XXXXXXoXXX |",
    "|     XX     XXX     XX     X XX  XXX     XX     |",
    "| XXXoXX XXXXXXXXXXX XXoXXX XXXXXXXXXX    XXoXXX |",
    "|oXXX| o| o o o o o |o |XXXoX o    o o o |o |XXXo|",
    "| XXXoXXXX XXXXXXXX XXX XXX XXXXX XXXXXX XXX XXX |",
    "|oXXXoXXXX          XXX XXXoX            XXX XXXo|",
    "|  o |o o  XXXXXXXX o o| o  X o  XXXXXXX o o| o  |",
    "[------------------------------------------------]",
};

void dibujar_mapa()
{
    for(int i=0;i<MAXFILAS;i++)
    {
        for(int j=0;j<MAXCOLUMNAS;j++)
        {
            switch(mapa[i][j])
            {
            case '-':
                draw_sprite(buffer,muro_o,j*20,i*20);
                break;
            case '|':
                draw_sprite(buffer,muro_v,j*20,i*20);
                break;
            case '(':
                draw_sprite(buffer,muro_ai,j*20,i*20);
                break;
            case ')':
                draw_sprite(buffer,muro_ad,j*20,i*20);
                break;
            case '[':
                draw_sprite(buffer,muro_bi,j*20,i*20);
                break;
            case ']':
                draw_sprite(buffer,muro_bd,j*20,i*20);
                break;
            case 'a':
                draw_sprite(buffer,muro_a,j*20,i*20);
                break;
            case 'i':
                draw_sprite(buffer,muro_i,j*20,i*20);
                break;
            case 'b':
                draw_sprite(buffer,muro_b,j*20,i*20);
                break;
            case 'd':
                draw_sprite(buffer,muro_d,j*20,i*20);
                break;
            }
        }
    }
}
/*
void dibujar_mapa()
{
    for(int i=0;i<MAXFILAS;i++){
        for(int j=0;j<MAXCOLUMNAS;j++)
        {
            if(mapa[i][j]=='-')
            {
                draw_sprite(buffer,muro_o,j*20,i*20);
            }
            if(mapa[i][j]=='|')
            {
                draw_sprite(buffer,muro_v,j*20,i*20);
            }if(mapa[i][j]=='|')
            {
                draw_sprite(buffer,muro_v,j*20,i*20);
            }
            if(mapa[i][j]=='|')
            {
                draw_sprite(buffer,muro_v,j*20,i*20);
            }
            if(mapa[i][j]=='|')
            {
                draw_sprite(buffer,muro_v,j*20,i*20);
            }
            if(mapa[i][j]=='|')
            {
                draw_sprite(buffer,muro_v,j*20,i*20);
            }
        }
    }
}
*/
void pantalla()
{
    blit(buffer,screen,0,0,0,0,1000,600);
}

int main()
{
    allegro_init();
    install_keyboard();

    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,1000,600,0,0);

    buffer=create_bitmap(1000,600);
    muro_o=load_bitmap("muro_o.bmp",NULL);
    muro_v=load_bitmap("muro_v.bmp",NULL);
    muro_ai=load_bitmap("muro_ai.bmp",NULL);
    muro_ad=load_bitmap("muro_ad.bmp",NULL);
    muro_bi=load_bitmap("muro_bi.bmp",NULL);
    muro_bd=load_bitmap("muro_bd.bmp",NULL);
    muro_a=load_bitmap("muro_a.bmp",NULL);
    muro_b=load_bitmap("muro_b.bmp",NULL);
    muro_i=load_bitmap("muro_i.bmp",NULL);
    muro_d=load_bitmap("muro_d.bmp",NULL);
    while(!key[KEY_ESC])
    {
        dibujar_mapa();
        pantalla();
    }
}

END_OF_MAIN();
