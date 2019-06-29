#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"


void printmr(int m, int n, double* A){//横読み行列を横読み
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%.1f ",*(A+i*n+j));
        }
        printf("\n");
    }
}

void printmc(int m, int n, double* A){//縦読み行列を横読み
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%.1f ",*(A+i+j*m));
        }
        printf("\n");
    }
}