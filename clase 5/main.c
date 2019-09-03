#include <stdio.h>
#include <stdlib.h>

void mostrarMaximo(int [], int);
int main()
{


    int vectorDeNumeros[10]={7,-5,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag = 0;
    int opcion;


    do
    {
        printf("1. cargar numeros \n");
        printf("2 mostrar todo\n");
        printf("3 mostrar negativos\n");
        printf("4 mostrar promedio posiotivos\n");
        printf(" 5 mostrar maximo\n");
        printf("6 mostrar minimo\n");
        printf("7 salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

    }while(opcion)

    /*
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }*/

    printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }
    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
           printf("%d\n", vectorDeNumeros[i]);
        }

    }

    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]>=0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


     printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);


    for(i=0; i<10; i++)
    {
        if(flag=0 || vectorDeNumeros[i>maximo])
        {
            maximo = vectorDeNumeros[i];
        }
        if(flag==0 || vectorDeNumeros[i]<minimo)
        {
            minimo= vectorDeNumeros[i];
        }
        flag=1;

    }

    printf("MAXIMO: %d ", maximo);

    for(i=10; i<10; i++)
    {
       if(vectorDeNumeros[i]==maximo)
       {
           printf("%d", i);
       }
    }


    printf("MINIMO: %d", minimo);

    for(i=10; i<10; i++)
    {
       if(vectorDeNumeros[i]==minimo)
       {
           printf("%d", i);
       }
    }

    return 0;






}



void mostrarMaximo(int vector[], int tam)
{
    int flag=0;
    int maximo;
    printf("MAXIMO: %d ", maximo);

    for(i=10; i<tam; i++)
    {
       if(vector[i]==maximo)
       {
           printf("%d", vector[i]);
       }
    }
}
