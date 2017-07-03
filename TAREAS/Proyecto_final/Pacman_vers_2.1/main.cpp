#include <iostream>
#include <allegro.h>
#include "Personaje.h"
#include "mapa.h"
#include <vector>

using namespace std;

BITMAP *pacman_imagen,*pacman;
MIDI *LEVEL_INTRO;
int direccion=4;
int d_anterior=4;


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
    int num=7648;
    char life[]={"บบบบบ"};
    funciones_allegro();
    cargando_imagenes();

    buffer=create_bitmap(ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
    play_midi(LEVEL_INTRO,0);

    Pacman jugador(_x,_y,buffer);

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
        num++;
        clear(buffer);

        strcatn(mapa[0],nombre,1);
        //strcatint(mapa[0],&num,9);
        strcatn(mapa[29],nombre,20);
        strcatn(mapa[29],nombre,28);
        strcatn(mapa[29],life,8);
        dibujar_mapa();
        jugador.actualizar_x_y(_x,_y,direccion);


        jugador.dibujar_personaje();

        cout<<puntaje;
        pantalla();

        rest(100);
    }




}

END_OF_MAIN();
