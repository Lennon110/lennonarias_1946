#include <iostream>
using namespace std;

main()
{
    int terminos_serie,contador=1;
    double x=0, numerador, denominador;

    cout<<"Ingresa el numero de terminos de la serie: ";
    cin>>terminos_serie;

    cout<<"Ingresa el numerador: ";
    cin>>numerador;

    cout<<"Ingresa el denominador: ";
    cin>>denominador;


    while (terminos_serie >= contador)
    {

        if (contador % 2 == 0) 
        {
            x = x - (numerador / denominador);
        }
        else 
        {
            x= x + (numerador / denominador);
        }

        numerador = numerador + denominador;
        denominador = denominador + 2;
        contador++;
    }

    cout<<"El valor de X: "<<x;
}