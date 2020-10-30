// ConsoleApplication2.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//

/* Explicaci�n =>  Distribuci�n geometr�ca ->  */

/* Ebcabezado */
#include <stdio.h>
#include <iostream>

using namespace std;
/* Definicion de variables globales */
typedef enum { CARA, SELLO } estado_moneda;

/* Declaraci�n de funciones */
estado_moneda monedalanzada;
int cantidadpasos = 0;
/* Funci�n principal */
void LanzarMoneda();

int main() {
	/* Definicones de variables locales*/
	while (cantidadpasos<10) {
		do {
			LanzarMoneda();
		} while (monedalanzada != CARA);
		cantidadpasos++;
		monedalanzada = SELLO;
	}
	cout << "Ganaste el juego" << endl;

	
	/* Desarrollo del programa */


	return 0;
}

/* Implementaci�n de funciones */
void LanzarMoneda() {
	bool state;
	cout << "�Cual es el estado de la moneda ?  : ";
	cin >> state;
	if (state) {
		monedalanzada = CARA;
	}
	else {
		monedalanzada = SELLO;
	}
}

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

/*  
while => mientras sea cierto la condici�n => ejecutar cierta acci�n

*/

/*
do - while => Primero ejecuto una acci�n y consulo si la condic�n aun sigue siendo verdara;
*/

/*
for => repetir una acci�n cierta cantidad de veces
*/


/*
if => te hacen una pregunta y ejecutar una �nica acci�n;

*/