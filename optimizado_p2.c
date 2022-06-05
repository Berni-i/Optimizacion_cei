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
    float a = 0.0, a1 = 0.0;

    FILE *fp = fopen("optimizados_p2.txt", "w");

    setlocale(LC_NUMERIC, "");

    for (int n = 0; n <= N+1; n += INCREMENTO)
    {

        x = malloc(sizeof(float) * n);
        y = malloc(sizeof(float) * n);

        //calentamiento de la caché
        for (k = 0; k < 1; k++)
        {
            a = a1 = 0.0;

            for (i = 0; i < n; i += 2)
            {
                a = a + x[i] * y[i];
                a1 = a1 + x[i + 1] * y[i + 1];
            }

            a = a + a1;
        }

        gettimeofday(&inicio, NULL);

        for (k = 0; k < ITER; k++)
        {
            a = a1 = 0.0;

            for (i = 0; i < n; i += 2)
            {
                a = a + x[i] * y[i];
                a1 = a1 + x[i + 1] * y[i + 1];
            }

            a = a + a1;
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