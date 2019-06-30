#ifndef MATRIX_H_
#define MATRIX_H_


void printmr(int m, int n, double* A);
void printmc(int m, int n, double* A);
double* rtoc(int m, int n, double* A);
double* ctor(int m, int n, double* A);
double* AaugmentA(int m, int n, double* A, int k, int l, double* B);
double* add(int m, int n, double* A, int k, int l, double* B);
double* mult(int m, int n, double* A, int k, int l, double* B);

#endif //MATRIX_H_
