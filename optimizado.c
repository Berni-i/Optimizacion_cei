#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 10000     // tamaño de las matrices
#define ITER 500000 // número de iteraciones de cada ejecución

int main(int argc, char const *argv[])
{
    struct timeval inicio, fin;
    double tiempo;
    int i, k;
    float *x, *y;
    float a = 0.0, a1= 0.0, a2 = 0.0, a3 = 0.0;

    x = malloc(sizeof(float) * N);
    y = malloc(sizeof(float) * N);

    gettimeofday(&inicio, NULL);

    for (k = 0; k < ITER; k++)
    {
        a = a1 = a2 = a3 = 0.0;

        for (i = 0; i < N; i += 4)
        {
            a = a + x[i] * y[i];
            a1 = a1 + x[i + 1] * y[i + 1];
            a2 = a2 + x[i + 2] * y[i + 2];
            a3 = a3 + x[i + 3] * y[i + 3];
        }
        
        a = a + a1 + a2 + a3;
    }

    gettimeofday(&fin, NULL);
    tiempo = (fin.tv_sec - inicio.tv_sec) + (fin.tv_usec - inicio.tv_usec) / 1.e6;

    printf("Tiempo de ejecución: %f\n", tiempo);

    return 0;
}