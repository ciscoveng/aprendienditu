#include <iostream>
#include <string>
#include <ctime>
#include <cctype>

void cls(){//esto es pa poder emular un cls, porque en esta pinshi versh nuncun comando para limpiar la pantalla sirvió//
       printf("\x1b[2J\n");
    }

using namespace std;

int main ()
{
    int categoria=0, random=0, intentos=6, largo;
    string palabra,jugador;
    char ingreso;
    string frutas[3]={"manzana","kiwi","lulo"};
    string animales[3]={"leon","gato","ornitorrinco"};
    string instrumentos[3]={"guitarra","saxofon","violin"};
    bool error;
  
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
                cout<<"\u001b[31mNO INGRESO UNA OPCION CORRECTA. INTENTE DE NUEVO\u001b[37m"<<"\n";
            break;
      }
  }while (categoria>3);// finaliza el menú y la generacion de la palabra//
  
  largo=palabra.length();//desde aquí, sse obtiene el largo de la palabra. se carga en el juego y se reemplaza por _
  jugador=palabra;
  for(int i=0; i<largo; i++){
      jugador[i]='_';
  }//aquí acaba la carga y reemplazo del juego

  //comienzo del juego
  do  {
      cls();
      error=true;//fue laa unica manera que  encontré de poder colocar el contador de errores. taba dificil, we
      cout<<jugador<<"\n";
      cout<<"te quedan: "<<intentos<<" intentos\n";
      cin>>ingreso;
      ingreso= tolower(ingreso);
      for(int i=0; i<largo; i++){
          if(palabra[i]==ingreso){
              jugador[i]=ingreso;
              error=false;
          }
      }
      if(error==true){
          intentos--;
      }

  } while (intentos!=0 && palabra!=jugador);
  cls();
  if (palabra==jugador)
  {
      cout<<"\u001b[32m========FELICIDADES, HAS GANADO!!==========="<<"\n";
  }else
  {
      cout<<"\u001b[31m========PERDISTE CACHON, COMO TODO EN TU VIDA========"<<"\n";
  }
  cout<<"la palabra era: "<<palabra;  
    return 0;
}//fin