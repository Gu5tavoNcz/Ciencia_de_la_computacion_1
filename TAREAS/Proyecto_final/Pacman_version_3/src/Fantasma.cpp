#include "Fantasma.h"

Fantasma::Fantasma(int mi_x,int mi_y,BITMAP* mi_buffer):Personaje(mi_x,mi_y,mi_buffer)
{
    personaje=create_bitmap(30,30);
}

void Fantasma::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    x=mi_x;
    y=mi_y;
    direccion=mi_direccion;
}

void Fantasma::dibujar_personaje()
{
    blit(personaje_imagen,personaje,0,0,0,0,30,30);
    draw_sprite(buffer,personaje,x,y);
}

void Fantasma::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc)
{
    SAMPLE *MUERE;
    muerte_imagen=load_bitmap("muerte.bmp",NULL);
    MUERE=load_wav("Muerte.wav");
    if(x==mi_x && y==mi_y )
    {
        mi_x=21*30;
        mi_y=25*30;
        direc=4;
        mi_vida=mi_vida-1;
        play_sample(MUERE,200,150,1000,0);
        for(int j=0;j<=5;j++)
        {
            blit(muerte_imagen,personaje,j*30,0,0,0,30,30);
            draw_sprite(buffer,personaje,x,y);
            blit(buffer,screen,0,0,0,0,30*45,30*32);
            rest(80);
        }
    }
}

/*------------------------------*/
F_rojo::F_rojo(int mi_x,int mi_y,BITMAP* mi_buffer):Fantasma(mi_x,mi_y,mi_buffer)
{
    //personaje=create_bitmap(30,30);
    personaje_imagen=load_bitmap("f_rojo.bmp",NULL);
}

void F_rojo::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    Fantasma::actualizar_x_y(mi_x,mi_y,mi_direccion);
}

void F_rojo::dibujar_personaje()
{
    Fantasma::dibujar_personaje();
}

void F_rojo::mover_personaje(char mapa[][43])
{
    int d_anterior;
    direccion=rand()%4;
    d_anterior=direccion;
    if(direccion==0)
    {
        if(mapa[y/30][(x-30)/30]==' ' || mapa[y/30][(x-30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x-=30;
        else direccion=d_anterior;
    }
    if(direccion==1)
    {
        if(mapa[y/30][(x+30)/30]==' ' || mapa[y/30][(x+30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x+=30;
        else direccion=d_anterior;
    }
    if(direccion==2)
    {
        if(mapa[(y-30)/30][x/30]==' ' || mapa[(y-30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y-=30;
        else direccion=d_anterior;
    }
    if(direccion==3)
    {
        if(mapa[(y+30)/30][x/30]==' ' || mapa[(y+30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y+=30;
        else direccion=d_anterior;
    }
}

void F_rojo::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc)
{
    Fantasma::impacto(mi_x,mi_y,mi_vida,direc);
}

/*------------------------------*/
F_naranja::F_naranja(int mi_x,int mi_y,BITMAP* mi_buffer):Fantasma(mi_x,mi_y,mi_buffer)
{
    //personaje=create_bitmap(30,30);
    personaje_imagen=load_bitmap("f_naranja.bmp",NULL);
}

void F_naranja::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    Fantasma::actualizar_x_y(mi_x,mi_y,mi_direccion);
}

void F_naranja::dibujar_personaje()
{
    Fantasma::dibujar_personaje();
}

void F_naranja::mover_personaje(char mapa[][43])
{
    int d_anterior;
    direccion=rand()%4;
    d_anterior=direccion;
    if(direccion==0)
    {
        if(mapa[y/30][(x-30)/30]==' ' || mapa[y/30][(x-30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x-=30;
        else direccion=d_anterior;
    }
    if(direccion==1)
    {
        if(mapa[y/30][(x+30)/30]==' ' || mapa[y/30][(x+30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x+=30;
        else direccion=d_anterior;
    }
    if(direccion==2)
    {
        if(mapa[(y-30)/30][x/30]==' ' || mapa[(y-30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y-=30;
        else direccion=d_anterior;
    }
    if(direccion==3)
    {
        if(mapa[(y+30)/30][x/30]==' ' || mapa[(y+30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y+=30;
        else direccion=d_anterior;
    }
}

void F_naranja::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc)
{
    Fantasma::impacto(mi_x,mi_y,mi_vida,direc);
}

/*------------------------------*/
F_celeste::F_celeste(int mi_x,int mi_y,BITMAP* mi_buffer):Fantasma(mi_x,mi_y,mi_buffer)
{
    //personaje=create_bitmap(30,30);
    personaje_imagen=load_bitmap("f_celeste.bmp",NULL);
}

void F_celeste::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    Fantasma::actualizar_x_y(mi_x,mi_y,mi_direccion);
}

void F_celeste::dibujar_personaje()
{
    Fantasma::dibujar_personaje();
}

void F_celeste::mover_personaje(char mapa[][43])
{
    int d_anterior;
    direccion=rand()%4;
    d_anterior=direccion;
    if(direccion==0)
    {
        if(mapa[y/30][(x-30)/30]==' ' || mapa[y/30][(x-30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x-=30;
        else direccion=d_anterior;
    }
    if(direccion==1)
    {
        if(mapa[y/30][(x+30)/30]==' ' || mapa[y/30][(x+30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x+=30;
        else direccion=d_anterior;
    }
    if(direccion==2)
    {
        if(mapa[(y-30)/30][x/30]==' ' || mapa[(y-30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y-=30;
        else direccion=d_anterior;
    }
    if(direccion==3)
    {
        if(mapa[(y+30)/30][x/30]==' ' || mapa[(y+30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y+=30;
        else direccion=d_anterior;
    }
}

void F_celeste::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc)
{
    Fantasma::impacto(mi_x,mi_y,mi_vida,direc);
}

/*------------------------------*/
F_rosa::F_rosa(int mi_x,int mi_y,BITMAP* mi_buffer):Fantasma(mi_x,mi_y,mi_buffer)
{
    //personaje=create_bitmap(30,30);
    personaje_imagen=load_bitmap("f_rosa.bmp",NULL);
}

void F_rosa::actualizar_x_y(int mi_x,int mi_y,int mi_direccion)
{
    Fantasma::actualizar_x_y(mi_x,mi_y,mi_direccion);
}

void F_rosa::dibujar_personaje()
{
    Fantasma::dibujar_personaje();
}

void F_rosa::mover_personaje(char mapa[][43])
{
    int d_anterior;
    direccion=rand()%4;
    d_anterior=direccion;
    if(direccion==0)
    {
        if(mapa[y/30][(x-30)/30]==' ' || mapa[y/30][(x-30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x-=30;
        else direccion=d_anterior;
    }
    if(direccion==1)
    {
        if(mapa[y/30][(x+30)/30]==' ' || mapa[y/30][(x+30)/30]=='.' || mapa[y/30][(x-30)/30]=='@') x+=30;
        else direccion=d_anterior;
    }
    if(direccion==2)
    {
        if(mapa[(y-30)/30][x/30]==' ' || mapa[(y-30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y-=30;
        else direccion=d_anterior;
    }
    if(direccion==3)
    {
        if(mapa[(y+30)/30][x/30]==' ' || mapa[(y+30)/30][x/30]=='.' || mapa[y/30][(x-30)/30]=='@') y+=30;
        else direccion=d_anterior;
    }
}

void F_rosa::impacto(int &mi_x,int &mi_y,int &mi_vida,int &direc)
{
    Fantasma::impacto(mi_x,mi_y,mi_vida,direc);
}

/*------------------------------*/
