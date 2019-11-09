#include <iostream>

using namespace std;

int main(){
    int v, matriz [10][10];
    for (int i=0; i<10; i++){
        v = 1;
        for (int j=0; j<10; j++){
            matriz [i][j] = v;
            v ++;
        }
        cout << endl;
    }

    cout << "La matriz 10x10 de la tabla de multiplicar del 1 es: " << endl;

    for (int i=0; i<10; i++){
        for (int j =0; j<10; j++){
            cout << matriz [i][j];
        }
        cout << endl;
    }
    
    return 0;
}