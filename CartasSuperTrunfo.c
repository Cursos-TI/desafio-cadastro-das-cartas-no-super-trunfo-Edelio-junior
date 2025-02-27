#include <stdio.h>


int main() {

 char estado1[10], estado2[10];
 char cidade1[10], cidade2[10],cidade3[10];
 int populacao1, populacao2, populacao3;
 float area1, area2, area3;
 float pib1, pib2, pib3;
 int turismo1, turismo2, turismo3;

printf("Vamos comecar o jogo mas antes de uma olhada nas regras:D\n");
printf("REGRAS:\n");
printf("[carta:1]\n");

printf("Estado:[A]\n");
scanf("%s",&estado1);

printf("cidade:[A01]\n");
scanf("%s",cidade1);
printf("Populacao:\n");
scanf("%d",&populacao1);
printf("Area:\n");
scanf("%f",&area1);
printf("PIB Total:\n");
scanf("%f",&pib1);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo1);

printf("cidade:[A02]\n");
scanf("%s",&cidade2);
printf("Populacao:\n");
scanf("%d",&populacao2);
printf("Area:\n");
scanf("%f",&area2);
printf("PIB Total:\n");
scanf("%f",&pib2);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo2);

printf("cidade[A03]\n");
scanf("%s",&cidade3);
printf("Populacao:\n");
scanf("%d",&populacao3);
printf("Area:\n");
scanf("%f",&area3);
printf("PIB Total:\n");
scanf("%f",&pib3);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo3);

printf("dados adquiridos\n");
printf("Estados: %s\n", estado1);

printf("=========================\n");
printf("cidade:[A01]: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Pontos turisticos: %d\n", turismo1);

printf("==========================\n");

printf("cidade:[A02]: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Pontos turisticos: %d\n", turismo2);

printf("==========================\n");

printf("cidade:[A03]: %s\n", cidade3);
printf("Populacao: %d\n", populacao3);
printf("Area: %f\n", area3);
printf("PIB: %f\n", pib3);
printf("Pontos turisticos: %d\n", turismo3);

printf("==========================\n");
    return 0;
}
