/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int ingresado = 0;
  string resultado = "";
  const int l_inferior = 100, l_superior = 200;
  cout << "por favor ingrese un numero: ";
  cin >> ingresado;
  cout << "\n ============================= \n";
  if (ingresado < 100 || ingresado > 200)
    {
      resultado = "No se encuentra";
    }
  else
    {
      resultado = "se encuentra";
    }
  cout << "el numero ingresado " << resultado <<
    " dentro de los limites predeterminados.";

  return 0;
}
