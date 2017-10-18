#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

void InicializarEstructura1(eDuenio usuario[],int tam)
{
    int i;
    for(i=2; i<tam; i++)
    {
        usuario[i].estado=0;
    }
}

void InicializarEstructura2(eAuto usuario[],int tam)
{
    int i;
    for(i=2; i<tam; i++)
    {
        usuario[i].estado=0;
    }
}



int ObtenerEspacioLibre1(eDuenio usuario[],int tam)
{
    int i;
    int indice=-1;
    for(i=0; i<tam; i++)
    {
        if(usuario[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int ObtenerEspacioLibre2(eAuto usuario[],int tam)
{
    int i;
    int indice=-1;
    for(i=0; i<tam; i++)
    {
        if(usuario[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int BuscarPorID1(eDuenio usuario[], int auxDNI, int tam)
{
    int i;
    int indice=-1;

    for(i=0; i<tam; i++)
    {
        if(usuario[i].idDuenio==auxDNI&&usuario[i].estado==1)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int BuscarPorID2(eAuto usuario[],char auxDNI[], int tam)
{
    int i;
    int indice=-1;

    for(i=0; i<tam; i++)
    {
        if((strcmp(usuario[i].patente,auxDNI)==0)&&usuario[i].estado==1)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void AltaPeople1(eDuenio duenio[],int tam)
{
    eDuenio newduenio;

    int cons=-1;
    int i;
    int ind;
    int id;
    long int auxtarject;
    int largob;
    int auxnro;
    char buffer[100];

    for(i=0; i<tam; i++)
    {
        ind=ObtenerEspacioLibre1(duenio,tam);

        while(ind<tam)
        {
            system("cls");
            printf("\nIngrese su ID: ");
            scanf("%d",&id);
            if((BuscarPorID1(duenio,id,tam))!=cons)
            {
                printf("El ID ya fue ingresado");
                printf("\nReingrese su ID: ");
                scanf("%d",&id);
            }
            else
            {
                newduenio.idDuenio=id;
            }
            printf("\nIngrse su Nombre y Apellido:");
            fflush(stdin);
            gets(buffer);
            largob=strlen(buffer);
            if(largob>50&&largob<2)
            {
                printf("\nERROR!!!Lo que escribio es mayor a la cantidad disponible de espacio para guardar.");
                printf("\nReingrese su Nombre y Apellido: ");
                fflush(stdin);
                gets(buffer);
            }
            else
            {
                strcpy(newduenio.nombreapellido,buffer);
            }
            printf("\nIngrese su direccion:");
            fflush(stdin);
            gets(buffer);
            largob=strlen(buffer);
            if(largob>50&&largob<2)
            {
                printf("\nERROR!!!Lo que escribio es mayor a la cantidad disponible de espacio para guardar.");
                printf("\nReingrese su direccion: ");
                fflush(stdin);
                gets(buffer);
            }
            else
            {
                strcpy(newduenio.direccion,buffer);
            }
            printf("\nIngrese el numero de su direccion: ");
            scanf("%d",&auxnro);
            if(auxnro<1)
            {
                printf("\nERROR!!!Ese numero de direccion no existe");
                printf("\nReingrese el numero de su direccion: ");
                scanf("%d",&auxnro);
            }
            else
            {
                newduenio.nrodireccion=auxnro;
            }
            printf("\nIngrese el numero de su tarjeta de credito: ");
            scanf("%ld",&auxtarject);
            if(auxtarject<10000||auxtarject>100000000)
            {
                printf("ERROR!!!el numero de su tarjeta no existe o esta vencida");
                printf("\nReingrese el numero de su tarjeta de credito: ");
                scanf("%ld",&auxtarject);
            }
            else
            {
                newduenio.numerodetarjeta=auxtarject;
            }
            newduenio.estado=1;
            duenio[ind]=newduenio;
        }
    }
}

void ModificoPeople(eDuenio duenio[],int tam)
{
    eDuenio newduenio;

    int cons=-1;
    int ind;
    int id;
    long int auxtarject;
    int auxestado;
    int largob;
    int auxnro;
    char buffer[100];

    ind=ObtenerEspacioLibre1(duenio,tam);

    system("cls");
    printf("\nIngrese su ID: ");
    scanf("%d",&id);
    if((BuscarPorID1(duenio,id,tam))!=cons)
    {
        printf("\nIngrse su Nombre y Apellido:");
        fflush(stdin);
        gets(buffer);
        largob=strlen(buffer);
        if(largob>50&&largob<2)
        {
            printf("\nERROR!!!Lo que escribio es mayor a la cantidad disponible de espacio para guardar.");
            printf("\nReingrese su Nombre y Apellido: ");
            fflush(stdin);
            gets(buffer);
        }
        else
        {
            strcpy(newduenio.nombreapellido,buffer);
        }
        printf("\nIngrese su direccion:");
        fflush(stdin);
        gets(buffer);
        largob=strlen(buffer);
        if(largob>50&&largob<2)
        {
            printf("\nERROR!!!Lo que escribio es mayor a la cantidad disponible de espacio para guardar.");
            printf("\nReingrese su direccion: ");
            fflush(stdin);
            gets(buffer);
        }
        else
        {
            strcpy(newduenio.direccion,buffer);
        }
        printf("\nIngrese el numero de su direccion: ");
        scanf("%d",&auxnro);
        if(auxnro<1)
        {
            printf("\nERROR!!!Ese numero de direccion no existe");
            printf("\nReingrese el numero de su direccion: ");
            scanf("%d",&auxnro);
        }
        else
        {
            newduenio.nrodireccion=auxnro;
        }
        printf("\nIngrese el numero de su tarjeta de credito: ");
        scanf("%ld",&auxtarject);
        if(auxtarject<10000||auxtarject>100000000)
        {
            printf("ERROR!!!el numero de su tarjeta no existe o esta vencida");
            printf("\nReingrese el numero de su tarjeta de credito: ");
            scanf("%ld",&auxtarject);
        }
        else
        {
            newduenio.numerodetarjeta=auxtarject;
        }
        printf("\nIngrese el estado del duenio:");
        printf("\n0-Inactivo 1-Activo");
        scanf("%d",&auxestado);
        if(auxestado==0||auxestado==1)
        {
            newduenio.estado=auxestado;
        }
        else
        {
            printf("\nERROR!!!El valor que ingreso no corresponde a ninguna opcion habil.");
            printf("\nIngrese el estado del duenio:");
            printf("\n0-Inactivo 1-Activo");
            scanf("%d",&auxestado);
        }

    }
    else
    {
        printf("El ID no Existe");
        printf("\nReingrese su ID: ");
        scanf("%d",&id);
    }

    duenio[ind]=newduenio;
}


void AltaPeople2(eAuto automo[],eDuenio duenio[],int tam)
{
    eAuto newau;

    int cons=-1;
    int i;
    int ind;
    int id;
    int auxmarca;
    float auxentrada;
    int largob;
    char buffer[100];

    for(i=0; i<tam; i++)
    {
        ind=ObtenerEspacioLibre2(automo,tam);

        if(ind<tam)
        {
            system("cls");
            printf("Ingrese su Patente: ");
            fflush(stdin);
            gets(buffer);
            largob=strlen(buffer);
            if(largob<4||largob>8)
            {
                printf("ERROR!!!Su patente no encaja con las de auto");
                printf("Reingrese su Patente:");
                fflush(stdin);
                gets(buffer);
                largob=strlen(buffer);
            }
            else
            {
                strcpy(newau.patente,buffer);
            }
            printf("\nElija la marca de su Auto");
            printf("\n1-ALPHA_ROMEO 2-FERRARI 3-AUDI 4-OTRO");
            scanf("\n%d",&auxmarca);
            if(auxmarca<1||auxmarca>4)
            {
                printf("\nERROR!!!Esa opcion no existe");
                printf("\nElija la marca de su Auto: ");
                scanf("\n%d",&auxmarca);
            }
            else
            {
                newau.marca=auxmarca;
            }
            printf("\nIngrese su ID de Duenio:");
            scanf("%d",&id);
            if((BuscarPorID1(duenio,id,tam))==cons)
            {
                printf("\nERROR!!!El ID no existe");
                printf("\nReingrese su ID: ");
                scanf("%d",&id);
            }
            else
            {
                newau.duenio=id;
            }
            printf("\nIngrese el horario de entrada: ");
            scanf("%f",&auxentrada);
            if(auxentrada<0||auxentrada>24)
            {
                printf("\nERROR!!!Ese horario no existe");
                printf("\nReingrese el horario de entrada: ");
                scanf("%f",&auxentrada);
            }
            else
            {
                newau.horaentrada=auxentrada;
            }
            newau.estado=1;
            automo[ind]=newau;
        }
        else
        {
            printf("\nNo hay espacio libre para ingresar un duenio");
            break;
        }
    }
}

void EgresoAuto(eDuenio dueno[],eAuto automovil[],int tam)
{
    int auxid;
    char auxpatente[20];
    int cons=-1;
    int ind1;
    int ind2;
    float horasalida;
    float tiempo;
    float coste;

    printf("\nIngrese la ID del dueño:");
    scanf(" %d",&auxid);
    ind1=BuscarPorID1(dueno,auxid,tam);
    if(ind1!=cons&&dueno[ind1].estado==1)
    {
        printf("\nIngrese la Patente de su Auto:");
        fflush(stdin);
        gets(auxpatente);
        ind2=BuscarPorID2(automovil,auxpatente,tam);
        if(ind2!=cons&&automovil[ind2].estado==1)
        {
            printf("\nIngrese la hora de salida: ");
            scanf(" %f",&horasalida);
            tiempo=horasalida-automovil[ind2].horaentrada;
            if(dueno[ind1].idDuenio==automovil[ind2].duenio)
            {
                if(tiempo<24)
                {
                    printf("--Nombre/Apellido|Patente|Marca\t\t|Coste--\n");
                    printf("--%s\t |",dueno[ind1].nombreapellido);
                    if(automovil[ind2].marca==1)
                    {
                        coste=tiempo*150;
                        printf("%s|ALPHA_ROMEO   |$%.2f-- \n",automovil[ind2].patente,coste);
                        system("pause");
                    }
                    else if(automovil[ind2].marca==2)
                    {
                        coste=tiempo*175;
                        printf("%s|FERRARI       |$%.2f-- \n",automovil[ind2].patente,coste);
                        system("pause");
                    }
                    else if(automovil[ind2].marca==3)
                    {
                        coste=tiempo*200;
                        printf("%s|AUDI\t\t|$%.2f-- \n",automovil[ind2].patente,coste);
                        system("pause");
                    }
                    else if(automovil[ind2].marca==4)
                    {
                        coste=tiempo*250;
                        printf("%s|OTRO\t\t|$%.2f-- \n",automovil[ind2].patente,coste);
                        system("pause");
                    }
                }
            }
        }
    }
}


void AutosOrdenados(eAuto vehiculo[],int tam)
{
    eAuto auxvehiculo;
    int i,j;
    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vehiculo[i].horaentrada>vehiculo[j].horaentrada)
            {
                auxvehiculo=vehiculo[i];
                vehiculo[i]=vehiculo[j];
                vehiculo[j]=auxvehiculo;
            }
            if(strcmp(vehiculo[i].patente,vehiculo[j].patente)==1)
            {
                auxvehiculo=vehiculo[i];
                vehiculo[i]=vehiculo[j];
                vehiculo[j]=auxvehiculo;
            }
        }
    }
}

void MuestroAutosconDuenio(eDuenio dueno[],eAuto automovil[],int tam)
{
    int i,j;

    printf("\tPatente|Marca\t   |Nombre/Apellido|Direccion/Nro|Tarjeta|\n");

    for(i=0; i<tam; i++)
    {
        if(automovil[i].marca==1&&automovil[i].estado==1)
        {
            printf("\t%s|ALPHA_ROMEO|",automovil[i].patente);
        }
        else if(automovil[i].marca==2&&automovil[i].estado==1)
        {
            printf("\t%s|FERRARI\t|",automovil[i].patente);
        }
        else if(automovil[i].marca==3&&automovil[i].estado==1)
        {
            printf("\t%s|AUDI\t   |",automovil[i].patente);
        }
        else if(automovil[i].marca==4&&automovil[i].estado==1)
        {
            printf("\t%s|OTRO\t   |",automovil[i].patente);
        }
        for(j=0; j<tam; j++)
        {
            if(automovil[i].duenio==dueno[j].idDuenio&&dueno[j].estado==1)
            {
                printf("%s\t   |%s:%d\t |%ld|\n\n",dueno[j].nombreapellido,dueno[j].direccion,dueno[j].nrodireccion,dueno[j].numerodetarjeta);
            }

        }
    }
}

void MuestroAUDI(eDuenio dueno[],eAuto automovil[],int tam)
{
    int i,j;

    system("cls");

    printf("---Propietarios de Autos marca AUDI---\n");
    printf("|Nombre/Apellido|Direccion/Nro|Tarjeta|\n");

    for(i=0; i<tam; i++)
    {
        if(automovil[i].marca==3&&automovil[i].estado==1)
        {
            for(j=0; j<tam; j++)
            {
                if(automovil[i].duenio==dueno[j].idDuenio&&dueno[j].estado==1)
                {
                    printf("|%s\t|%s:%d   |%ld|\n\n",dueno[j].nombreapellido,dueno[j].direccion,dueno[j].nrodireccion,dueno[j].numerodetarjeta);
                }

            }
        }
    }
}

void GananciaporMarca(eAuto automovil[],int tam)
{
    int i;
    float horaest;
    float tiempo;
    float coste;
    float total[]= {0,0,0,0};

    printf("Ingrese el horario de cobro: ");
    scanf("%f",&horaest);

    for(i=0; i<tam; i++)
    {
        if(automovil[i].marca==1&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*150;
            total[0]=total[0]+coste;
        }
        else if(automovil[i].marca==2&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*175;
            total[1]=total[1]+coste;
        }
        else if(automovil[i].marca==3&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*200;
            total[2]=total[2]+coste;
        }
        else if(automovil[i].marca==4&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*250;
            total[3]=total[3]+coste;
        }
    }


    system("cls");
    printf("\t|Ganancia total por Marca\n");

    for(i=0; i<tam; i++)
    {
        if(automovil[i].marca==1&&automovil[i].estado==1)
        {
            printf("\t|ALPHA_ROMEO: $%.2f|\n",total[0]);
        }
        else if(automovil[i].marca==2&&automovil[i].estado==1)
        {
            printf("\t|FERRARI: $%.2f|\n",total[1]);
        }
        else if(automovil[i].marca==3&&automovil[i].estado==1)
        {
            printf("\t|AUDI: $%.2f|\n",total[2]);
        }
        else if(automovil[i].marca==4&&automovil[i].estado==1)
        {
            printf("\t|OTRO: $%.2f|\n",total[3]);
        }
    }
}

void GananciaTotal(eAuto automovil[],int tam)
{
    int i;
    float horaest;
    float tiempo;
    float coste;
    float total=0;

    printf("Ingrese el horario de cobro: ");
    scanf("%f",&horaest);

    for(i=0; i<tam; i++)
    {
        if(automovil[i].marca==1&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*150;
            total=total+coste;
        }
        else if(automovil[i].marca==2&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*175;
            total=total+coste;
        }
        else if(automovil[i].marca==3&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*200;
            total=total+coste;
        }
        else if(automovil[i].marca==4&&automovil[i].estado==1)
        {
            tiempo=horaest-automovil[i].horaentrada;
            coste=tiempo*250;
            total=total+coste;
        }
    }
    system("cls");
    printf("|Ganancia Total: $%.2f|\n",total);
}
