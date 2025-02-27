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

printf("Populacao:\n");
scanf("%d",&populacao2);

printf("Area:\n");
scanf("%f",&area2);

printf("PIB Total:\n");
scanf("%f",&pib2);

printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo2);

printf("cidade[A03]");

printf("Populacao:\n");
scanf("%d",&populacao3);

printf("Area:\n");
scanf("%f",&area3);

printf("PIB Total:\n");
scanf("%f",&pib3);

printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo3);

    return 0;
}
