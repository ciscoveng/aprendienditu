#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int categoria=0, random=0, intentos=0;
    string palabra,jugador,letras;
    string frutas1="manzana", frutas2="kiwi", frutas3="lulo";
    string animales1="leon", animales2="gato", animales3="ornitorrinco";
    string instrumentos1="guitarra", instrumentos2="saxofon", instrumentos3="violin";
  cout<<"=========Juego del ahorcado============ \n";
  cout<<"seleccione una categoria: \n";
  cout<<"1. frutas \n";
  cout<<"2. animales \n";
  cout<<"3.instrumentos \n";
  cin>>categoria;
  //inicio de la eleccion de categoria y generacion de la plabra, con bucle por si se selecciona una opcion incorrecta//
  do{
    switch (categoria)
        {
            random=0;//buscar comando para generar numeros aleatorios//
        case 1:
            if (random==1)
            {
                palabra=frutas1;
            }else if (random==2)
            {
                palabra=frutas2;
            }else
            {
                palabra=frutas3;
            }   
            
            break;
        case 2:
            if (random==1)
            {
                palabra=animales1;
            }else if (random==2)
            {
                palabra=animales2;
            }else
            {
                palabra=animales3;
            }
            
            break;
    
        case 3:
            if (random==1)
            {
                palabra=instrumentos1;
            }else if (random==2)
            {
                palabra=instrumentos2;
            }else
            {
                palabra=instrumentos3;
            }
            break;
        
        default:
                cout<<"NO INGRESO UNA OPCION CORRECTA. INTENTE DE NUEVO"<<"\n";
            break;
      }
  }while (categoria>3);// finaliza el menú y la generacion de la palabra//

  //comienzo del juego//BUSCAR LA MANERA DE OBTENER EL LARGO DE PALABRA Y REEMPLAZAR JUGADOR CON TANTOS _ como sea el largo de la plabra
  do  {
      cout<<"prueba"<<"\n";
  } while (intentos<10 || palabra!=jugador);
  if (palabra==jugador)
  {
      cout<<"========FELICIDADES, HAS GANADO!!==========="<<"\n";
  }else
  {
      cout<<"========PERDISTE CACHON, COMO TODO EN TU VIDA========"<<"\n";
  }
  
    return 0;
}