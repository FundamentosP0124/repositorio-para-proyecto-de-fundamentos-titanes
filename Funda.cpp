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
        
