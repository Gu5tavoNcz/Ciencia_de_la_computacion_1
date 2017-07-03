#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include <allegro.h>
#define MAXFILAS 30
#define MAXCOLUMNAS 43
#include <iostream>


using namespace std;

BITMAP *buffer;
BITMAP *roca;
BITMAP *muro_o,*muro_v,*muro_ai,*muro_ad,*muro_bi,*muro_bd,*muro_a,*muro_b,*muro_i,*muro_d,*t_a,*t_i,*t_d,*t_b;
BITMAP *a,*b,*c,*d,*e,*f,*g,*h,*I,*J,*k,*l,*m,*n,*o,*p,*q,*r,*s,*t,*u,*v,*w,*x,*y,*z;
BITMAP *uno,*dos,*tres,*cuatro,*cinco,*seis,*siete,*ocho,*nueve,*cero;
BITMAP *comida,*comida2,*vida;

int ti=30;
int _x=21*30;
int _y=25*30;
int puntaje=0;
/*
void strcatint(char *s,int *t,int n)
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
*/
char mapa[MAXFILAS][MAXCOLUMNAS]={
    "               puntaje  012345678901234567",
    " (--------------------------------------) ",
    " |@....................................@| ",
    " |.(-).<---!-->.A.<---->.A.<--!--->.(-).| ",
    " |.[-].....|....|........|....|.....[-].| ",
    " |.....(->.%-->.|.A.().A.|.<--$.<-).....| ",
    " |.A.<-]...|....|.|.[].|.|....|...[->.A.| ",
    " |.|.....A.[--).|.|....|.|.(--].A.....|.| ",
    " |.%--->.|....B.B.[----].B.B....|.<---$.| ",
    " |.|.....B.()................().B.....|.| ",
    " |.B.<->...|[--).<------>.(--]|...<->.B.| ",
    " |@......A.|...B..........B...|.A......@| ",
    " [----->.|.|.A...XXX  XXX...A.|.|.<-----] ",
    " ........|.%-].A.X      X.A.[-$.|........ ",
    " --------$.|...|.X      X.|...|.%-------- ",
    " ........|.|.A.|.X      X.|.A.|.|........ ",
    " (----->.B.[-].B.XXXXXXXX.B.[-].B.<-----) ",
    " |@....................................@| ",
    " |.(--->.A.(-).<---------->.(-).A.<---).| ",
    " |.|.....|.|.|..............|.|.|.....|.| ",
    " |.|.(---].B.[->.A.<-->.A.<-].B.[---).|.| ",
    " |.|.|...........|......|...........|.|.| ",
    " |.B.B.A.<-!>.<--].<-->.[-->.<!->.A.B.B.| ",
    " |.....|...B..................B...|.....| ",
    " |.(-).|.A...A.(------>.<-).A...A.|.(-).| ",
    " |.| |.|.|.<-$.|..........|.%->.|.|.| |.| ",
    " |.[-].B.B...B.[->.<------].B...B.B.[-].| ",
    " |@........A..................A........@| ",
    " [---------¡------------------¡---------] ",
    " vidas                                    ",

};

