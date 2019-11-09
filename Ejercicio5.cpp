#include <iostream>

using namespace std;

int main(){
    int carne [8], invertido[8];

    cout << "Carne: " << endl; 
    for (int i=0; i<8; i++){
        cin >> carne[i];
        invertido [i] = carne [i];
    }

    cout << endl;
    cout << "Carne invertido: ";
    for (int i=7; i>=0; i--){
        cout << invertido [i];
    }
    return 0;
}