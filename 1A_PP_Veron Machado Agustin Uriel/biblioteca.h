#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idDuenio;
    char nombreapellido[50];
    char direccion[20];
    int nrodireccion;
    long int numerodetarjeta;
    int estado;
}eDuenio;

typedef struct
{
    char patente[10];
    int marca;
    int duenio;
    int horaentrada;
    int estado;
}eAuto;

/** \brief Inicializa la estructura para su futuro uso.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como paramaetro.
 * \return
 *
 */
void InicializarEstructura1(eDuenio usuario[], int tam);

/** \brief Inicializa la estructura para su futuro uso.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como paramaetro.
 * \return
 *
 */
void InicializarEstructura2(eAuto usuario[], int tam);

void HardcodeoEstructuras(eDuenio[],eAuto[],int);

/** \brief Obtiene el primer indice libre del array.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como parmetro.
 * \return el primer indice disponible.
 */
int ObtenerEspacioLibre1(eDuenio usuario[], int tam);

/** \brief Obtiene el primer indice libre del array.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como parmetro.
 * \return el primer indice disponible.
 */
int ObtenerEspacioLibre2(eAuto usuario[], int tam);

/** \brief Obtiene el indice que coincide con el dni pasado por parametro.
 *
 * \param usuario el array se pasa como parametro.
 * \param dni el dni a ser buscado en el array.
 * \return el indice en donde se encuentra el elemento que coincide con el parametro dni.
 */
int BuscarPorID1(eDuenio usuario[], int dni, int tam);

/** \brief Pide la informacion de la persona y la guarda en el sistema.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como paramaetro.
 * \return
 *
 */
void AltaPeople1(eDuenio duenio[], int tam);

void ModificoPeople(eDuenio duenio[],int tam);

/** \brief Pide la informacion de la persona y la guarda en el sistema.
 *
 * \param usuario el array se pasa como parametro.
 * \param tam tamaño del array que se pasa como paramaetro.
 * \return
 *
 */
void AltaPeople2(eAuto automo[],eDuenio duenio[],int tam);

void EgresoAuto(eDuenio dueno[],eAuto automovil[],int tam);

void MuestroAutosconDuenio(eDuenio duenio[],eAuto automovil[],int tam);

void AutosOrdenados(eAuto vehiculo[],int tam);

void MuestroAUDI(eDuenio dueno[],eAuto automovil[],int tam);

void GananciaporMarca(eAuto automovil[],int tam);

void GananciaTotal(eAuto automovil[],int tam);
