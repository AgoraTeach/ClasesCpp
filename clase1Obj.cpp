/* HEADERS */
#include <iostream>
#define SALUDO  "Hola mundo"
#define SIZE_ARRAYA 15
using namespace std;

class ClasePrueba{
    public:
    int edad = 25;
    int Suma(int s1, int s2){
        int SumaTotal = s1+s2;
        return SumaTotal;
    }
    void ImprimirSaludo(){
        cout << SALUDO << "mi edad es" << edad << endl;
    }
};
char const n = 25;  // 2 bytes => 16 bits => 2^16 = 65 536 /// -127 , +127 // 1 Byte
int m = 70000;  // 4 bytes
int array[n];  // 1T almacenamiento  =>  8Gb RAM  ,   2KBytes 
int main() {
    array[0] = 10;
    array[1] = 25;
    ClasePrueba objetoPrueba;
    objetoPrueba.edad = 30;
    cout << objetoPrueba.edad << "El metodo suma retorna: "<<  objetoPrueba.Suma(15,100) <<endl;
    cout << array[0] + array[1] << endl;
    return 0;
}


/*
flujo de control
*/

/* IF */

/*
    Si (Es cierto?){

        ejecutar una acción A
    }caso contrario{
        se ejecuta una acción B
    }
/*

/* for */
/*
   |Repetir| |Desde|  |hasta|    |incremento|
      for   (  i=0  ;  i<10    ;     i++         ){
            imprimir usuario[i];
    }
ListaUsuarios = 
    |---------| 
0   | usuario1| String
    |---------| 
1   | usuario2| String
    |---------| 
2   | usuario3| String
    |---------| 
3   | usuario4| String
    |---------|


cout<< ListaUsuarios[0] << endl
int n;
int edad[]
*/