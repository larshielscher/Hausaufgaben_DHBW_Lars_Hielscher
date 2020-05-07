#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double y, result;
    int i = 0;
    int maxiteraitons = 100;
    double* arrayy;
    double* arrayresult;
    arrayy = (double*)malloc(sizeof(double)*maxiteraitons);
    arrayresult = (double*)malloc(sizeof(double)*maxiteraitons);
    result = 5;
    y = result;
    
    while (result > 0.0001 || result < -0.0001 || i < maxiteraitons){
        y = y-((pow((y-3),3)-3)/(3*pow((y-3),2)));
        arrayy[i] = y;
        result = pow((y-3),3)-3;
        arrayresult[i] = result;
        i++;
        
        
    }
    printf("Die Nullstelle ist bei x = %f",y);
    
    
    return 0;
}
