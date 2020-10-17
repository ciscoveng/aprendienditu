/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int peliculas[2]={0};
    int total;
    cout<<"*****CINEMATECA TU MADRE SEA CONMIGO****** \n";
    for(int i=0; i<=2; i++){
        cout<<"porfavor ingrese el precio de la pelicula #: "<<i+1<<"\n";
        cin>>peliculas[i];
    }
    if(peliculas[0]>peliculas[1] && peliculas[0]>peliculas[2]){
        total=peliculas[1]+peliculas[2];
    }else if(peliculas[1]>peliculas[0] && peliculas[1]>peliculas[2]){
        total=peliculas[0]+peliculas[2];
    }else{
        total=peliculas[0]+peliculas[1];
    }
    cout<<"el total de las peliculas es de : $"<<total;
    
    return 0;
}
