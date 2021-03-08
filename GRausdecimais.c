/*
  Name: Graus em Graus decimais
  Copyright: 
  Author: Athos Neves Ciuldin - 67511
  Date: 16/10/13 15:09
  Description: Converte formato GGG.MMSS em graus decimais. (toppo)

*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
     //variaveis
     double ggmmss, ss, deg;
     int gg, mm;
     
     //entrada de dados
     printf("\n Digite o angulo no formato GGG.MMSS: ");
     scanf("%lf", &ggmmss);
     
     //separando Grau / min / seg do formato GGG.MMSS
     gg = (int) ggmmss;
     mm = (int) ((ggmmss - gg) * 100);
     ss = ((((ggmmss-gg) * 100) - mm) * 100);
     
     //graus decimais
     deg = gg + mm/60.0 + ss/3600.0;
     
     //mostrando resultado
     printf("\n Leitura:       %lf", ggmmss);
     printf("\n Graus:         %d", gg);
     printf("\n Minutos:       %d", mm);
     printf("\n Segundos:      %lf", ss);
     printf("\n DEG:           %lf\n\n", deg);
     
     
     system("pause");
 }
