//https://github.com/Lennon110/lennonarias_1946
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n){
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}

int ordenaBurbujav1(int v[], int n){
    int aux,contador=0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    return contador;
}
int ordenaBurbujav2(int v[], int n){
    int mejora=1;
    int aux,contador=0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-mejora; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujav3(int v[], int n){
    int mejora=1;
    bool cambio=true;
    int aux,contador=0;
    for(int i = 0; i<n && cambio; i++){
        cambio = false;
        for(int j = 0; j<n-mejora; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                cambio= true;
            }
        }
        mejora++;
    }
    return contador;
}
void muestraVector(int v[],int n){
    for(int i = 0; i<n;i++){
        cout<<v[i]<<" ";
    }
}

void menorComparacion(int a, int b,int c){
    if (a <= b && a <= c){
        cout << "\nLa mejor version es la 1 con "<<a<<" comparaciones";
    } 
    else if (b <= a && b <= c){
        cout << "\nLa mejor version es la 2 con "<<b<<" comparaciones";
    }   
    else{
        cout << "\nLa mejor version es la 3 con "<<c<<" comparaciones";
    }

}

main(){
    int ne, n1, n2, n3;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenaVector(vec, ne);
    cout << "Vector orginal: ";
    muestraVector(vec, ne);
    cout<< endl;
    n1 = ordenaBurbujav1(vec, ne);
    n2 = ordenaBurbujav2(vec, ne);
    n3 = ordenaBurbujav3(vec, ne);
    cout << "El numero de comparaciones burbuja v1= "<<n1; 
    cout << "\nEl numero de comparaciones burbuja v2= "<<n2;
    cout << "\nEl numero de comparaciones burbuja v3= "<<n3;
    cout << "\nVector ordenado: "<<endl;
    muestraVector(vec, ne);
    menorComparacion(n1,n2,n3);
}