#include "Proyectofunda.hpp"




const int Maximo_de_jugadores = 10; 
int Catidad_jugadores = 0;
string nombres[Maximo_de_jugadores];
int victorias[Maximo_de_jugadores] = {0};
int derrotas[Maximo_de_jugadores] = {0};
int turno_actual = 0;
void IniciarJuego();
void Personaje();
void creadores();
void agregarJugador();
void ayuda();
char opc;
string palabras[]= {"pantalla","gato","carro","celular","camisa","fruta","teclado","computadora","collar","perro","elisa", "programador", "ingeniero", "catedratico", "calculadora", "codigo", "iostream", "uca", "dibujar", "ahorcado", "informatica"};
string palabra , fallos; 
int palaB, vidas;
bool correcta, completa;


int main(){
   
     cout<<"\t JUEGO DE EL AHORCADO"<<endl<<endl;
