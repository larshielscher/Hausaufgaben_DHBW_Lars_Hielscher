#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myFunction.h"


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

    //fcn pointer 
    double (*fxPTR) (double);
    fxPTR = fx;
    //double (*dfxPTR) (double(*)(double),double);
    //dfxPTR = dfx;



    
    while (result > 0.0001 || result < -0.0001 || i < maxiteraitons){
        y = y-(fxPTR(y)/dfx(fxPTR,y));
        arrayy[i] = y;
        result = pow((y-3),3)-3;
        arrayresult[i] = result;
        i++;
        printf("%d\n",i);
        
    }
    printf("Die Nullstelle ist bei x = %f",y);
    
        FILE* fp;
        fp = fopen("data2plot.txt", "w");
        if(fp == NULL){
            printf("Datei konnte nicht geöffnet werden.\n");
            return -1;
        }

    for (int j = 0; j <= i; j++){
        fprintf(fp,"%d %lf %lf\n", j, arrayy[j],arrayresult[j]);
    }

    fclose(fp);

    char * commandsForGnuplot[] = {"set titele \"Results of Newton\"",
    "set multiplot",
    "set size 0.8,0.4",
    "set origin 0.1,0.1",
    "set xlabel\"iterations\"",
    "plot 'data2plot.txt' using 1:2 title 'xVals'",
    "set size 0.8,0.4",
    "set origin 0.1,0.6",
    "plot 'data2plot.txt' using 1:3 title 'yVals'",
    "unset multiplot"
    };

    FILE * gnuplotPipe = popen("gnuplot -persistent", "w");
    for (int j=0; j < 11; j++) fprintf(gnuplotPipe, "%s \n", commandsForGnuplot[j]);  
    
    
}

/*
JW-2020-05-12:
--------------
> good implementation! (8/10) 
> missing extra lib (*.c + *.h) incl. includegard includeguards: -1 Pkt
> while loop will always run till maxiterations as you used logical or's: -1Pkt
*/
