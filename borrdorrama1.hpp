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
do
  {
      //estructura de el menu mostrado a usuario
     cout<<" \tMenu principal."<<endl<<endl;
     cout<<"1.Jugar partida. "<<endl<<endl;
     cout<<"2.Creditos. "<<endl<<endl;
     cout <<"3.Agregar jugador." << endl<<endl;
	 cout<<"4.Ayuda"<< endl<<endl;
     cout<<"6.Salir de juego."<<endl<<endl;
     cout<<"Eliga la opcion deseada: "<<endl;
     cin>>opc;
    switch (opc)
    {
        
    case '1' :
    if (Catidad_jugadores > 0)//si la cantidad de jugadores es mayor que 0 se ejecutara el juego
    {
     IniciarJuego();//funcion para ejecutar el juego
    }else
    {
      cout << ":::No hay jugadores. Por favor, agregue jugadores primero:::" << endl;
    }
    break;
    case '2':creadores();
        break;

     case '3':agregarJugador();//funcion llama a para agregar jugadores
     break;  
	 case '4':ayuda();
	 break; 
           case '6':cout<<"Usted a salido del juego ";
     return 0;
        default:

     cout<<"\t :::ELIGA UNA OPCION VALIDA::: "<<endl;
    }
    
  } while (opc != '6');
  
    return 0;
    
}