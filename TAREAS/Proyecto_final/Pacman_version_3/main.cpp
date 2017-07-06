#include <iostream>
#include <allegro.h>
#include "Fantasma.h"
#include "Personaje.h"
#include "mapa.h"
#include <vector>



using namespace std;

BITMAP *pacman_imagen,*pacman;
MIDI *LEVEL_INTRO;
int direccion=4;
int d_anterior=4;
int nuestra_vida=5;


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
}

void strcatn(char *s,char *t,int n)
{
    for(int i=0;i<n;i++)
        s++;
    while(*t!='\0')
    {
        *s=*t;
        t++,s++;
    }
    //*s='\0';
}

void funcion_vida(char life[],int _vida)
{
    for(int j=0;j<5;j++)
    {
        life[j]=' ';
    }
    for(int i=0;i<_vida;i++)
    {
        life[i]='º';
    }
}

template<class P>
P atajos(P &px)
{
    if(px<= 0)
        px=ti*(MAXCOLUMNAS-2);
    else if(px>=ti*(MAXCOLUMNAS-2))
        px=0;

}


int main()
{
    char nombre[15]={"              "};
    cout<<"Ingresa tu nombre : ";
    cin>>nombre;


    funciones_allegro();
    cargando_imagenes();

    buffer=create_bitmap(ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
    play_midi(LEVEL_INTRO,0);
    vector <Personaje*> Personajes;
    Pacman jugador(_x,_y,buffer);
    F_rojo rojo1(20*30,13*30,buffer);
    F_naranja naranja1(21*30,13*30,buffer);
    F_celeste celeste1(20*30,14*30,buffer);
    F_rosa rosa1(21*30,14*30,buffer);
    F_rojo rojo2(19*30,13*30,buffer);
    F_naranja naranja2(19*30,14*30,buffer);
    F_celeste celeste2(20*30,13*30,buffer);
    F_rosa rosa2(20*30,13*30,buffer);
    Personajes.push_back(&jugador);
    Personajes.push_back(&rojo1);
    Personajes.push_back(&naranja1);
    Personajes.push_back(&celeste1);
    Personajes.push_back(&rosa1);
    Personajes.push_back(&rojo2);
    Personajes.push_back(&naranja2);
    Personajes.push_back(&celeste2);
    Personajes.push_back(&rosa2);

    while(!key[KEY_ESC])
    {
        d_anterior=direccion;
        if(key[KEY_LEFT]) direccion=0;
        else if(key[KEY_RIGHT]) direccion=1;
        else if(key[KEY_UP]) direccion=2;
        else if(key[KEY_DOWN]) direccion=3;
        if(direccion==0)
        {
            if(mapa[_y/ti][(_x-ti)/ti]==' ' || mapa[_y/ti][(_x-ti)/ti]=='.' || mapa[_y/ti][(_x-ti)/ti]=='@') _x-=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==1)
        {
            if(mapa[_y/ti][(_x+ti)/ti]==' ' || mapa[_y/ti][(_x+ti)/ti]=='.' || mapa[_y/ti][(_x+ti)/ti]=='@') _x+=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==2)
        {
            if(mapa[(_y-ti)/ti][_x/ti]==' ' || mapa[(_y-ti)/ti][_x/ti]=='.' || mapa[(_y-ti)/ti][_x/ti]=='@') _y-=ti;
            else
                direccion=d_anterior;
        }
        if(direccion==3)
        {
            if(mapa[(_y+ti)/ti][_x/ti]==' ' || mapa[(_y+ti)/ti][_x/ti]=='.' || mapa[(_y+ti)/ti][_x/ti]=='@') _y+=ti;
            else
                direccion=d_anterior;
        }
        atajos(_x);

        clear(buffer);

        if(nuestra_vida>0)
        {
            dibujar_mapa();
            char life[nuestra_vida-1];
            funcion_vida(life,nuestra_vida);
            strcatn(mapa[0],nombre,1);
            strcatn(mapa[29],"buen juego",28);
            strcatn(mapa[29],life,8);
            jugador.actualizar_x_y(_x,_y,direccion);
            for(int i=0;i<Personajes.size();i++)
            {
                Personajes[i]->dibujar_personaje();
            }
            for(int j=1;j<Personajes.size();j++)
            {
                Personajes[j]->impacto(_x,_y,nuestra_vida,direccion);
                Personajes[j]->mover_personaje(mapa);
            }
            cout<<puntaje;
        }
        else
        {
            strcatn(mapa[29],"game over         ",20);
            strcatn(mapa[0],"game over         ",15);
            strcatn(mapa[29],"     ",8);
            dibujar_mapa();
        }

        pantalla();
        rest(100);

    }




}

END_OF_MAIN();
