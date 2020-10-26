/*       Cabeceras o headers           */
#include <iostream>         // librerias
#define SALUDO "Hola mundo" // definiciones
using namespace std;
/* Definicion de variables globales y funciones */
int edad = 15; // declaración de una variable

/* Declaración de funciones*/
int Suma(int s1, int s2);
void ImprimirSaludo();
/* Incia la secuencia de ejecución */

int main(){
    int suma = Suma(15,30); // variable local
    cout<< "El resultado es " << suma << endl;
    ImprimirSaludo();
    return 0;
}
/* Implementación de funciones  */

int Suma(int s1, int s2){
    int sumatotal = s1 + s2;// variable local
    return sumatotal;
}

void ImprimirSaludo(){
    cout << SALUDO << endl;
}