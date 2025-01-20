#include <iostream>
using namespace std;

main()
{
    char dia;
    cout << "Ingresa un caracter: ";
    cin >> dia;
    switch(dia)
    {
        case 'L':
        case 'l':
            cout<<"Es Lunes"<<endl;
            break;
        case 'M':
        case 'm':
            cout<<"Es Martes"<<endl;
            break;
    }
}