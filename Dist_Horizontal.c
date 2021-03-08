/*
  Name: Distancia Horizontal
  Copyright: 
  Author: Athos Neves Ciuldin Silva - 67511
  Date: 22/10/13 23:55
  Description: Programa em C para calcular a distancia horizontal (Dh) utilizando mira Horizontal
*/

//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{
     //declaração das variaveis
     double gggmmss, dec, ss, x, y, dh;
     int gg,mm;
     
     //leitua do angulo horizontal
     printf("\n Insira Angulo Horizontal (GGG.mmss): ");
     scanf ("%lf" ,&gggmmss);
     
     //leitura, comprimento da mira horzontal
     printf("\nComprimento da mira horizontal: ");
     scanf("%lf",&y);
       
     //trnasformação do angulo horiz. em graus decimais
     gg = (int) gggmmss;
     mm = (int) ((gggmmss - gg) * 100);
     ss = ((((gggmmss-gg) * 100) - mm) *100);
     dec = (double) (gg + (mm/60) + (ss/3600.0));
     
     //angulo para radianos
     x = dec * M_PI/180.0;
     
     //calculo da distancia horizontal
     dh = (y / (2 * tan(x/2)));
     printf("\n\nDh = %f  \n\n",dh);
     
     system ("pause");
          
 }
