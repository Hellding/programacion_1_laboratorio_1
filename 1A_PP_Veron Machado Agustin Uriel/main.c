#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define MAX 4


int main()
{

    eDuenio chofer[MAX]={{85,"juan perez","lores",200,5643217,1},{100,"ren tenka","cipre",2456,8945623,1}};
    eAuto automovil[MAX]={{"tyu 845",1,85,15.20,1},{"gha 693",3,100,6.30,1}};

    char seguir='s';
    char cont='s';
    int opcion;
    char eleccion;

    InicializarEstructura1(chofer, MAX);
    InicializarEstructura2(automovil, MAX);

    while(seguir=='s')
    {
        system("cls");
        printf("\n1_Alta del Duenio");
        printf("\n2_Modificacion del Duenio");
        printf("\n3_Ingreso del Automovil");
        printf("\n4_Egreso del Automovil");
        printf("\n5_Informar");
        printf("\n6_Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            AltaPeople1(chofer,MAX);
            break;

        case 2:
            system("cls");
            ModificoPeople(chofer,MAX);
            break;

        case 3:
            system("cls");
            AltaPeople2(automovil,chofer,MAX);
            break;

        case 4:
            system("cls");
            EgresoAuto(chofer,automovil,MAX);
            break;

        case 5:
            while(cont=='s')
            {
                system("cls");
                printf("\na_Lista de Autos estacionados con sus Duenios,ordenado por hora de entrada y patente");
                printf("\nb_Todos los Propietarios de Autos marca AUDI");
                printf("\nc_Recaudaion total por marca");
                printf("\nd_Recaudacion total del estacionamiento");
                printf("\ne_Salir\n");

                fflush(stdin);
                scanf("%c",&eleccion);

                if(eleccion>'a'||eleccion<'e')
                {
                    switch(eleccion)
                    {
                    case 'a':
                        AutosOrdenados(automovil,MAX);
                        MuestroAutosconDuenio(chofer,automovil,MAX);
                        system("pause");
                        break;
                    case 'b':
                        MuestroAUDI(chofer,automovil,MAX);
                        system("pause");
                        break;
                    case 'c':
                        GananciaporMarca(automovil,MAX);
                        system("pause");
                        break;
                    case 'd':
                        GananciaTotal(automovil,MAX);
                        system("pause");
                        break;
                    case 'e':
                        cont='n';
                        break;
                    }
                }

            }
            break;
        case 6:
            printf("Gracias por utilizar este programa");
            seguir='n';
            break;
        }
    }

    return 0;
}
