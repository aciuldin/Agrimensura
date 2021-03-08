/*
  Name: PD PI
  Copyright: 
  Author: Livia Alves Lagrota - 67518
  Date: 16/10/13 14:20
  Description: O programa calcula o angulo zenital médio com posição direta e indireta
*/

// inlcusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>

main () {
     
     float angulo,pd,pi; // declarando as variaveis
     
     printf("Insira o angulo em PD: ");
     scanf("%f", &pd);
     
     printf("Insira o angulo em PI: ");
     scanf("%f", &pi);
     
     angulo = (360 + pd - pi)/2;
     
     printf("\n\n Media do angulo zenital, Zo = %f \n\n", angulo);
     
     system("pause"); 
     
     }
