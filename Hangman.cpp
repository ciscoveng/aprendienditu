#include <iostream>

using namespace std;

int
main ()
{
    int categoria=0, random=0, intentos=0;
    char palabra[]={},jugador[]={},letras;
    char frutas1[]={'m','a','n','z','a','n','a'}, frutas2[]={'k','i','w','i'}, frutas3[]={'l','u','l','l','o'};
    char animales1[]={'l','e','o','n'}, animales2[]={'g','a','t','o'}, animales3[]={'o','r','n','i','t','o','r','r','i','n','c','o'};
    char instrumentos1[]={'g','i','t','a','r','r','a'}, instrumentos2[]={'s','a','x','o','f','o','n'}, instrumentos3[]={'v','i','o','l','i','n'};
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
        random=;//buscar comando para generar numeros aleatorios//
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
            cout<<"NO INGRESO UNA OPCION CORRECTA. INTENTE DE NUEVO"
        break;
  }
  while (categoria>3)// finaliza el menú y la generacion de la palabra//

  //comienzo del juego//BUSCAR LA MANERA DE OBTENER EL LARGO DE PALABRA Y REEMPLAZAR JUGADOR CON TANTOS _ como sea el largo de la plabra
  do
  {
      
  } while (intentos<10 || palabra!=jugador);
  if (palabra==jugador)
  {
      cout<<"========FELICIDADES, HAS GANADO!!==========="
  }else
  {
      cout<<"========PERDISTE CACHON, COMO TODO EN TU VIDA========"
  }
  
    return 0;
}