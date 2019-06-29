#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"


double* rtoc(int m, int n, double* A){//横読み行列を縦読み行列へ変換
    double* C;
    C=(double*)malloc(sizeof(double)*m*n);
    
    for(int j=0; j<n; j++){//Cの列
        for(int i=0; i<m; i++){//Cの行
            *(C+i+j*m)=*(A+j+i*n);
        }
    }
    return C;
}