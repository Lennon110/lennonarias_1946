#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ahorcado.h"

using namespace std;

string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones() {
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cin >> op;
    return op;
}

string elegirPalabra(int op, string palabras[]) {
    (op == 1) ? deportes(palabras) : (op == 2) ? animales(palabras) : frutas(palabras);
    return palabraAleatoria(palabras);
}

void mostrarAhorcado(int intentos) {
    string dibujos[] = {
        "  _______\n |       |\n |\n |\n |\n |\n_|_\n",           
        "  _______\n |       |\n |       O\n |\n |\n |\n_|_\n",       
        "  _______\n |       |\n |       O\n |       |\n |\n |\n_|_\n", 
        "  _______\n |       |\n |       O\n |      /|\n |\n |\n_|_\n", 
        "  _______\n |       |\n |       O\n |      /|\\\n |\n |\n_|_\n", 
        "  _______\n |       |\n |       O\n |      /|\\\n |      /\n |\n_|_\n", 
        "  _______\n |       |\n |       O\n |      /|\\\n |      / \\\n |\n_|_\n"  
    };
    cout << dibujos[7 - intentos] << endl;
}

void jugar(string palabraSeleccionada) {
    int intentos = 7;
    string adivinando(palabraSeleccionada.length(), '_');
    char letra;
    bool acierto;

    while (intentos > 0 || adivinando != palabraSeleccionada) {
        acierto = false;
        cout << "\nPalabra: " << adivinando << endl;
        cout << "Intentos restantes: " << intentos << endl;
        mostrarAhorcado(intentos);
        cout << "Ingresa una letra: ";
        cin >> letra;

        for (int i = 0; i < palabraSeleccionada.length(); i++) {
            if (palabraSeleccionada[i] == letra) {
                adivinando[i] = letra;
                acierto = true;
            }
        }

        if (!acierto) {
            intentos--;
            cout << "Letra incorrecta.\n";
        } else {
            cout << "Letra correcta\n";
        }
    }

    mostrarAhorcado(intentos);
    
    if (adivinando == palabraSeleccionada) 
        cout << "\nGanaste. Adivinaste la palabra: " << palabraSeleccionada << endl;
    else
        cout << "\nPerdiste. La palabra era: " << palabraSeleccionada << endl;

}

int main() {
    string palabras[5], palabraSeleccionada;
    int op;

    cout << "Juego del Ahorcado" << endl;
    cout << "-------------------" << endl;
    cout << "Elige una categoria: " << endl;
    op = opciones();
    palabraSeleccionada = elegirPalabra(op, palabras);

    jugar(palabraSeleccionada);

    return 0;
}
