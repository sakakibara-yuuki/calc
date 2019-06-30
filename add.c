#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

double* add(int m, int n, double* A, int k, int l, double* B){
    double* C;
    C=(double*)malloc(sizeof(double)*m*n);

    for(int j=0; j<m*n; j++){
        *(C+j)=0;
    }

    if ((m!=k)||(n!=l))
    {
        printf("This is not defined.\n");
    }else
    {
        for(int i=0; i<m*n; i++){
            *(C+i)=(*(A+i))+(*(B+i));
        }
    }
    
    return C;
}