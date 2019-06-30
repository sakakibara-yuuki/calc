#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

double* mult(int m, int n, double* A, int k, int l, double* B){

    double* C;
    C=(double*)malloc(sizeof(double)*m*l);

    if(n != k){
        printf("This operator is not defined.\n");
    }else
    {

        //m * l 
        for(int j=0; j<l; j++){
            for(int i=0; i<m; i++){
                *(C+i+j*m)=0;
                for(int k=0; k<n; k++){
                *(C+i+j*m)+=(*(A+i+k*m))*(*(B+k+j*n));
                }
            }
        }

    }

    return C;
}
