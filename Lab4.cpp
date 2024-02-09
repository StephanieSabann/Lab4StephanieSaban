//laboratorio 4 | Stephanie Cristina Sabán Cárcamo
// condicionales, ciclos y funciones
#include <cmath>
#include <iostream> //es una bibleoteca o libreria extrema del programa que vamos a escribir
//permite para dar entrada y salida del codigo, y es escencial para realizar operaciones basicas
int Calculadora(int num1,int num2);
int Resultado(int resultado);
int resultado=0;
using namespace std;
//************************************************************
int main(){  // se coloca int por que va a retornar un valor
int a, num1, num2;
cout << "¿cuantas operaciones deseas realizar? ---> ";
cin>>a;
  for(int x=1;x<=a;x++){
  	cout << "Ingresa el primer numero entero ---> ";
  	cin >> num1;
  	cout << "Ingresa el segundo numero entero ---> ";
  	cin >> num2;
  	Calculadora(num1,num2);
  	Resultado(resultado);
  }  
 return 0; // por que es una funcion no vacia.
}
//************************************************************
//Definimos las funciones
int Calculadora(int num1, int num2){
int opc;
cout << "-Calculadora-"<<endl;
cout << "1. Suma-"<<endl;
cout << "2. Resta-"<<endl;
cout << "3. Multiplicacion-"<<endl;
cout << "4. Division-"<<endl;
cout << "¿Que operacion deseas realizar? ---> ";
cin>>opc;
switch(opc)
{
case 1: { resultado= num1+ num2;};break;
case 2: { resultado= num1- num2;};break;
case 3: { resultado= num1* num2;};break;
case 4: { resultado= num1/ num2;};break;
} 
return resultado;
}
 //***********************************************
int Resultado(int resultado){
 cout<<"El resultado de tu operacion es ---> "<<resultado<<endl<<endl;
 return resultado;
}