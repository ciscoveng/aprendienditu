/***************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int entrada=0, secuencia;
    cout<<"======== SECUENCIFICADOR-INATDOR DEL MAL========== \n";
    cout<<"porfavor, introduzca el numero para se secuencia: ";
    cin>>entrada;
    cout<<"tome su secuencia, buen señor: \n";
    secuencia=entrada;
    do{
        cout<<secuencia<<", ";
        if(secuencia%2>0){
            secuencia=secuencia*3+1;
        }else{
            secuencia=secuencia/2;
        }
        
    }while(secuencia>1);
    cout<<secuencia<<"\n";

    return 0;
}
