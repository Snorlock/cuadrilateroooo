#ifndef PUNTO_H
#define PUNTO_H
#include<iostream>

using namespace std;

class punto
{
    public:
        punto A(float x_val, float y_val){
        x= x_val;
        y= y_val;
        }
       void Describe(){
       cout << "x: " << x;
       cout << "y: " << y;
       }
       void setX(float x_val){
       x= x_val;
       }
       void setY(float y_val){
       y = y_val;
       }



    private:
        float x;
        float y;
};


#endif // PUNTO_H
