/*Proponga el cuerpo de una función que al recibir un array de tipo char; 
identifique si la cadena de caracteres es numérica, alfanumérica o alfabética.*/

#include <iostream>
using namespace std;

void tipoCadena(char string[]){
    int i = 0;
    int contador = 0;
    int contadorNumericas = 0;
    int contadorAlfabeticas = 0;
    for (i = 0; string[i] != '\0'; i++){
        if (string[i] >= '0' && string[i] <= '9'){
            contadorNumericas++;
        }
        else if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z'){
            contadorAlfabeticas++;
        }
        else{
        }
        contador++;
    }

    if (contadorNumericas == contador){
        cout << "La cadena es numerica" << endl;
    }
    else if (contadorAlfabeticas == contador){
        cout << "La cadena es alfabetica" << endl;
    }
    else{
        cout << "La cadena es alfanumerica" << endl;
    }
}

main(){
    char string[50];
    cout << "Ingrese una cadena de caracteres: ";
    cin >> string;
    tipoCadena(string);
}