void pantalla()
{
    blit(buffer,screen,0,0,0,0,ti*(MAXCOLUMNAS+2),ti*MAXFILAS+2);
}


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
            case 'A':
                draw_sprite(buffer,muro_a,j*ti,i*ti);
                break;
            case '<':
                draw_sprite(buffer,muro_i,j*ti,i*ti);
                break;
            case 'B':
                draw_sprite(buffer,muro_b,j*ti,i*ti);
                break;
            case '>':
                draw_sprite(buffer,muro_d,j*ti,i*ti);
                break;
            case 'X':
                draw_sprite(buffer,roca,j*ti,i*ti);
                break;
            case '.':
                draw_sprite(buffer,comida,j*ti,i*ti);
                if(_y/ti==i && _x/ti == j){
                        mapa[i][j]=' ';
                        puntaje+=5;
                }
                break;
            case '@':
                draw_sprite(buffer,comida2,j*ti,i*ti);
                if(_y/ti==i && _x/ti == j){
                        mapa[i][j]=' ';
                        puntaje+=5;
                }
                break;
            case '$':
                draw_sprite(buffer,t_i,j*ti,i*ti);
                break;
            case '%':
                draw_sprite(buffer,t_d,j*ti,i*ti);
                break;
            case '¡':
                draw_sprite(buffer,t_a,j*ti,i*ti);
                break;
            case '!':
                draw_sprite(buffer,t_b,j*ti,i*ti);
                break;
            case 'a':
                draw_sprite(buffer,a,j*ti,i*ti);
                break;
            case 'b':
                draw_sprite(buffer,b,j*ti,i*ti);
                break;
            case 'c':
                draw_sprite(buffer,c,j*ti,i*ti);
                break;
            case 'd':
                draw_sprite(buffer,d,j*ti,i*ti);
                break;
            case 'e':
                draw_sprite(buffer,e,j*ti,i*ti);
                break;
            case 'f':
                draw_sprite(buffer,f,j*ti,i*ti);
                break;
            case 'g':
                draw_sprite(buffer,g,j*ti,i*ti);
                break;
            case 'h':
                draw_sprite(buffer,h,j*ti,i*ti);
                break;
            case 'i':
                draw_sprite(buffer,I,j*ti,i*ti);
                break;
            case 'j':
                draw_sprite(buffer,J,j*ti,i*ti);
                break;
            case 'k':
                draw_sprite(buffer,k,j*ti,i*ti);
                break;
            case 'l':
                draw_sprite(buffer,l,j*ti,i*ti);
                break;
            case 'm':
                draw_sprite(buffer,m,j*ti,i*ti);
                break;
            case 'n':
                draw_sprite(buffer,n,j*ti,i*ti);
                break;
            case 'o':
                draw_sprite(buffer,o,j*ti,i*ti);
                break;
            case 'p':
                draw_sprite(buffer,p,j*ti,i*ti);
                break;
            case 'q':
                draw_sprite(buffer,q,j*ti,i*ti);
                break;
            case 'r':
                draw_sprite(buffer,r,j*ti,i*ti);
                break;
            case 's':
                draw_sprite(buffer,s,j*ti,i*ti);
                break;
            case 't':
                draw_sprite(buffer,t,j*ti,i*ti);
                break;
            case 'u':
                draw_sprite(buffer,u,j*ti,i*ti);
                break;
            case 'v':
                draw_sprite(buffer,v,j*ti,i*ti);
                break;
            case 'w':
                draw_sprite(buffer,w,j*ti,i*ti);
                break;
            case 'x':
                draw_sprite(buffer,x,j*ti,i*ti);
                break;
            case 'y':
                draw_sprite(buffer,y,j*ti,i*ti);
                break;
            case 'z':
                draw_sprite(buffer,z,j*ti,i*ti);
                break;
            case '1':
                draw_sprite(buffer,uno,j*ti,i*ti);
                break;
            case '2':
                draw_sprite(buffer,dos,j*ti,i*ti);
                break;
            case '3':
                draw_sprite(buffer,tres,j*ti,i*ti);
                break;
            case '4':
                draw_sprite(buffer,cuatro,j*ti,i*ti);
                break;
            case '5':
                draw_sprite(buffer,cinco,j*ti,i*ti);
                break;
            case '6':
                draw_sprite(buffer,seis,j*ti,i*ti);
                break;
            case '7':
                draw_sprite(buffer,siete,j*ti,i*ti);
                break;
            case '8':
                draw_sprite(buffer,ocho,j*ti,i*ti);
                break;
            case '9':
                draw_sprite(buffer,nueve,j*ti,i*ti);
                break;
            case '0':
                draw_sprite(buffer,cero,j*ti,i*ti);
                break;
            case 'º':
                draw_sprite(buffer,vida,j*ti,i*ti);
                break;
            }
        }
    }
    cout<<"MI NOMBRE";
}

void cargando_imagenes()
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
    comida2=load_bitmap("comida2.bmp",NULL);
    vida=load_bitmap("vida.bmp",NULL);
    t_a=load_bitmap("t_a.bmp",NULL);
    t_i=load_bitmap("t_i.bmp",NULL);
    t_d=load_bitmap("t_d.bmp",NULL);
    t_b=load_bitmap("t_b.bmp",NULL);
    a=load_bitmap("a.bmp",NULL);
    b=load_bitmap("b.bmp",NULL);
    c=load_bitmap("c.bmp",NULL);
    d=load_bitmap("d.bmp",NULL);
    e=load_bitmap("e.bmp",NULL);
    f=load_bitmap("f.bmp",NULL);
    g=load_bitmap("g.bmp",NULL);
    h=load_bitmap("h.bmp",NULL);
    I=load_bitmap("i.bmp",NULL);
    J=load_bitmap("j.bmp",NULL);
    k=load_bitmap("k.bmp",NULL);
    l=load_bitmap("l.bmp",NULL);
    m=load_bitmap("m.bmp",NULL);
    n=load_bitmap("n.bmp",NULL);
    o=load_bitmap("o.bmp",NULL);
    p=load_bitmap("p.bmp",NULL);
    q=load_bitmap("q.bmp",NULL);
    r=load_bitmap("r.bmp",NULL);
    s=load_bitmap("s.bmp",NULL);
    t=load_bitmap("t.bmp",NULL);
    u=load_bitmap("u.bmp",NULL);
    v=load_bitmap("v.bmp",NULL);
    w=load_bitmap("w.bmp",NULL);
    x=load_bitmap("x.bmp",NULL);
    y=load_bitmap("y.bmp",NULL);
    z=load_bitmap("z.bmp",NULL);
    uno=load_bitmap("1.bmp",NULL);
    dos=load_bitmap("2.bmp",NULL);
    tres=load_bitmap("3.bmp",NULL);
    cuatro=load_bitmap("4.bmp",NULL);
    cinco=load_bitmap("5.bmp",NULL);
    seis=load_bitmap("6.bmp",NULL);
    siete=load_bitmap("7.bmp",NULL);
    ocho=load_bitmap("8.bmp",NULL);
    nueve=load_bitmap("9.bmp",NULL);
    cero=load_bitmap("0.bmp",NULL);
}


#endif // MAPA_H_INCLUDED
