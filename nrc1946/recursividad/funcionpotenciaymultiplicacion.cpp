#include <iostream>
using namespace std;

int multiplicacion(int a, int b){
    if(b==1)
        return a;
    else   
        return a + multiplicacion(a, b-1);

}

int potencia(int a, int b){
    if(b==1)
        return a;
    else   
        return a * potencia(a, b-1);

}
main(){
    int a, b;
    cout <<"Introduce el primer numero: ";
    cin >> a;
    cout<< "Introduce el segundo numero: ";
    cin>> b;
    cout<<"La multiplicacion de "<<a<<" y "<<b<<" es "<<multiplicacion(a,b)<<endl;  
    cout<<"La potencia de "<<a<<" y "<<b<<" es "<<potencia(a,b)<<endl;  
}