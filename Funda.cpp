#include "Proyectofunda.hpp"
void IniciarJuego() {
    srand((int)time(NULL));
    palaB = rand() % 20;
    vidas = 6;
    palabra = "";
    fallos = "";
    
    for(int i = 0; i < (int)palabras[palaB].size(); i++) {
        palabra += "-";
    }
