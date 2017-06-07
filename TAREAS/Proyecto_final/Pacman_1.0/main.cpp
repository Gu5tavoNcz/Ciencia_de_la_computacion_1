#include <iostream>
#include <allegro.h>

using namespace std;

#define MAXFILAS 30
#define MAXCOLUMNAS 51
BITMAP *buffer;
BITMAP *roca;

char mapa[MAXFILAS][MAXCOLUMNAS]={
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    "X  o |o o o XXXXX o o o| o  Xo o XXXXX o o o| o  X",
    "X XXX XXXXX XXXXX XXXXX XXX XXXX XXXXX XXXXX XXX X",
    "XoXXX XXXXX XXXXX XXXXX XXXoXX XXXXX XXXXX XXXoX X",
    "X      o|o   o o   o|o      X  o o   o|o      X  X",
    "XoXXXoXX XXXXXXXXXXX XXoXXXoXXXXXXXXX XXoXXXoX   X",
    "X    |XX    |XXX|    XX     XXX    |XXX|  XX     X",
    "XoXXXoXXXXXX XXX XXXXXXoXXXoXXXXX XXX XXXXXXoXXXoX",
    "X XXXoXX ooo|ooo|ooo XXoXXX Xooo|ooo|ooo XXoXXX XX",
    " o   |XX XXXXXXX  XXX XX|   o XXX  XXX    XX|   o ",
    "X XXXoXX XXXXXXXXXXX XXoXXX XX XXXXXXXXXX XXoXXX X",
    "XoXXXoXX oo |ooo|ooo XXoXXXoXoo |ooo|ooo XXoXXXo X",
    "X XXXoXXXXXX XXX XXXXXXoXXX XXXXX XXX XXXXXXoXXX X",
    "X     XX     XXX     XX     X XX  XXX     XX     X",
    "X XXXoXX XXXXXXXXXXX XXoXXX XXXXXXXXXX    XXoXXX X",
    "XoXXX| o| o o o o o |o |XXXoX o    o o o |o |XXXoX",
    "X XXXoXXXX XXXXXXXX XXX XXX XXXXX XXXXXX XXX XXX X",
    "XoXXXoXXXX          XXX XXXoX            XXX XXXoX",
    "X  o |o o  XXXXXXXX o o| o  X o  XXXXXXX o o| o  X",
    " o   |XX XXX  XXX   XXX    XX     XX|   o XXX     ",
    "X XXXoXX XXXXXXXXXXX XXoXXX XX XXXXXXXXXX XXoXXX X",
    "XoXXXoXX oo |ooo|ooo XXoXXXoXoo |ooo|ooo XXoXXXo X",
    "X XXXoXXXXXX XXX XXXXXXoXXX XXXXX XXX XXXXXXoXXX X",
    "X     XX     XXX     XX     X XX  XXX     XX     X",
    "X XXXoXX XXXXXXXXXXX XXoXXX XXXXXXXXXX    XXoXXX X",
    "XoXXX| o| o o o o o |o |XXXoX o    o o o |o |XXXoX",
    "X XXXoXXXX XXXXXXXX XXX XXX XXXXX XXXXXX XXX XXX X",
    "XoXXXoXXXX          XXX XXXoX            XXX XXXoX",
    "X  o |o o  XXXXXXXX o o| o  X o  XXXXXXX o o| o  X",
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
};

void dibujar_mapa()
{
    for(int i=0;i<MAXFILAS;i++){
        for(int j=0;j<MAXCOLUMNAS;j++)
        {
            if(mapa[i][j]=='X')
            {
                draw_sprite(buffer,roca,j*20,i*20);
            }
        }
    }
}

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
    roca=load_bitmap("roca_20.bmp",NULL);
    while(!key[KEY_ESC])
    {
        dibujar_mapa();
        pantalla();
    }
}

END_OF_MAIN();
