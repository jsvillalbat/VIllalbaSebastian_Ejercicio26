#include <fstream>
#include <iostream>
using namespace std;
 
void inicializar(string filename, float* lista);
void multiplicar(string filename,float* lista,float* lista1);

int main () {
  string filename1,filename2;
  filename1 = "valores_x.txt";
  filename2 = "valores_y.txt";
  float *lista  = new float[20];
  float *lista1 = new float[20];
    
  inicializar(filename1,lista);
  inicializar(filename2,lista1);
  string filename3;
  filename3 = "multiplicacion.dat";
  multiplicar(filename3,lista,lista1);
    
 delete [] lista;
 delete [] lista1;
  return 0;
}

//Inicializa la lista con los valores datos en el filename
void inicializar(string filename,float *lista){
  ifstream infile; 
  string line;
  double a;
  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  // Lee la primera linea
  getline(infile, line);
  int i = 0;
  while(infile){ 
    a = atof(line.c_str());
    lista[i] = a;
    getline(infile, line);
    i++;
  }

  infile.close();
}

//Funcion que multiplica entrada por entrada y lo guarda en filename3
void multiplicar(string filename,float* lista,float* lista1)
{
ofstream outfile;
  outfile.open(filename);

  cout << "Escribiendo en " << filename << endl; 
  for (int i=0; i < 20; i++){
    outfile << lista[i]*lista1[i] << endl;
  }
  outfile.close(); 
    
    
}
