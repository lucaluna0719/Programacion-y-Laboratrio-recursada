#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

 char nombre[50];
 int nota;
 int legajo;
 int estaVacio;// 0  para no 1 para si esta vaicio.


}eAlumno;
void inicializarAlumnos(eAlumno listaDeAlumnos[], int tam);
void listarAlumnos(eAlumno listaDeAlumnos[], int tam);


int main()
{
    //int numero;
    int i;
    int flag = 1;
   // int listadoDeEnteros[5];
    eAlumno listadoDeAlumnos[5];
    eAlumno unAlumno;
    eAlumno otroAlumno;

    inicializarAlumnos(listadoDeAlumnos, 5);

    printf("ingrese nota: ");
    scanf("%d", &unAlumno.nota);
    printf("El numero es: %d\n", unAlumno.nota);
   // gets(unAlumno);
    printf("ingrese nombre: ");
    scanf("%s", &unAlumno.nombre);
    printf("el nombre  es %s\n", unAlumno.nombre);

    otroAlumno = unAlumno;
    printf(" el otro es: %s y tiene nota %d", otroAlumno.nombre, otroAlumno.nota);


    return 0;
}
void inicializarAlumnos(eAlumno listaDeAlumnos[], int tam)
{
    int i;
     for(i=0; i<5; i++)
    {
        listaDeAlumnos[i].estaVacio=1;
    }
}
void listarAlumnos(eAlumno pedro[], int tam)
{
    int i;
    int flag = 1;
    for(i=0;i<5;i++)
    {
        if(pedro[i].estaVacio == 0)
        {
            printf("El legajo es %d\n El nombre es %s\n La nota es %d", pedro[i].legajo, pedro[i].nombre ,pedro[i].nota);
            flag = 1;
        }
    }
    if (flag== 1)
    {
        printf("esta ocupado");
    }
}
