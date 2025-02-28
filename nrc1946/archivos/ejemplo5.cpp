#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nombreFichero;
    cout << "Ingrese el nombre de fichero con la extension: "<< endl;
    cin >> nombreFichero;
    ofstream (nombreFichero.c_str()); 
}

