/*
Construya un programa para resolver el  Juego de piedra, papel o tijera 

Se jugara 5 rondas, usuario vs maquina.
Tres niveles de dificultad: principiante, intermedio, avanzado.
Principiante inician en igualdad de puntos 0 a 0
Intermedio inician en igualdad de 1 punto de victoria a la maquina.
Avanzado inician con 2 puntos de victoria a la maquina.
El programa deberá crear al menos las siguientes funciones:
Función para obtener la elección del usuario
Función para obtener la elección de la maquina
Función para determinar el ganador de la ronda
Función para determinar el ganador del juego


*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int eleccionDificultad(){
    int dificultad;
    int puntosMaquina = 0;
    cout << "Selecciona la dificultad: "<< endl;
    cout << "1. Principiante" << endl;
    cout << "2. Intermedio" << endl;
    cout << "3. Avanzado" << endl;
    cin >> dificultad;
    if (dificultad == 3){
        puntosMaquina = 2;
    }
    else if (dificultad == 2){
        puntosMaquina = 1;
    }
    return puntosMaquina;
}


int eleccionUsuario(){
    int eleccion;
    cout << "Selecciona: " << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cin >> eleccion;
    return eleccion;

}

int eleccionMaquina(){
    int eleccion;
    srand(time(NULL));
    eleccion = rand()%3+1;
    cout << "La maquina elige: "<< eleccion << endl;
    return eleccion;
}

int ganadorRonda(int eleccionUsuario, int eleccionMaquina){
    int puntoUsuario = 0;
    int puntoMaquina = 0;
    if (eleccionUsuario == eleccionMaquina){
        cout << "Empate" << endl;
    }
    else if(eleccionUsuario == 1 && eleccionMaquina == 3 ){
        cout << "Gana el usuario";
        puntoUsuario = 1;
        return puntoUsuario;
    }
    else if(eleccionUsuario == 2 && eleccionMaquina == 1){
        cout << "Gana el usario";
        puntoUsuario = 1;
        return puntoUsuario;
    }
    else if (eleccionUsuario == 3 && eleccionMaquina == 2){
        cout << "Gana el usario";
        puntoUsuario = 1;
        return puntoUsuario;
    }
    else{
        cout << "Gana la maquina";
        puntoMaquina = 1;
        return puntoMaquina;
    }
}

int ganadorJuego(int rondasGanadasUsuario, int rondasGanadasMaquina){
    if (rondasGanadasUsuario > rondasGanadasMaquina){
        cout << "El usuario gana el juego"<< endl;
    }
    else{
        cout << "La maquina gana el juego" << endl;
    }
}

void mostrarPuntuacion(int puntosUsuario, int puntosMaquina){



}

main(){
    int eleccion = eleccionDificultad();
}