#include <string>
#include <iostream>
using namespace std;

void IniciarJuego() {
    cout << "Iniciando juego de Ahorcado" << endl;
    // Aqu iría el juego
}


void TerminarJuego() {
    cout << "Finalizando juego y mostrando puntajes" << endl;
    // Aquí iría la lógica para finalizar el juego y mostrar los puntajes
    }

int main() {
int op;
int partidas; //su funcion es contar cuantas veces jugo el juego
string nombre;

cout<<"Elija la opcion de juego que quiera"<<endl<<endl;
cout<<"Presione 1 para iniciar el juego de Ahorcado \nPresione 2 para finalizar el juego y darte tus puntajes \n\nCualquier otro numero no se te dara nada, tonoto\n"<<endl;
cout<<"Introduce tu nombre o algun caracter que te identifique"<<endl;
cin>>nombre;
cin.ignore();//es para que no tenga error con getline

//Esta cosa xd, se usa para tomar toda una linea de texto sin importar espacios, tiene la misma funcion que el cin pero con esta funcion agregada, se incluye cin y la variable dentro de parentesis y luego funciona como un cin normal
getline(cin,nombre);
//luego del getline pude dar error dar un simple cin, 


switch(op){

case 1: 
//supongo que aqui todo el programa de juego, o sino aqui se declararia la funcion "juego" para que sea el mero juego xd
IniciarJuego();
break;

case 2:  
//Terminar juego y dar puntajes
TerminarJuego();

cout<<"Numero de partidas"<<partidas<<endl;
break;

default:

cout<<"ERROR"<<endl;

}


    return 0;
}