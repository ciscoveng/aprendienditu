/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
      int n1=1, n2=1, n3=1, catetos=0, hipotenusa=0;
      for(n1; n1<=500; n1++){ 
          n2=1;
         for(n2; n2<=500; n2++){
             n3=1;
             for(n3; n3<=500; n3++) {
                    if(n1>=n2 && n1>=n3){ //--1 desde aquí 
                        hipotenusa= n1*n1;
                        catetos= n2*n2+n3*n3;
                    }else if(n2>=n1 && n2>=n3){
                        hipotenusa= n2*n2;
                        catetos= n1*n1+n3*n3;
                    }else if(n3>=n1 && n3>=n2){
                        hipotenusa= n3*n3;
                        catetos= n2*n2+n1*n1;
                    }                       //--1 hasta aquí, se selecciona el numero mayor entre los 3 para definir el numero que va a ser la hipotenusa y cuales los catetos
                    if(catetos!=0 && hipotenusa==catetos){
                           cout<<n1<<" "<<n2<<" "<<n3<<" \n";
                    }
                }    
             } 
        }
    return 0;
}
