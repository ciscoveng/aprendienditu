#include <iostream>
#include <string>
#include <ctime>
#include <cctype>

void cls()
{ //esto es pa poder emular un cls, porque en esta pinshi versh nuncun comando para limpiar la pantalla sirvió//
    printf("\x1b[2J\n");
}

using namespace std;

int main()
{
    string hangman[6] = {" +====++\n  |   ||\n  O   ||\n /|\\  ||\n / \\  ||\n      ||\n=========]", " +====++\n  |   ||\n  O   ||\n /|\\  ||\n      ||\n      ||\n=========]", "  +====++\n  |    ||\n  O    ||\n       ||\n       ||\n       ||\n=========]", "  +====++\n  |    ||\n       ||\n       ||\n       ||\n       ||\n=========]", "        \n       ||\n       ||\n       ||\n       ||\n       ||\n=========]", " \n"};
    int categoria = 0, random = 0, intentos = 5, largoPalabraEnJuego;
    string palabraSeleccionada, palabraEnJuego;
    char letraIngresada;
    string frutas[8] = {"manzana", "kiwi", "lulo", "pitaya", "aguacate", "nispero", "totumo", "guanabana"};
    string animales[8] = {"leon", "gato", "ornitorrinco", "paranguaracutirimicuaro", "elefante", "socodrilo", "ballena", "avispa"};
    string instrumentos[8] = {"guitarra", "saxofon", "violin", "xilofono", "violoncello", "bateria", "acordeon", "gaita"};
    bool error;

    //inicio de la eleccion de categoria y generacion de la plabra, con bucle por si se selecciona una opcion incorrecta//
    do{
        cout << "=========Juego del ahorcado============ \n";
        cout << "seleccione una categoria: \n";
        cout << "1. frutas \n";
        cout << "2. animales \n";
        cout << "3. instrumentos \n";
        cout << "4. ingresar palabra\n";
        cin >> categoria;

        srand(time(NULL));
        random = (rand() % 3);

        switch (categoria){
        case 1:
            palabraSeleccionada = frutas[random];
            break;
        case 2:
            palabraSeleccionada = animales[random];
            break;
        case 3:
            palabraSeleccionada = instrumentos[random];
            break;
        case 4:
            cout << "escriba la palabra que quiera que su amigo adivine y preione enter: \n";
            cin >> palabraSeleccionada;
            break;
        default:
            cls();
            cout << "\u001b[31mNO INGRESO UNA OPCION CORRECTA. INTENTE DE NUEVO\u001b[37m"
                 << "\n";
            break;
        }
    } while (categoria > 4); 

    largoPalabraEnJuego = palabraSeleccionada.length();
    palabraEnJuego = palabraSeleccionada;

    for (int i = 0; i < largoPalabraEnJuego; i++) {
        palabraEnJuego[i] = '_';
    }

    do{
        cls();
        cout << hangman[intentos] << "\n";
        error = true;
        cout << palabraEnJuego << "\n";
        cout << "te quedan: " << intentos << " intentos\n";
        cin >> letraIngresada;
        letraIngresada = tolower(letraIngresada);

        for (int i = 0; i < largoPalabraEnJuego; i++) {
            if (palabraSeleccionada[i] == letraIngresada) {
                palabraEnJuego[i] = letraIngresada;
                error = false;
            }
        }
        if (error == true) {
            intentos--;
        }
    } while (intentos != 0 && palabraSeleccionada != palabraEnJuego);

    cls();

    if (palabraSeleccionada == palabraEnJuego) {
        cout << "\u001b[32m========FELICIDADES, HAS GANADO!!==========="
             << "\n";
    }
    else {
        cout << "\u001b[31m========PERDISTE CACHON, COMO TODO EN TU VIDA========"
             << "\n";
        cout << hangman[intentos] << "\n";
    }

    cout << "la palabra era: " << palabraSeleccionada;

    return 0;
}