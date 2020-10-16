/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numero, absoluto;
    cout<<"Ingrese el numero para saber el valor absoluto \n";
    cin>>numero;
    cout<<"\n";
    if(numero<0){
        absoluto=(numero*-1);
    }else{
        absoluto=numero;
    }
    cout<<"el valor absoluto de: "<<numero<<" es: "<<absoluto;
    return 0;
}
