#include "Pacman.h"

Pacman::Pacman()
{
    pacman_imagen=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(20,20);
}

void Pacman::dibujar_pacman(int direccion,int mi_x,int mi_y,BITMAP* buffer)
{
    blit(pacman_imagen,pacman,direccion*20,0,0,0,20,20);//cual imagen,desde donde,dimencion
    draw_sprite(buffer,pacman,mi_x,mi_y);
    clear(pacman);
}
