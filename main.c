/*
 * Este programa fue realizado como la tarea#16 el 8 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es dado los valores ingresados por el usuario en un arreglo,
 * indicar cuantos de esos valores son unicos.
 *
 * Fecha: 8 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main(void) {
  //Declaracion de variable que determina el tamaño del arreglo
  int n,c;
  printf("Define el tamaño del arreglo: ");
  scanf("%i", &n);

  //Declaracion de arreglos paralelos
  int numero[n]; //Contiene los valores a verificar como unicos
  int cont[n];   //Posicion=1 (no duplicado), posicion=0 (duplicado)

  //Arreglo que se inicializa en 1's
  for(int i=0;i<n;i++){
      cont[i]=1;
  }

  printf("Escribe %i numeros\n", n);

  //Captura de los elementos en el arreglo
  for(int i=0;i<n;i++){
      printf("Escribe el numero %d:", i);
      scanf("%d",&numero[i]);
  }

  c=0; //Contador de numeros unicos inicializado

  //Verifica que valores estan duplicados
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;++j){
      if(numero[i]==numero[j]){
        cont[i]=0; //En el arreglo se cambia a 0's las posiciones i y j duplicadas
        cont[j]=0;
      }
    }
  }

  //Cuenta las posiciones que quedaron en 1 (valores unicos)
  for(int k=0;k<n;k++){
    if(cont[k]==1){
      ++c;
    }
  }

  printf("La cantidad de valores unicos es: %d", c);

  return 0;
}