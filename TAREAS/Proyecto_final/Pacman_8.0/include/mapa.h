#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

#define MAXFILAS 30
#define MAXCOLUMNAS 51


BITMAP *buffer;
BITMAP *roca;
BITMAP *muro_o,*muro_v,*muro_ai,*muro_ad,*muro_bi,*muro_bd,*muro_a,*muro_b,*muro_i,*muro_d;

BITMAP *comida;


int ti=20;
int x=ti*25,y=ti*26;

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
    "|........|......(-d  (------)..i-)......|........|",
    "[----).a.|.i--d.|...(]......[)...| i--d |.a.(----]",
    "(----].|.|......|.a.|..(--)..|.a.|......|.|.[----)",
    "|......b.b.i----].|.|.(]  [).|.|.[----d b.b......|",
    "|.a...............|.|.|    |.|.|...............a.|",
    "|.[-----d i-d i-d b.b.[d  i].b.b i-d.i-d i-----].|",
    "|................................................|",
    "[------------------------------------------------]",
};

void pantalla()
{
    blit(buffer,screen,0,0,0,0,ti*(MAXCOLUMNAS-1),ti*MAXFILAS);
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
                if(y/ti==i && x/ti == j){
                        mapa[i][j]=' ';
                }
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


#endif // MAPA_H_INCLUDED
