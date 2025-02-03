#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "..\ordenamiento\seleccion.cpp"
using namespace std;

void llenaDatos(int v[], int n){
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}

void verDatos(int v[],int n){
    for(int i = 0; i<n;i++){
        cout<<v[i]<<"\t";
    }
}

bool isBusquedaBinaria(int v[], int n, int elemento){
    int Iabajo, Iarriba, Icentro;
    Iabajo = 0;
    Iarriba = n-1;
    Icentro = (Iabajo + Iarriba)/2;
    while(Iabajo<=Iarriba && v[Icentro]!=elemento){
        if(v[Icentro]<elemento){
            Iabajo=Icentro+1;
        }
        else{
            Iarriba=Icentro-1;
        }
        Icentro=(Iabajo+Iarriba)/2;

    }
    return(Iabajo<=Iarriba);

}

int main2(){
    int ne, dato;
    cout << "Nro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    ordenSeleccion(vector, ne);
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;
    (isBusquedaBinaria(vector, ne, dato))?cout << "Dato Encontrado":cout<<"Dato no encontrado";
    return 0;
    
}