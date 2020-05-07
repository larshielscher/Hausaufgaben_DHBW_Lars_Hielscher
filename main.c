#include <stdio.h>
#include <stdlib.h>

int main() {

    int lenx = 5;
    int leny = 4;

    int arr[4][5];

    int **mat = malloc(sizeof(int) * lenx);

    for (int i = 0; i < lenx; i++) {
        mat[i] = malloc(sizeof(int) * leny);
    }      

    printf("Value of vec: \n");
    for (int x = 0; x < lenx; x++) {
        
        for (int y = 0; y < leny; y++) {
            printf("%d ",mat[y][x]);
        }
        printf("\n");

    }
    return 0;
    }
