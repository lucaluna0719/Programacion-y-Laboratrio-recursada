#include <stdio.h>
#include <stdlib.h>


int funcion(int*);
int main()
{
        int numero = 4;
        printf("El numero antes de modificar es: %d\n",numero);
        funcion(&numero);
        printf("\nEl numero despues de modificar es: %d",numero);
        return 0;
}
int funcion(int* numero)
{
    printf("Ingrese un numero: ");
    scanf("%d", numero);
    //*numero = 100;

}
