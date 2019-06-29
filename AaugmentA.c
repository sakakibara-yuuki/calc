#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

double* AaugmentA(int m, int n, double* A, int k, int l, double* B){
    double* C;
    C=(double*)malloc(sizeof(double)*m*(n+l));

    if (m != k)
    {
        printf("Thi is not defined.\n");
    }else
    {
        for(int j=0; j<n+l; j++){
            for(int i=0; i<m; i++){
                if (j<n)
                {
                    *(C+i+j*m)=*(A+i+j*m);
                }else
                {
                    *(C+i+j*m)=*(B+i+(j-n)*m);
                }
            }
        }

    }

    return C;

}