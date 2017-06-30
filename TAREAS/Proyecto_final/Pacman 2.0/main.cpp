#include <iostream>
#include <allegro.h>
#include "Pacman.h"

using namespace std;

#define MAXFILAS 30
#define MAXCOLUMNAS 51
BITMAP *buffer;
BITMAP *roca;
BITMAP *muro_o,*muro_v,*muro_ai,*muro_ad,*muro_bi,*muro_bd,*muro_a,*muro_b,*muro_i,*muro_d;
BITMAP *comida;

int direccion=0,x=20*25,y=20*26;

void funciones_allegro()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,1000,600,0,0);
}

char mapa[MAXFILAS][MAXCOLUMNAS]={
    "(----------------------)  (----------------------)",
    "|......................|  |......................|",
    "|.(------d.a.(-------).|  |.(-------).a i------).|",
    "|.|........|.|...a...|.[--].|...a...|.|........|.|",
    "|.| i-d id |.[-d.|.i-]......[-d |.i-].|.id i-d.|.|",
    "|.|........|.....|..............|.....|........|.|",
    "|.[------d b i-d |.i----------d.| i-d b i------].|",
    "|................|..............|................|",
    "[-----)...i----d b i-d i-d i-d .b i----d...(-----]",
    "      |.a................................a.|      ",
    "      |.|.a.....i----------------d.....a.|.|      ",
    "      |.|.|............................|.|.|      ",
    "------].|.|.(-).XXXXXXX    XXXXXXX.(-).|.|.[------",
    " .......b.b.|.|.X                X.| |.b.b....... ",
    "--------d...b.b.X                X b b...i--------",
    " .......a.a.....X                X.....a.a....... ",
    "------).|.|.a a X                X.a.a.|.|.(------",
    "      |.|.b.| b XXXXXXXXXXXXXXXXXX.b.|.b.|.|      ",
    "      |.|...|........................|...|.|      ",
    "      |.b X b (--d a.(-d  i-).a i--) b X b.|      ",
    "(-----].......|....b.|      |.b....|.......[-----)",
    "|........(----]......|      |......[----)........|",
    "|........|......(-d  (------)  i-)      |........|",
    "[----).a.|.i--d.|...(]......[)   | i--d | a.i----]",
    "(----].|.|......|.a.|..(--)..| a |      | |.(----)",
    "|......b.b.i----].|.|.(]  [).| | [----d b b.[d ..|",
    "|.a...............|.|.|    |.| |...............a.|",
    "|.[-----d i-d i-d b.b.[d  i].b b i-d i-d i-----].|",
    "|................................................|",
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
            case 'X':
                draw_sprite(buffer,roca,j*20,i*20);
                break;
            case '.':
                draw_sprite(buffer,comida,j*20,i*20);
                if(y/20==i && x/20 == j)
                    mapa[i][j]=' ';
            }
        }
    }
}

void muro()
{
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
    roca=load_bitmap("roca_20.bmp",NULL);
    comida=load_bitmap("comida.bmp",NULL);
}

void pantalla()
{
    blit(buffer,screen,0,0,0,0,1000,600);
}

template<class P>
P atajos(P &px)
{
    if(px<= 0)
        px=980;
    else if(px>=980)
        px=0;

}

int main()
{
    funciones_allegro();
    buffer=create_bitmap(1000,600);
    muro();
    Pacman gustavo;
    Fantasma enemi();

    while(!key[KEY_ESC])
    {

        if(key[KEY_LEFT]) direccion=0;
        else if(key[KEY_RIGHT]) direccion=1;
        else if(key[KEY_UP]) direccion=2;
        else if(key[KEY_DOWN]) direccion=3;
        if(direccion==0)
        {
            if(mapa[y/20][(x-20)/20]==' ' || mapa[y/20][(x-20)/20]=='.') x-=20;
            else
                direccion=4;
        }
        if(direccion==1)
        {
            if(mapa[y/20][(x+20)/20]==' ' || mapa[y/20][(x+20)/20]=='.') x+=20;
            else
                direccion=4;
        }
        if(direccion==2)
        {
            if(mapa[(y-20)/20][x/20]==' ' || mapa[(y-20)/20][x/20]=='.') y-=20;
            else
                direccion=4;
        }
        if(direccion==3)
        {
            if(mapa[(y+20)/20][x/20]==' ' || mapa[(y+20)/20][x/20]=='.') y+=20;
            else
                direccion=4;
        }

        atajos(x);
        clear(buffer);
        dibujar_mapa();
        gustavo.dibujar_pacman(direccion,x,y,buffer);
        //enemi.dibujar_fantasma(direccion,x,y,buffer);
        pantalla();
        rest(50);
    }
}

END_OF_MAIN();

