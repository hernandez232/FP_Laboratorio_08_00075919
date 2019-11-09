#include <iostream>
#include <math.h>
#include <stdlib.h> // Permite usar "rand"
#include <time.h> 

using namespace std;

int main (){
    int n, arre [10];
    srand (time(0)); // time(): Obtener el numero random en base al tiempo que posee el sistema en segundos; srand() permite predefinir como funcionara el rand.

    cout << "Numeros aleatorios generados: ";
    for (int i=0; i<10; i++){
        n = 1 + rand()% (1001-1); // Rango en el que se generan los numeros aleatorios, formula: variable = limite inferior + rand()% (limite superior+1 - limite inferior)
        arre [i] = n; 
        cout << n << " ";
    }

    cout << endl;
    cout << "Numeros pares: ";
    for (int i=0; i<10; i++){
        if (arre[i]%2 == 0){
            cout << arre [i] << " ";
        }
    }
    return 0;
}