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
    int nota;
    string resultado;

    resultado = (nota<=5)?"deficiente":(nota<=10)?"regular":(nota<=15)?"bueno":(nota<=18)?"Muy bueno":"Excelente";
}