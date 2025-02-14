/*Ingresar juan es mi amigo, que palabra desea reemplazar juan es mi pana, no exite esa cadena, por que deseas reemplazar,
amig por enemigo*/

#include <iostream>
using namespace std;

void reemplazarCadena(){
    string cadena;
    cout << "Ingrese la cadena original: ";
    getline(cin,cadena);
    cout << "Cadena original: " << cadena << endl;
    string objetivo;
    cout << "Ingresa las palabras que quiere reemplazar: ";
    getline(cin,objetivo);
    string porcion;
    cout << "Ingresa las palabras por las que quiere reemplazar: ";
    getline(cin,porcion);
    int size = porcion.size();
    int pos = cadena.find(objetivo);
    if (pos != string::npos){
        cadena.replace(pos, size, porcion.substr(0,size));
        cout << "Cadena reemplazada: "<< cadena << endl; 
    }
    else{
        cout << "La palabras que quiere reemplazar: "<< objetivo <<" no estan en la cadena original";
    }

}

main(){
    reemplazarCadena();
}
