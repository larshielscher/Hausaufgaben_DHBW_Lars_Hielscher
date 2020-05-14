#include <math.h>

void multi(double a, double b, double c, double d, double *resulta, double *resultb){
    *resulta = ((a*c)-(b*d));
    *resultb = ((a*d)+(b*c));
}

void div(double a, double b, double c, double d, double *resulta, double *resultb){
    *resulta = (((a*c)+(b*d))/(pow(c,2)+pow(d,2)));
    *resultb = (((b*c)-(a*d))/(pow(c,2)+pow(d,2)));
}

void add(double a, double b, double c, double d, double *resulta, double *resultb){
    *resulta = (a+c);
    *resultb = (b+d);    
}

void sub(double a, double b, double c, double d, double *resulta, double *resultb){
    *resulta = (a-c);
    *resultb = (b-d); 
}