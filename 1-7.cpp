/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int max=0, min, nota[4]={0,0,0,0};
    double promedio=0;
    for(int i=0; i<4; i++){
        cout<<"introduzca la nota numero "<<i+1<<": \n";
        cin>>nota[i];
        if(nota[i]>max){
            max=nota[i];
        }if(nota[i]<min){
            min=nota[i];
        }
        promedio=promedio+nota[i];
        system("clear");
    }
    
    cout<<"la nota maxima es: "<<max<<"\n";
    cout<<"la nota minima es: "<<min<<"\n";
    cout<<"el promedio de las notas es: "<<promedio/4; 
    
    return 0;
}
