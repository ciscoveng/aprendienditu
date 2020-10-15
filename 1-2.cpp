/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int primero=0, segundo=0, resultado=0, resultado_2=0;
    cout<<"porfavor ingrese el primer numero: \n";
    cin>>primero;
    cout<<"porfavor ingrese el segundo numero: \n";
    cin>>segundo;
    cout<<"===================================== \n";
    resultado= primero%segundo;
    resultado_2= segundo%primero;
    if(resultado==0){
        cout<<"el numero: "<<segundo<<" es divisor de "<<primero<<"\n";
    }else if(resultado>0 && resultado_2==0){
        cout<<"el numero: "<<primero<<" es divisor de "<<segundo<<"\n";
    }else{
        cout<<"ningun Numero es divisor del otro. suerte, gonorrea \n";
    }
    
    return 0;
}
