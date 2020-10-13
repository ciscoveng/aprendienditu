#include <iostream>
#include <stdlib.h>

using namespace std;

int
main ()
{
  const int valor_boleta = 100;
  int opcion = 0, cantidad_boletas = 0, edad = 0;
  float descuento = 1, total_boletas = 0;
  cout << "cinecitu we\n";
  cout << "ingrese  cantidad de boletas a comprar\n";
  cin >> cantidad_boletas;
  cout << "==================\n";
  if (cantidad_boletas > 2)
    {

      cout << "1. descuento asociado\n";
      cout << "2. descuento edad\n";
      cin >> opcion;
      cout << "====================\n";
      switch (opcion)
	{
	case 1:
	  descuento = 0.85;
	  break;
	case 2:
	  cout << "ingrese la edad del comprador: \n";
	  cin >> edad;
	  if (edad < 18 || edad > 60)
	    {
	      descuento = 0.80;
	    }
	  break;
	}


    }
  total_boletas = valor_boleta * cantidad_boletas * descuento;
  cout << "el valor de la boleta es:" << total_boletas << "\n";




  return 0;
}
