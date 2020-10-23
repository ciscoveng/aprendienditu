#include <iostream>
#include <string>
#include<ctime>

void cls(){//esto es pa poder emular un cls, porque en esta pinshi versh nuncun comando para limpiar la pantalla sirvió//
       printf("\x1b[2J\n");
    }

using namespace std;

int main ()
{
    int categoria=0, random=0, intentos=0;
    string palabra,jugador,letras;
    string frutas[3]={"manzana","kiwi","lulo"};
    string animales[3]={"leon","gato","ornitorrinco"};
    string instrumentos[3]={"guitarra","saxofon","violin"};
  
  //inicio de la eleccion de categoria y generacion de la plabra, con bucle por si se selecciona una opcion incorrecta//
  do{
      cout<<"=========Juego del ahorcado============ \n";
      cout<<"seleccione una categoria: \n";
      cout<<"1. frutas \n";
      cout<<"2. animales \n";
      cout<<"3.instrumentos \n";
      cin>>categoria;
      srand(time(NULL));
      random=(rand() % 3);
    switch (categoria)
        {
        case 1:
           palabra=frutas[random];
            break;
        case 2:
           palabra=animales[random];            
            break;
        case 3:
            palabra=instrumentos[random];       
            break;
        
        default:
        cls();
                cout<<"NO INGRESO UNA OPCION CORRECTA. INTENTE DE NUEVO"<<"\n";
            break;
      }
  }while (categoria>3);// finaliza el menú y la generacion de la palabra//

  //comienzo del juego//BUSCAR LA MANERA DE OBTENER EL LARGO DE PALABRA Y REEMPLAZAR JUGADOR CON TANTOS _ como sea el largo de la plabra
  do  {
      //AQuÍ IRIA EL JUEGO..... SI TUVIERA UNO//
  } while (intentos<10 && palabra!=jugador);
  if (palabra==jugador)
  {
      cout<<"========FELICIDADES, HAS GANADO!!==========="<<"\n";
  }else
  {
      cout<<"========PERDISTE CACHON, COMO TODO EN TU VIDA========"<<"\n";
  }
  
    return 0;
}//fin