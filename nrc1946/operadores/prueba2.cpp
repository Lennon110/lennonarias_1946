#include <iostream>
using namespace std;

main()
{
    int n1,n2,n3,aux;
    cout<<"Ingrese n1: "; 
    cin>>n1;
    cout<<"Ingrese n2: "; 
    cin>>n2;
    cout<<"Ingrese n3: "; 
    cin>>n3;
    cout << "Antes: "<<endl;
    cout<<"n1 = "<<n1<<"; n2 = "<<n2<<"; n3 = "<<n3<<endl;
    aux = n1;
    n1 = n2;
    n2 = n3;
    n3 = aux;
    cout << "Despues: "<<endl;
    cout<<"n1 = "<<n1<<"; n2 = "<<n2<<"; n3 = "<<n3<<endl;
}