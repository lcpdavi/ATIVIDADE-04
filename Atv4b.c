#include<stdio.h>

int main(){
    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
 int A = 20, B = 4, C = 16, D = 2, maior, menor;

 //Qual e o maior 
 if(A > B && A > C && A > D){
     maior = A;
    }else if(B < A && B < C && B > D){
     maior = B;
    }else if(C < A && C > B && C > D){
     maior = C;
    }else{ 
     maior = D;
    }

 //Qual e o menor
 if(A < B && A < C && A < D){
     menor = A;
    }else if(B < A && B < C && B < D){
     menor = B;
    }else if(C < A && C < B && C < D){
     menor = C;
    }else{ 
     menor = D;
    }

 printf("maior: %d, menor: %d", maior, menor);

}








