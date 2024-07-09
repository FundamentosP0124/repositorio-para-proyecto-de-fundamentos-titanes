#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;


void Personaje(){
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

void creadores() {
	cout<<endl;
    cout << "\t::: Sibrian Israel Lemus  00200524 :::" << endl;
    cout << "\t::: Hidalgo Henriquez Aaron Eduardo  00029624 :::" << endl;
    cout << "\t::: Ayala Rosales Daniel Steven  00225324 :::" << endl;
	cout<<endl;
    }

    void agregarJugador() {
    if (Catidad_jugadores < Maximo_de_jugadores) {
        cout << "Ingrese el nombre del nuevo jugador: ";
        cin >> nombres[Catidad_jugadores];
        Catidad_jugadores++;
        cout << "Jugador agregado exitosamente." << endl<<endl;
    
    } else {
        cout << "No se pueden agregar más jugadores. Máximo alcanzado." << endl;
    }
}


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


