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
    float a = 0.0, a1 = 0.0, a2 = 0.0, a3 = 0.0, a4 = 0.0, a5 = 0.0, a6 = 0.0, a7 = 0.0, a8=0.0, a9=0.0;

    FILE *fp = fopen("optimizados_p10.txt", "w");

    setlocale(LC_NUMERIC, "");

    for (int n = 0; n <= N+1; n += INCREMENTO)
    {

        x = malloc(sizeof(float) * n);
        y = malloc(sizeof(float) * n);

        //calentamiento de la caché
        for (k = 0; k < 1; k++)
        {
            a = a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = 0.0;

            for (i = 0; i < n; i += 10)
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
            
            }

            a = a + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9;
        }

        gettimeofday(&inicio, NULL);

        for (k = 0; k < ITER; k++)
        {
            a = a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = 0.0;

            for (i = 0; i < n; i += 10)
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
            
            }

            a = a + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9;
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