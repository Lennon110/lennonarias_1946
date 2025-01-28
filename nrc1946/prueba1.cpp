/*
Para resolver la categoría a la que pertenece un valor numérico comprendido entre 1 y 20, 
se pide al programador crear una instrucción que resuelva lo solicitado, 
el lenguaje de programación donde se desea implementar no dispone de la estructura selectiva; 
las categorías son las siguientes:

1 -5 deficiente
6- 10 regular
11-15 bueno
16-18 Muy bueno
> 18 Excelente.
*/

#include <iostream>
using namespace std;

main(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    while (num >= 1 && num <=5){
        cout << "Deficiente";
        break;
    }

    while (num >= 6 && num <=10){
        cout << "Regular";
        break;
    }

    while (num >= 11 && num <=15){
        cout << "Bueno";
        break;
    }

    while (num >= 16 && num <=18){
        cout << "Muy bueno";
        break;
    }

    while (num >= 18){
        cout << "Excelente";
        break;
    }

}