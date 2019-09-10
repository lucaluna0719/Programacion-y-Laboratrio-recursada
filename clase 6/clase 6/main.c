#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   /* char palabra[10];
    int largo;
    char otraPalabra[10];
    int i;
    int comp;

    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%[^\n]", otraPalabra);
    //printf("%s\n", palabra);

    strcat(palabra, otraPalabra);
    printf("%s", palabra);

    //comp = stricmp(palabra,otraPalabra);
//strcpy(palabra, otraPalabra);


  //fgets(palabra,10,stdin);
    /*largo = strlen(palabra);
    palabra[largo-1]='/0';
    largo= strlen(palabra);
    printf("Contiene %d letras\n", largo);
*/




    char nombre[15];
    char apellido[15];
    char apellidoNombre[30]; //Apellido, Nombre

    printf("Ingrese nombre: ");
    gets( nombre);
    printf("Ingrese apellido: ");
    gets(apellido);

    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcpy(apellidoNombre, nombre);

    printf("%s", apellidoNombre);


    return 0;
}
