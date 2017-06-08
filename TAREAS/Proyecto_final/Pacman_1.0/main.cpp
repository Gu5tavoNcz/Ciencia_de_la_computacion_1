#include <iostream>
#include <allegro.h>

using namespace std;

#define MAXFILAS 30
#define MAXCOLUMNAS 51
BITMAP *buffer;
BITMAP *roca;
BITMAP *muro_o,*muro_v,*muro_ai,*muro_ad,*muro_bi,*muro_bd,*muro_a,*muro_b,*muro_i,*muro_d;
BITMAP *pacman_imagen,*pacman;

int direccion=0,x=20*10,y=20*10;

char mapa[MAXFILAS][MAXCOLUMNAS]={
    "(----------------------)  (----------------------)",
    "|                      |  |                      |",
    "| (------d a (-------) |  | (-------) a i------) |",
    "| |        | |   a   | [--] |   a   | |        | |",
    "| | i-d id | [-d | i-]      [-d | i-] | id i-d | |",
    "| |        |     |              |     |        | |",
    "| [------d b i-d | i----------d | i-d b i------] |",
    "|                |              |                |",
    "[-----)   i----d b i-d i-d i-d  b i----d   (-----]",
    "      | a                                a |      ",
    "      | | a     i----------------d     a | |      ",
    "      | | |                            | | |      ",
    "------] | | (-) XXXXXXX    XXXXXXX (-) | | [------",
    "        b b | | X                X | | b b        ",
    "--------d   b b X                X b b   i--------",
    "        a a     X                X     a a        ",
    "------) | | a a X                X a a | | (------",
    "      | | b | b XXXXXXXXXXXXXXXXXX b | b | |      ",
    "      | |   |                        |   | |      ",
    "      | b X b (--d a (-d  i-) a i--) b X b |      ",
    "(-----]       |    b |      | b    |       [-----)",
    "|        (----]      |      |      [----)        |",
    "|        |      (-d  (------)  i-)      |        |",
    "[----) a | i--d |   (]      [)   | i--d | a i----]",
    "(----] | |      | a |  (--)  | a |      | | (----)",
    "|      b b i----] | | (]  [) | | [----d b b [d   |",
    "| a               | | |    | | |               a |",
    "| [-----d i-d i-d b b [d  i] b b i-d i-d i-----] |",
    "|                                                |",
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
}

void pantalla()
{
    blit(buffer,screen,0,0,0,0,1000,600);
}

void dibujar_pacman()
{
    blit(pacman_imagen,pacman,direccion*20,0,0,0,20,20);//cual imagen,desde donde,dimencion
    draw_sprite(buffer,pacman,x,y);
}

int main()
{
    allegro_init();
    install_keyboard();

    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,1000,600,0,0);
    buffer=create_bitmap(1000,600);
    muro();
    pacman_imagen=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(20,20);
    while(!key[KEY_ESC])
    {
        if(key[KEY_RIGHT]) direccion=1;
        else if(key[KEY_LEFT]) direccion=0;
        else if(key[KEY_UP]) direccion=2;
        else if(key[KEY_DOWN]) direccion=3;

        if(direccion==0) x-=20;
        if(direccion==1) x+=20;
        if(direccion==2) y-=20;
        if(direccion==3) y+=20;
/*
        switch(direccion)
        {
        case 0:
            x-=30;
        case 1:
            x+=30;
        case 2:
            y-=30;
        case 3:
            y+=30;
        }
*/
        clear(buffer);
        dibujar_mapa();
        dibujar_pacman();
        pantalla();
        rest(150);
    }
}

END_OF_MAIN();
