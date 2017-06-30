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
BITMAP *muerte_imagen;

BITMAP *enemigo_imagen,*enemigo;
int ti=20;

int direccion=0,x=ti*25,y=ti*26;
int fan_direccion=0;
int f_x=ti*14,f_y=ti*14;

void funciones_allegro()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,ti*(MAXCOLUMNAS-1),ti*MAXFILAS,0,0);
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
    "[----).a.|.i--d.|...(]......[)   | i--d | a.(----]",
    "(----].|.|......|.a.|..(--)..| a |      | |.[----)",
    "|......b.b.i----].|.|.(]  [).| | [----d b b......|",
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
                draw_sprite(buffer,muro_o,j*ti,i*ti);
                break;
            case '|':
                draw_sprite(buffer,muro_v,j*ti,i*ti);
                break;
            case '(':
                draw_sprite(buffer,muro_ai,j*ti,i*ti);
                break;
            case ')':
                draw_sprite(buffer,muro_ad,j*ti,i*ti);
                break;
            case '[':
                draw_sprite(buffer,muro_bi,j*ti,i*ti);
                break;
            case ']':
                draw_sprite(buffer,muro_bd,j*ti,i*ti);
                break;
            case 'a':
                draw_sprite(buffer,muro_a,j*ti,i*ti);
                break;
            case 'i':
                draw_sprite(buffer,muro_i,j*ti,i*ti);
                break;
            case 'b':
                draw_sprite(buffer,muro_b,j*ti,i*ti);
                break;
            case 'd':
                draw_sprite(buffer,muro_d,j*ti,i*ti);
                break;
            case 'X':
                draw_sprite(buffer,roca,j*ti,i*ti);
                break;
            case '.':
                draw_sprite(buffer,comida,j*ti,i*ti);
                if(y/ti==i && x/ti == j)
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
    blit(buffer,screen,0,0,0,0,ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
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
    //clear(pacman);
}

void chocar_pacman()
{
    if(y==f_y && x==f_x)
    {
        clear(enemigo);
        dibujar_mapa();
        blit(muerte_imagen,enemigo,0,0,0,0,ti,ti);
        draw_sprite(buffer,enemigo,x,y);
        x=ti*25;
        y=ti*26;
        direccion+4;


        /*
        for(int j=0;j<=5;j++)
        {
            clear(pacman);
            clear(buffer);
            dibujar_mapa();
            blit(muerte_imagen,pacman,j*33,0,0,0,ti,ti);
        }
        */
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

int main()
{
    funciones_allegro();
    buffer=create_bitmap(ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
    muro();
    Pacman gustavo;
    enemigo=create_bitmap(ti,ti);
    enemigo_imagen=load_bitmap("enemigo.bmp",NULL);
    muerte_imagen=load_bitmap("explosion.bmp",NULL);

    while(!key[KEY_ESC])
    {

        if(key[KEY_LEFT]) direccion=0;
        else if(key[KEY_RIGHT]) direccion=1;
        else if(key[KEY_UP]) direccion=2;
        else if(key[KEY_DOWN]) direccion=3;
        if(direccion==0)
        {
            if(mapa[y/ti][(x-ti)/ti]==' ' || mapa[y/ti][(x-ti)/ti]=='.') x-=ti;
            else
                direccion=0;
        }
        if(direccion==1)
        {
            if(mapa[y/ti][(x+ti)/ti]==' ' || mapa[y/ti][(x+ti)/ti]=='.') x+=ti;
            else
                direccion=4;
        }
        if(direccion==2)
        {
            if(mapa[(y-ti)/ti][x/ti]==' ' || mapa[(y-ti)/ti][x/ti]=='.') y-=ti;
            else
                direccion=4;
        }
        if(direccion==3)
        {
            if(mapa[(y+ti)/ti][x/ti]==' ' || mapa[(y+ti)/ti][x/ti]=='.') y+=ti;
            else
                direccion=4;
        }

        atajos(x);
        clear(buffer);
        dibujar_mapa();
        gustavo.dibujar_pacman(direccion,x,y,buffer);
        fantasma();
        //enemi.dibujar_fantasma(direccion,x,y,buffer);
        pantalla();
        rest(100);
    }
}

END_OF_MAIN();

