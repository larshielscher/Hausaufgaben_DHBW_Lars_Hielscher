#include <math.h>

double fx(double y){     
    return pow((y-3),3)-3;
}



double dfx(double(*fnc)(double),double x){
    double dx = 1e-8;

    return (fnc(x+dx)-fnc(x))/dx;
}