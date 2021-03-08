
#include <stdio.h>

main()
{
      //variaveis
      int i,j;
      
      //entrada de dados
      
      printf("\n Digite 2 numeros: ");
      scanf(" %d %d", &i,&j);
      
      //operadores relacionais
      printf("\n\n %d == %d e: %d", i, j, i==j); // igualdade
      printf("\n %d != %d e: %d", i, j, i!=j); // diferente
      printf("\n %d > %d e: %d", i, j, i>j); //maior
      printf("\n %d >= %d e: %d", i, j, i>=j); //maiorigual
      printf("\n %d < %d e: %d", i, j, i<j); //menor
      printf("\n %d <= %d e: %d", i, j, i<=j); //menorigual
      
      //opradores logicos
      printf("\n\n %d &&(AND) %d e: %d", i, j, i&&j); //AND
      printf("\n %d ||(OR) %d e: %d", i, j, i||j); //Or
      printf("\n %d !(NOT) %d e: %d\n", i, !i); //NOT      
      //pausa
      system("pause");
      
      }
      
