#include <iostream>
using namespace std;

//Funcion que calcula el factorial de un número
int factorial(int x)
{
    if(x ==  0)
    {
      return  1;
    }
    else
    {
        return x*factorial(x-1);
    }
}


int main (int argc, char **argv) {
   double* lista  = NULL; 
   int n_side;
   int i;
 cout << "Escriba la longitud del arreglo: "<< endl;
 cin >>n_side;


   lista  = new double[n_side ];
   
   for (int i=0;i<n_side;i++){
     lista[i] = factorial(i);
     cout << lista[i] << endl;
   }
   
   delete [] lista;
   return 0;
}

