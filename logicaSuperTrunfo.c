#include <stdio.h>


int main() {
 //carta 1

//variaveis para armazenar os valores digitados pelo usuario

 char Nome_do_Pais1[50], Nome_do_Pais2[50], PimeiroAtributo, SegundoAtributo;
 int Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2, Populacao1, Populacao2, Resultado1, Resultado2, EscolhaAtributo;
 float Area1, PIB1, Densidade_Populacional1, PIB_per_Capita1, Super_Poder1, Area2, PIB2, Densidade_Populacional2, PIB_per_Capita2, Super_Poder2;

//printf para dizer qual atributo digitar e scanf para armazenar o valor do atributo

 printf("Digite o Nome da Cidade: ");
 scanf("%s", &Nome_do_Pais1);

 printf("Digite a População: ");
 scanf("%d", &Populacao1);

 printf("Digite a Área(em km²): ");
 scanf("%f", &Area1);

 printf("Digite o PIB: ");
 scanf("%f", &PIB1);
 
 printf("Digite o Número de Pontos Turisticos: ");
 scanf("%d", &Numero_de_Pontos_Turisticos1);

//calculos para apresentar a densidade, Pib per capita e o super poder

 Densidade_Populacional1 = Populacao1 / Area1;
 
 PIB_per_Capita1 = PIB1 / Populacao1;

 Super_Poder1 = Populacao1 + Numero_de_Pontos_Turisticos1 + Area1 + PIB1 - Densidade_Populacional1 + PIB_per_Capita1;


//carta 2

//printf para dizer qual atributo digitar e scanf para armazenar o valor do atributo
 
 printf("Digite o Nome da Cidade: ");
 scanf("%s", &Nome_do_Pais2);

 printf("Digite a População: ");
 scanf("%d", &Populacao2);

 printf("Digite a Área(em km²): ");
 scanf("%f", &Area2);

 printf("Digite o PIB: ");
 scanf("%f", &PIB2);

 printf("Digite o Número de Pontos Turisticos: ");
 scanf("%d", &Numero_de_Pontos_Turisticos2);

//calculos para apresentar a densidade, Pib per capita e o super poder

 Densidade_Populacional2 = Populacao2 / Area2;

 PIB_per_Capita2 = PIB2 / Populacao2;

 Super_Poder2 = Populacao2 + Numero_de_Pontos_Turisticos2 + Area2 + PIB2 - Densidade_Populacional2 + PIB_per_Capita2;

//exibição dos resultados digitados pelo usuario

 printf("Carta 1\n");
 printf("Nome do País: %s\n", Nome_do_Pais1);
 printf("População: %d\n", Populacao1);
 printf("Área: %.2f km²\n", Area1);
 printf("PIB: %.2f bilhões de reais\n", PIB1);
 printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos1);
 printf("Densidade Demográfica: %.2f\n", Densidade_Populacional1);
 printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
 printf("Super Poder: %.1f\n\n", Super_Poder1);

 printf("Carta 2\n");
 printf("Nome do País: %s\n", Nome_do_Pais2);
 printf("População: %d\n", Populacao2);
 printf("Área: %.2f km²\n", Area2);
 printf("PIB: %.2f bilhões de reais\n", PIB2);
 printf("Números de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos2);
 printf("Densidade Demográfica: %.2f\n", Densidade_Populacional2);
 printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
 printf("Super Poder: %.1f\n\n", Super_Poder2);

 //Comparação das cartas para ver qual ganhou, usando o if e else

 if(Populacao1 > Populacao2){
    printf("Carta 1 (%s) Ganhou em População!\n", Nome_do_Pais1);   
 }else if (Populacao1 == Populacao2){
   printf("Empate! População\n");
 }else{
 printf("Carta 2 (%s) Ganhou População!\n", Nome_do_Pais2);
 }

 if(Area1 > Area2){
   printf("Carta 1 (%s) Ganhou em Área!\n", Nome_do_Pais1);
}else if (Area1 == Area2){
   printf("Empate! Área\n");
}else{
printf("Carta 2 (%s) Ganhou em Área!\n", Nome_do_Pais2);
}

if(PIB1 > PIB2){
   printf("Carta 1 (%s) Ganhou em PIB!\n", Nome_do_Pais1);
}else if (PIB1 == PIB2){
   printf("Empate! PIB\n");
}else{
printf("Carta 2 (%s) Ganhou em PIB!\n", Nome_do_Pais2);
}

if(Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2){
   printf("Carta 1 (%s) Ganhou em Pontos Turisticos!\n", Nome_do_Pais1);
}else if (Numero_de_Pontos_Turisticos1 == Numero_de_Pontos_Turisticos2){
   printf("Empate! Pontos Turisticos\n");
}else{
printf("Carta 2 (%s) Ganhou em Pontos Turisticos!\n", Nome_do_Pais2);
}

if(Densidade_Populacional1 < Densidade_Populacional2){
   printf("Carta 1 (%s) Ganhou em Densidade Demográfica!\n", Nome_do_Pais1);
}else if (Densidade_Populacional1 == Densidade_Populacional2){
   printf("Empate! Densidade Demográfica\n");
}else{
printf("Carta 2 (%s) Ganhou em Densidade Demográfica!\n", Nome_do_Pais2);
}

if(PIB_per_Capita1 > PIB_per_Capita2){
   printf("Carta 1 (%s) Ganhou em PIB per Capita!\n", Nome_do_Pais1);
}else if (PIB_per_Capita1 == PIB_per_Capita2){
   printf("Empate! PIB per Capita\n");
}else{
printf("Carta 2 (%s) Ganhou em PIB per Capita!\n", Nome_do_Pais2);
}

if(Super_Poder1 > Super_Poder2){
   printf("Carta 1 (%s) Ganhou no Super Poder!\n", Nome_do_Pais1);
}else if (Super_Poder1 == Super_Poder2){
   printf("Empate! Super Poder\n");
}else{
printf("Carta 2 (%s) Ganhou no Super Poder!\n", Nome_do_Pais2);
}


//Escolha de qual atributo vai batalhar

//printf exibindo as opções antes do switch

printf("Escolha o atributo da carta 1 para duelar contra a carta 2:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB\n");
printf("4.Número de Pontos Turísticos.\n");
printf("5.Densidade Demográfica.\n");
printf("6.PIB Per Capita.\n");
printf("7.Super Poder.\n");
scanf("%d", &EscolhaAtributo);

//switch ele usa a caractere armazenado no scanf acima e o case que estiver essa caractere vai ser executado

switch (EscolhaAtributo){
   case 1:
   if (Populacao1 > Populacao2){
   printf("Carta 1(%s) ganhou em População!(%.d a %.d)\n\n", Nome_do_Pais1, Populacao1, Populacao2);
   } else if (Populacao1 == Populacao2){
   printf("Empate!\n\n");
   }else {
  printf("Carta 2(%s) ganhou em População!(%.d a %.d)\n\n", Nome_do_Pais2, Populacao2, Populacao1); }
   break;
   case 2:
   if (Area1 > Area2){
      printf("Carta 1(%s) ganhou em Área!(%.2f a %.2f)\n\n", Nome_do_Pais1, Area1, Area2);
      } else if (Area1 == Area2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou em Área!(%.2f a %.2f)\n\n", Nome_do_Pais2, Area2, Area1); }
   break;
   case 3:
   if (PIB1 > PIB2){
      printf("Carta 1(%s) ganhou em PIB!(%.2f a %.2f)\n\n", Nome_do_Pais1, PIB1, PIB2);
      } else if (PIB1 == PIB2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou em PIB!(%.2f a %.2f)\n\n", Nome_do_Pais2, PIB2, PIB1); }
   break;
   case 4:
   if (Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2){
      printf("Carta 1(%s) ganhou em Número de Pontos Turisticos!(%.d a %.d)\n\n", Nome_do_Pais1, Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2);
      } else if (Numero_de_Pontos_Turisticos1 == Numero_de_Pontos_Turisticos2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou em Número de Pontos Turisticos!(%.d a %.d)\n\n", Nome_do_Pais2, Numero_de_Pontos_Turisticos2, Numero_de_Pontos_Turisticos1); }
   break;
   case 5:
   if (Densidade_Populacional1 < Densidade_Populacional2){
      printf("Carta 1(%s) ganhou em Densidade Demográfica!(%.2f a %.2f)\n\n", Nome_do_Pais1, Densidade_Populacional1, Densidade_Populacional2);
      } else if (Densidade_Populacional1 == Densidade_Populacional2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou em Densidade Demográfica!(%.2f a %.2f)\n\n", Nome_do_Pais2, Densidade_Populacional2, Densidade_Populacional1); }
   break;
   case 6:
   if (PIB_per_Capita1 > PIB_per_Capita2){
      printf("Carta 1(%s) ganhou no PIB Per Capita!(%.1f a %.1f)\n\n", Nome_do_Pais1, PIB_per_Capita1, PIB_per_Capita2);
      } else if (PIB_per_Capita1 == PIB_per_Capita2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou no PIB Per Capita!(%.1f a %.1f)\n\n", Nome_do_Pais2, PIB_per_Capita2, PIB_per_Capita1); }
   break;
   case 7:
   if (Super_Poder1 > Super_Poder2){
      printf("Carta 1(%s) ganhou no super poder!(%.1f a %.1f)\n\n", Nome_do_Pais1, Super_Poder1, Super_Poder2);
      } else if (Super_Poder1 == Super_Poder2){
      printf("Empate!\n\n");
      }else {
     printf("Carta 2(%s) ganhou no super poder!(%.1f a %.1f)\n\n", Nome_do_Pais2, Super_Poder2, Super_Poder1); }
   break;
   default:
   printf("Opção invalida\n\n");
}

//Escolha de dois atributos para duelar a carta que ganhar nos dois atributos ganha da outra carta se perder em um vai dar empate

//printf exibindo as opções antes do switch

printf("Escolha o primeiro atributo da carta 1 para duelar contra a carta 2:\n");
printf("P.População.\n");
printf("A.Área.\n");
printf("PI.PIB\n");
printf("N.Número de Pontos Turísticos.\n");
printf("D.Densidade Demográfica.\n");
printf("S.Super Poder.\n");
scanf("%s", &PimeiroAtributo);

//switch ele usa a caractere armazenado no scanf acima e o case que estiver essa caractere vai ser executado

switch (PimeiroAtributo){
case 'P':
case 'p':
   printf ("Você escolheu População!\n");
   Resultado1 = Populacao1 > Populacao2 ? 1 : 0;
   break;
case 'A':
case 'a':
   printf ("Você escolheu Área!\n");
   Resultado1 = Area1 > Area2 ? 1 : 0;
   break;
case 'PI':
case 'pi':
   printf ("Você escolheu PIB!\n");
   Resultado1 = PIB1 > PIB2 ? 1 : 0;
   break;
case 'N':
case 'n':
   printf ("Você escolheu Pontos Turísticos!\n");
   Resultado1 = Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2 ? 1 : 0;
   break;
case 'D':
case 'd':
   printf ("Você escolheu Densidade Demográfica!\n");
   Resultado1 = Densidade_Populacional1 < Densidade_Populacional2 ? 1 : 0;
   break;
case 'S':
case 's':
   printf ("Você escolheu Super Poder!\n");
   Resultado1 = Super_Poder1 > Super_Poder2 ? 1 : 0;
    break;
default:
   printf("invalido");
   break;
}

//printf exibindo as opções antes do switch

printf("Escolha o segundo atributo da carta 1 para duelar contra a carta 2:\n");
printf("P.População.\n");
printf("A.Área.\n");
printf("PI.PIB\n");
printf("N.Número de Pontos Turísticos.\n");
printf("D.Densidade Demográfica.\n");
printf("S.Super Poder.\n");
scanf("%s", &SegundoAtributo);

//esse if serve para caso o usuario escolha o mesmo caractere no segundo atributo que escolheu no primeiro atributo
// se não o else inicia o proximo switch

if (PimeiroAtributo == SegundoAtributo)
{
   printf("Você escolheu o mesmo atributo\n");
} else{
switch (SegundoAtributo){
case 'P':
case 'p':
   printf ("Você escolheu População!\n");
   Resultado2 = Populacao1 > Populacao2 ? 1 : 0;
   break;
case 'A':
case 'a':
   printf ("Você escolheu Área!\n");
   Resultado2 = Area1 > Area2 ? 1 : 0;
   break;
   case 'PI':
   case 'pi':
      printf ("Você escolheu PIB!\n");
      Resultado2 = PIB1 > PIB2 ? 1 : 0;
      break;
   case 'N':
   case 'n':
      printf ("Você escolheu Pontos Turísticos!\n");
      Resultado2 = Numero_de_Pontos_Turisticos1 > Numero_de_Pontos_Turisticos2 ? 1 : 0;
      break;
   case 'D':
   case 'd':
      printf ("Você escolheu Densidade Demográfica!\n");
      Resultado2 = Densidade_Populacional1 < Densidade_Populacional2 ? 1 : 0;
      break;
   case 'S':
   case 's':
      printf ("Você escolheu Super Poder!\n");
      Resultado2 = Super_Poder1 > Super_Poder2 ? 1 : 0;
       break;
   default:
      printf("invalido\n");
      break;
   }
}

//exibição do resultado de qual carta ganhou

if (Resultado1 && Resultado2)
{printf("Você ganhou!(carta 1)\n");
} else if (Resultado1 != Resultado2)
{printf("Empate!\n");   
} else{
   printf("Você perdeu!(carta 1)\n");
}

    return 0;
}