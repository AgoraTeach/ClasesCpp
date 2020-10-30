// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/* Explicación =>  Distribución geometríca ->  */

/* Ebcabezado */
#include <stdio.h>
#include <iostream>

using namespace std;
/* Definicion de variables globales */
typedef enum { CARA, SELLO } estado_moneda;

/* Declaración de funciones */
estado_moneda monedalanzada;
int cantidadpasos = 0;
/* Función principal */
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

/* Implementación de funciones */
void LanzarMoneda() {
	bool state;
	cout << "¿Cual es el estado de la moneda ?  : ";
	cin >> state;
	if (state) {
		monedalanzada = CARA;
	}
	else {
		monedalanzada = SELLO;
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

/*  
while => mientras sea cierto la condición => ejecutar cierta acción

*/

/*
do - while => Primero ejecuto una acción y consulo si la condicón aun sigue siendo verdara;
*/

/*
for => repetir una acción cierta cantidad de veces
*/


/*
if => te hacen una pregunta y ejecutar una única acción;

*/