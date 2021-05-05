#include<stdio.h>
#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        float x;
        float y;

    public:
        Punto(float x_val, float y_val){
        x = x_val;
        y = y_val;
        }
    void describe(){
   printf("x:  %.1f\n",x);
   printf("y: %.1f\n",y);
    }
    void setX(float x_val){
        x = x_val;
    }
    float getX(){return x;}
    void setY(float y_val){
    y = y_val;
    }
    void modificaPunto(float x_val, float y_val){
    x = x_val;
    y = y_val;
    }
    float getY(){return y;}
};

#endif // PUNTO_H
