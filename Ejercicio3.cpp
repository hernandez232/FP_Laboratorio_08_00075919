#include <iostream>

using namespace std;

int main (){
    int f, c, matriz [5][5] = { {0,1,1,1,1}, {1,0,1,1,1}, {1,1,0,1,1}, {1,1,1,0,1}, {1,1,1,1,0} };
    cout << "La matriz 5x5 con diagonal pricipal 0 es:" << endl;
    for (int i=0; i<5; i++){
        for (int j =0; j<5; j++){
            cout << matriz [i][j];
        }
        cout << endl;
    }

    return 0;
}