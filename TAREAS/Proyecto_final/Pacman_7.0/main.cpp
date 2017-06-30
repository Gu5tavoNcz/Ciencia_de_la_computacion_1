#include <iostream>
#include <allegro.h>
#include "Personaje.h"
#include "mapa.h"
#include <vector>

using namespace std;

BITMAP *muerte_imagen;
BITMAP *pacman_imagen,*pacman;
MIDI *LEVEL_INTRO;
SAMPLE *CAMINANDO,*MUERE,*BOLA;


int direccion=4;
int d_anterior,anterior_x,anterior_y;
//int fan_direccion=0;
int f_x=ti*14,f_y=ti*14;

int funciones_allegro();

template<class P>
P atajos(P &px);

template<class F>
void teclado_direcciones(Personaje gustavo,F A,F B,F C,F D,F E,F G,F H,F I);;


//CREAMOS CLASE FANTASMA
class Fantasma
{
    BITMAP *enemigo_imagen,*enemigo;
    int d_fantasma,_x,_y;
public:
    Fantasma(int,int);
    void dibujar_fantasma();
    void mover_fantasma();
    void chocar_pacman();
};

//FUNCIONES FANTASMA
Fantasma::Fantasma(int mi_x,int mi_y):_x(mi_x),_y(mi_y)
{
    d_fantasma=2;//rand()%4;
    enemigo=create_bitmap(ti,ti);
    enemigo_imagen=load_bitmap("enemigo.bmp",NULL);;
}

void Fantasma::dibujar_fantasma()
{
    blit(enemigo_imagen,enemigo,0,0,0,0,ti,ti);//cual imagen,desde donde,dimencion
    draw_sprite(buffer,enemigo,_x,_y);
}
void Fantasma::chocar_pacman()
{
    if(y==_y && x==_x || _y==anterior_y && _x==anterior_x)
    {
        play_sample(MUERE,200,150,1000,0);
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

void Fantasma::mover_fantasma()
{
    dibujar_fantasma();
    chocar_pacman();
    if(d_fantasma==0)
    {
        if(mapa[_y/ti][(_x-ti)/ti]==' ' || mapa[_y/ti][(_x-ti)/ti]=='.') _x-=ti;
        else d_fantasma=rand()%4;
    }
    if(d_fantasma==1)
    {
        if(mapa[_y/ti][(_x+ti)/ti]==' ' || mapa[_y/ti][(_x+ti)/ti]=='.') _x+=ti;
        else d_fantasma=rand()%4;
    }
    if(d_fantasma==2)
    {
        if(mapa[(_y-ti)/ti][_x/ti]==' ' || mapa[(_y-ti)/ti][_x/ti]=='.') _y-=ti;
        else d_fantasma=rand()%4;
    }
    if(d_fantasma==3)
    {
        if(mapa[(_y+ti)/ti][_x/ti]==' ' || mapa[(_y+ti)/ti][_x/ti]=='.') _y+=ti;
        else d_fantasma=rand()%4;
    }
    atajos(f_x);
}
//FINALIZA CLASE FANTASMA

int main()
{
    funciones_allegro();
    muro();
    buffer=create_bitmap(ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
    pacman_imagen=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(ti,ti);

    muerte_imagen=load_bitmap("muerte.bmp",NULL);

    Pacman gustavo(pacman_imagen,pacman);
    vector<Fantasma*> fantasmas;
    Fantasma A(24*20,14*20);
    Fantasma B(25*20,14*20);
    Fantasma C(24*20,15*20);
    Fantasma D(25*20,15*20);
    Fantasma E(24*20,16*20);
    Fantasma G(25*20,16*20);
    Fantasma H(24*20,13*20);
    Fantasma I(25*20,13*20);

    play_midi(LEVEL_INTRO,0);
    teclado_direcciones(gustavo,A,B,C,D,E,G,H,I);

}



int funciones_allegro()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,ti*(MAXCOLUMNAS-1),ti*MAXFILAS,0,0);
    //INICIALIZAR SONIDO EN ALLEGRO
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0) {
    allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
    return 1;
    }
    set_volume(200,200);
    LEVEL_INTRO=load_midi("level-intro.mid");
    //BOLA=load_wav("coin.wav");
    CAMINANDO=load_wav("jump.wav");
    MUERE=load_wav("Muerte.wav");

}

template<class P>
P atajos(P &px)
{
    if(px<= 0)
        px=ti*(MAXCOLUMNAS-2);
    else if(px>=ti*(MAXCOLUMNAS-2))
        px=0;

}

template<class F>
void teclado_direcciones(Personaje gustavo,F A,F B,F C,F D,F E,F G,F H,F I)
{
    while(!key[KEY_ESC])
    {
        if(d_anterior!=4)
            play_sample(CAMINANDO,200,150,1000,0);
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


        A.mover_fantasma();
        B.mover_fantasma();
        C.mover_fantasma();
        D.mover_fantasma();
        E.mover_fantasma();
        G.mover_fantasma();
        H.mover_fantasma();
        I.mover_fantasma();

        pantalla();
        rest(100);
    }
}

END_OF_MAIN();
