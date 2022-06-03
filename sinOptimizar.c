#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 10000    // tamaño de las matrices
#define ITER 500000 // número de iteraciones de cada ejecución

int main(int argc, char const *argv[])
{
    struct timeval inicio, fin;
    double tiempo;
    int i, k;
    float *x, *y;
    float a = 0.0;

    x = malloc(sizeof(float) * N);
    y = malloc(sizeof(float) * N);

    gettimeofday(&inicio, NULL);

    for (k = 0; k < ITER; k++)
    {
        a = 0.0;
        for (i = 0; i < N; i++)
        {
            a = a + x[i] * y[i];
        }
    }

    gettimeofday(&fin, NULL);
    tiempo = (fin.tv_sec - inicio.tv_sec) + (fin.tv_usec - inicio.tv_usec)/1.e6;

    printf("Tiempo de ejecución: %f\n", tiempo);

    return 0;
}
