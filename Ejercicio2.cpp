#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string nombre [5];
    int longitud [5];

    for (int i=0; i<5; i++){
        cout << "Ingrese un nombre: "; cin >> nombre [i];
        longitud [i] = sizeof (nombre)/sizeof(nombre[i]);
    }

    cout << endl;
    cout << "La longitud de cada palabra es: ";
    for (int i=0; i<5; i++){
        cout << longitud [i] << " ";
    }
    return 0;
}