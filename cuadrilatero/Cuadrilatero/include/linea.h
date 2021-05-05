#ifndef LINEA_H
#define LINEA_H
#include"Punto.h"
#include<stdio.h>


class linea ::  Punto
{
private: // atributos composicion de objetos
    Punto P_init;
    Punto P_fin;

public:
    linea(float x_init, float y_init, float x_fin, float y_fin){
      P_init.modificaPunto(x_init,y_init);
      P_fin.modificaPunto(x_fin,y_fin);
    }

    void describeLinea(){
    printf("x0: %.1f, y0: %.1f",P_init.getX(),P_init.getY());
    printf("x1: %.1f, y1: %.1f",P_fin.getX(),P_fin.getY());

    }


};

#endif // LINEA_H
