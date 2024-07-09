//Prueba dos de uso de ramas
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

const int Maximo_de_jugadores = 10; 
int Catidad_jugadores = 0;
string nombres[Maximo_de_jugadores];
int victorias[Maximo_de_jugadores] = {0};
int derrotas[Maximo_de_jugadores] = {0};
int turno_actual = 0;
void IniciarJuego();//declara funcion de el juego ahorcado
void Personaje();//delara la funcion del  avatar
void creadores();//declara la funcion de creadores de el programa
void agregarJugador();//declara la funcion para agregar a los jugadores
void ayuda();//declara la funcion para ayudar a como manejar el juego en todas sus etapas.
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

void IniciarJuego() {
    srand((int)time(NULL));
    palaB = rand() % 20;
    vidas = 6;
    palabra = "";
    fallos = "";
    
    for(int i = 0; i < (int)palabras[palaB].size(); i++) {
        palabra += "-";
    }
    while(vidas > 0) {
        Personaje();
        cout << "Turno de: " << nombres[turno_actual] << endl;
        cout << "vidas: " << vidas << "\n";
        cout << "Letras fallidas: " << fallos << endl;
        cout << "Progreso: " << palabra << "\n";
        cout << "Ingrese una letra(minuscula): ";
        cin >> opc;
        
        correcta = false;
        for(int i = 0; i < (int)palabras[palaB].size(); i++) {
            if(palabras[palaB][i] == opc) {
                palabra[i] = opc;
                correcta = true;    
            }
        }
        if(!correcta) {
            vidas--;
            fallos += opc;
            cout << "vidas: " << vidas;
        }

        completa = true;
		for(int i = 0; i < (int)palabra.size(); i++){
			if(palabra[i] == '-'){
				completa = false;
                break;
			}
             }
		if(completa){

			Personaje();

			cout<<"Palabra: "<<palabras[palaB]<<endl;
			cout<<"!EL GANADOR DE LA PARTIDA ES ! "<< nombres[turno_actual]<<"  FELICIDADES :)"<<endl; 
			victorias[turno_actual]++;
		
	         cout << " Ingresa cualquier caracter para volver al menu: ";
			cin>>opc;

			break;
		}

        if (vidas == 0) {
        cout<<endl<<"\t--- A H O R C A D O ---\n"<<endl;
        Personaje();
	         cout<<"Palabra: "<<palabras[palaB]<<endl;
             cout<<"!PERDISTE! \n" << nombres[turno_actual] <<" SUERTE A LA PROXIMA :`("<<endl;
             derrotas[turno_actual]++;
             cout << "Ingresa cualquier caracter para volver al menu: ";
             cin>>opc;
        }
        turno_actual = (turno_actual + 1) % Catidad_jugadores;
	}
	    
     }
// agrego las funciones para la vida del jugador, la funcion para saber quien es el ganador y el perdedor.
        
//Se declara la funcion del personaje
void Personaje(){
    //La variable a tomar en el switch sera "vidas"

	switch(vidas){

		case 6:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;

		case 5:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !      0\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;

		case 4:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !      0\n";
		cout<<"  !      |\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;
       
    case 2:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !      0\n";
		cout<<"  !     -|-\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;

		case 1:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !      0\n";
		cout<<"  !     -|-\n";
		cout<<"  !     /\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;

		case 0:
		cout<<"  --------\n";
		cout<<"  !      !\n";
		cout<<"  !      0\n";
		cout<<"  !     -|-\n";
		cout<<"  !     / \\\n";
		cout<<"  !\n";
		cout<<"  !\n";
		cout<<"  ------\n";
		break;
	}
}

//Se mostraran a los que participaron en la creacion del codigo
void creadores() {
	cout<<endl;
    cout << "\t::: Sibrian Lemus Israel  00200524 :::" << endl;
    cout << "\t::: Hidalgo Henriquez Aaron Eduardo  00029624 :::" << endl;
    cout << "\t::: Ayala Rosales Daniel Steven  00225324 :::" << endl;
	cout<<endl;
    }
//Esta es la funcion en la que se puede agregar la cantidad de jugadores en la partida
    void agregarJugador() {
    if (Catidad_jugadores < Maximo_de_jugadores) {
    cout << "Ingrese el nombre del nuevo jugador: ";
    cin >> nombres[Catidad_jugadores];
    Catidad_jugadores++;
    cout << "Jugador agregado exitosamente." << endl<<endl;
    //Se mostrara este mensaje si sobrepasa la cantidad de 10 jugadores
    } else {
    cout << "No se pueden agregar más jugadores. Máximo alcanzado." << endl;
    }
}
//Esta funcion sirve para que los jugadores sepan como usar el juego dandole las indicaciones necesarias
void ayuda(){

cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\tComo jugar ahorcado. "<<endl;
cout<<"Paso 1: Escoga la opcion 3  con tu teclado para ingresar a los jugadores. NOTA 'Debes de ingresar por lo menos a un jugador para iniciar el juego'"<<endl;
cout<<"Paso 2: Ingresar el nombre o caracter de tu eleccion."<<endl;
cout<<"Paso 3: Escoga la opcion 1 para empezar a jugar."<<endl;
cout<<"Paso 4: Cada jugador tendra la oportunidad de acertar la palabra en juego."<<endl;
cout<<"Paso 5: Para ingresar la letra tienes que escogerla y luego precionar enter, si aciertas se mostrara en pantalla de lo contrario se les restara una vida a todos los jugadores. "<<endl;
cout<<"Paso 6: El jugador que termine la ultima vida de el juego sera el perdedor."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\tComo ver los creadores de el juego. "<<endl;
cout<<"Escoga la opcion 2  con tu teclado para ingresar a los creditos."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"\tComo salir de el juego."<<endl;
cout<<"Escoga la opcion 6  con tu teclado para salir de el juego de ahorcado."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Cualquier otro opcion no indicada sera invalida para el juego."<<endl<<endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;


}
