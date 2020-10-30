/* Ebcabezado */
#include <stdio.h>
#include <iostream>

using namespace std;
/* Definicion de variables globales */
double notas[6];

/* Declaración de funciones */
double Promedio(double notas[]);
void SubirNotas();
void EstadoAlumno(double promedio);
/* Función principal */

int main() {
	/* Definicones de variables locales*/
	double promedio;

	/* Desarrollo del programa */
	cout << "Bienvenido al sistema de calificaciones" << endl;
	cout << "Ingrese las notas porfavor" << end;
	SubirNotas();
	promedio = Promedio(notas);
	EstadoAlumno(promedio);

	return 0;
}

/* Implementación de funciones */

void SubirNotas() {
	for (int i = 0 ; i < 6; i++)
	{
		cout << "ingrese la nota " << i + 1 ;
		cin >> notas[i];
	}
}

void Promedio(double notas[]) {
	double suma = 0;
	for (int i = 0; i < 6; i++) {
		suma += notas[i];
	}
	return suma / 6;
}

void EstadoAlumno(double promedio) {
	if (promedio > 10.00) {
		cout << "El alumno esta aprobado" << endl;
	}
	else {
		cout << "El Alumno esta desaprobado" << endl;
	}
}