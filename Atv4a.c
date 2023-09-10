#include<stdio.h>
#include<math.h>

int main(){
   /*Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja 
   positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/

 double numero, raizQuadrada, resultado;

 printf("DIgite um numero:");
 scanf("%lf", &numero);

 if(numero >=0){
  raizQuadrada = sqrt(numero);
  printf("raizQuadrada de %.2lf e %.2lf", numero, raizQuadrada);
  
 }else{
    resultado = pow(numero, 2);
    printf("O quadrado de %.2lf e %.2lf",
    numero, resultado);
   }

}