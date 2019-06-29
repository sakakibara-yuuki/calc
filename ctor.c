#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"


double* ctor(int m, int n, double* A){//縦読み行列を横読み行列へ変換
    double* C;
    C=(double*)malloc(sizeof(double)*m*n);

    for(int i=0; i<m; i++){//Cの行
        for(int j=0; j<n; j++){//Cの列
            *(C+j+i*n)=*(A+i+j*m);
        }
    }
    return C;
}