#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <locale.h>

#define N 50000    // tamaño de las matrices
#define ITER 20000 // número de iteraciones de cada ejecución
#define INCREMENTO 2000

int main(int argc, char const *argv[])
{
    struct timeval inicio, fin;
    double tiempo;
    int i, k;
    float *x, *y;
    float a = 0.0, a1 = 0.0, a2 = 0.0, a3 = 0.0, a4 = 0.0, a5 = 0.0, a6 = 0.0, a7 = 0.0, a8=0.0, a9=0.0, a10=0.0, a11=0.0, a12=0.0, a13=0.0, a14=0.0, a15=0.0, a16=0.0, a17=0.0, a18=0.0, a19=0.0, a20=0.0, a21=0.0, a22=0.0, a23=0.0, a24=0.0, a25=0.0, a26=0.0, a27=0.0, a28=0.0, a29=0.0, a30=0.0, a31=0.0, a32=0.0, a33=0.0, a34=0.0, a35=0.0, a36=0.0, a37=0.0, a38=0.0, a39=0.0;

    FILE *fp = fopen("optimizados_p40.txt", "w");

    setlocale(LC_NUMERIC, "");

    for (int n = 0; n <= N+1; n += INCREMENTO)
    {

        x = malloc(sizeof(float) * n);
        y = malloc(sizeof(float) * n);

        //calentamiento de la caché
        for (k = 0; k < 1; k++)
        {
            a = a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = a10 = a11 = a12 = a13 = a14 = 0.0, a15 = 0.0, a16 = 0.0, a17 = 0.0, a18 = 0.0, a19 = 0.0, a20 = 0.0, a21 = 0.0, a22 = 0.0, a23 = 0.0, a24 = 0.0, a25 = 0.0, a26 = 0.0, a27 = 0.0, a28 = 0.0, a29 = 0.0, a30 = 0.0, a31 = 0.0, a32 = 0.0, a33 = 0.0, a34 = 0.0, a35 = 0.0, a36 = 0.0, a37 = 0.0, a38 = 0.0, a39 = 0.0;

            for (i = 0; i < n; i += 40)
            {
                a = a + x[i] * y[i];
                a1 = a1 + x[i + 1] * y[i + 1];
                a2 = a2 + x[i + 2] * y[i + 2];
                a3 = a3 + x[i + 3] * y[i + 3];
                a4 = a4 + x[i + 4] * y[i + 4];
                a5 = a5 + x[i + 5] * y[i + 5];
                a6 = a6 + x[i + 6] * y[i + 6];
                a7 = a7 + x[i + 7] * y[i + 7];
                a8 = a8 + x[i + 8] * y[i + 8];
                a9 = a9 + x[i + 9] * y[i + 9];
                a10 = a10 + x[i + 10] * y[i + 10];
                a11 = a11 + x[i + 11] * y[i + 11];
                a12 = a12 + x[i + 12] * y[i + 12];
                a13 = a13 + x[i + 13] * y[i + 13];
                a14 = a14 + x[i + 14] * y[i + 14];
                a15 = a15 + x[i + 15] * y[i + 15];
                a16 = a16 + x[i + 16] * y[i + 16];
                a17 = a17 + x[i + 17] * y[i + 17];
                a18 = a18 + x[i + 18] * y[i + 18];
                a19 = a19 + x[i + 19] * y[i + 19];
                a20 = a20 + x[i + 20] * y[i + 20];
                a21 = a21 + x[i + 21] * y[i + 21];
                a22 = a22 + x[i + 22] * y[i + 22];
                a23 = a23 + x[i + 23] * y[i + 23];
                a24 = a24 + x[i + 24] * y[i + 24];
                a25 = a25 + x[i + 25] * y[i + 25];
                a26 = a26 + x[i + 26] * y[i + 26];
                a27 = a27 + x[i + 27] * y[i + 27];
                a28 = a28 + x[i + 28] * y[i + 28];
                a29 = a29 + x[i + 29] * y[i + 29];
                a30 = a30 + x[i + 30] * y[i + 30];
                a31 = a31 + x[i + 31] * y[i + 31];
                a32 = a32 + x[i + 32] * y[i + 32];
                a33 = a33 + x[i + 33] * y[i + 33];
                a34 = a34 + x[i + 34] * y[i + 34];
                a35 = a35 + x[i + 35] * y[i + 35];
                a36 = a36 + x[i + 36] * y[i + 36];
                a37 = a37 + x[i + 37] * y[i + 37];
                a38 = a38 + x[i + 38] * y[i + 38];
                a39 = a39 + x[i + 39] * y[i + 39];

    
            
            }

            a = a + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14 + a15 + a16 + a17 + a18 + a19 + a20 + a21 + a22 + a23 + a24 + a25 + a26 + a27 + a28 + a29 + a30 + a31 + a32 + a33 + a34 + a35 + a36 + a37 + a38 + a39;
        }

        gettimeofday(&inicio, NULL);

        for (k = 0; k < ITER; k++)
        {
            a = a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = a10 = a11 = a12 = a13 = a14 = 0.0, a15 = 0.0, a16 = 0.0, a17 = 0.0, a18 = 0.0, a19 = 0.0, a20 = 0.0, a21 = 0.0, a22 = 0.0, a23 = 0.0, a24 = 0.0, a25 = 0.0, a26 = 0.0, a27 = 0.0, a28 = 0.0, a29 = 0.0, a30 = 0.0, a31 = 0.0, a32 = 0.0, a33 = 0.0, a34 = 0.0, a35 = 0.0, a36 = 0.0, a37 = 0.0, a38 = 0.0, a39 = 0.0;

            for (i = 0; i < n; i += 40)
            {
                a = a + x[i] * y[i];
                a1 = a1 + x[i + 1] * y[i + 1];
                a2 = a2 + x[i + 2] * y[i + 2];
                a3 = a3 + x[i + 3] * y[i + 3];
                a4 = a4 + x[i + 4] * y[i + 4];
                a5 = a5 + x[i + 5] * y[i + 5];
                a6 = a6 + x[i + 6] * y[i + 6];
                a7 = a7 + x[i + 7] * y[i + 7];
                a8 = a8 + x[i + 8] * y[i + 8];
                a9 = a9 + x[i + 9] * y[i + 9];
                a10 = a10 + x[i + 10] * y[i + 10];
                a11 = a11 + x[i + 11] * y[i + 11];
                a12 = a12 + x[i + 12] * y[i + 12];
                a13 = a13 + x[i + 13] * y[i + 13];
                a14 = a14 + x[i + 14] * y[i + 14];
                a15 = a15 + x[i + 15] * y[i + 15];
                a16 = a16 + x[i + 16] * y[i + 16];
                a17 = a17 + x[i + 17] * y[i + 17];
                a18 = a18 + x[i + 18] * y[i + 18];
                a19 = a19 + x[i + 19] * y[i + 19];
                a20 = a20 + x[i + 20] * y[i + 20];
                a21 = a21 + x[i + 21] * y[i + 21];
                a22 = a22 + x[i + 22] * y[i + 22];
                a23 = a23 + x[i + 23] * y[i + 23];
                a24 = a24 + x[i + 24] * y[i + 24];
                a25 = a25 + x[i + 25] * y[i + 25];
                a26 = a26 + x[i + 26] * y[i + 26];
                a27 = a27 + x[i + 27] * y[i + 27];
                a28 = a28 + x[i + 28] * y[i + 28];
                a29 = a29 + x[i + 29] * y[i + 29];
                a30 = a30 + x[i + 30] * y[i + 30];
                a31 = a31 + x[i + 31] * y[i + 31];
                a32 = a32 + x[i + 32] * y[i + 32];
                a33 = a33 + x[i + 33] * y[i + 33];
                a34 = a34 + x[i + 34] * y[i + 34];
                a35 = a35 + x[i + 35] * y[i + 35];
                a36 = a36 + x[i + 36] * y[i + 36];
                a37 = a37 + x[i + 37] * y[i + 37];
                a38 = a38 + x[i + 38] * y[i + 38];
                a39 = a39 + x[i + 39] * y[i + 39];

    
            
            }

            a = a + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14 + a15 + a16 + a17 + a18 + a19 + a20 + a21 + a22 + a23 + a24 + a25 + a26 + a27 + a28 + a29 + a30 + a31 + a32 + a33 + a34 + a35 + a36 + a37 + a38 + a39;
        }

        gettimeofday(&fin, NULL);
        tiempo = (fin.tv_sec - inicio.tv_sec) + (fin.tv_usec - inicio.tv_usec) / 1.e6;

        //escribir tiempo en el fichero 
        fprintf(fp, "%d %f\n", n, tiempo);

        printf("Tiempo de ejecución: %f\n", tiempo);

        free(x);
        free(y);
    }

    fclose(fp);

    return 0;
}