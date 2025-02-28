#include <stdio.h>


int main() {

 char estado1[10], estado2[10];

 char cidade1[10], cidade2[10],cidade3[10];
 char cidade01[10], cidade02[10], cidade03[10];

 int populacao1, populacao2, populacao3;
 int populacao01, populacao02, populacao03;

 float area1, area2, area3;
 float area01, area02, area03;

 float pib1, pib2, pib3;
 float pib01, pib02, pib03;

 int turismo1, turismo2, turismo3;
 int turismo01, turismo02, turismo03;

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

printf("[carta:2]\n");

printf("Estado:[B]\n");
scanf("%s",&estado1);

printf("cidade:[B01]\n");
scanf("%s",cidade01);
printf("Populacao:\n");
scanf("%d",&populacao01);
printf("Area:\n");
scanf("%f",&area01);
printf("PIB Total:\n");
scanf("%f",&pib01);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo01);

printf("cidade:[B02]]\n");
scanf("%s",cidade02);
printf("Populacao:\n");
scanf("%d",&populacao02);
printf("Area:\n");
scanf("%f",&area02);
printf("PIB Total:\n");
scanf("%f",&pib02);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo02);

printf("cidade:[B03]\n");
scanf("%s",cidade03);
printf("Populacao:\n");
scanf("%d",&populacao03);
printf("Area:\n");
scanf("%f",&area03);
printf("PIB Total:\n");
scanf("%f",&pib03);
printf("Numeros de pontos turisticos:\n");
scanf("%d",&turismo03);




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

printf("Estados: %s\n", estado2);
printf("cidade:[B01]: %s\n", cidade01);
printf("Populacao: %d\n", populacao01);
printf("Area: %f\n", area01);
printf("PIB: %f\n", pib01);
printf("Pontos turisticos: %d\n", turismo01);

printf("==========================\n");

printf("cidade:[B02]: %s\n", cidade02);
printf("Populacao: %d\n", populacao02);
printf("Area: %f\n", area02);
printf("PIB: %f\n", pib02);
printf("Pontos turisticos: %d\n", turismo02);

printf("==========================\n");

printf("cidade:[B03]: %s\n", cidade03);
printf("Populacao: %d\n", populacao03);
printf("Area: %f\n", area03);
printf("PIB: %f\n", pib03);
printf("Pontos turisticos: %d\n", turismo03);

printf("==========================\n");
    return 0;
}
