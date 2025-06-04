#include <stdio.h>
 int main () {
    //Estado: No Super Trunfo, o Estado deve ser representado por uma letra entre A e H
    //Código: Cada carta tem um código, que corresponde à letra do Estado seguida de um número entre 01 e 04
    //Nome da Cidade: Cada cidade deve ser identificada por seu nome
    //População: Número de habitantes da cidade escolhida
    //Área: Tamanho da cidade em quilômetros quadrados
    //PIB: Produto Interno Bruto da Cidade
    //Número de pontos turísticos: Quantidade de pontos turísticos que existem na cidade
    
    //Estado
    char estado_A,estado_B;

    //Códigos da cidade
    char codigo_carta1 [50];
    char codigo_carta2 [50];

    //Nome da Cidade
    char nome_da_cid_1 [50];
    char nome_da_cid_2 [50];

    //População
    unsigned long int populacao_cid_1, populacao_cid_2;

    //Área
    float area_cid_1, area_cid_2;

    //PIB
    float pib_cid_1, pib_cid_2;

    //Número de pontos turísticos
    int num_pontos_turisticos_cid_1, num_pontos_turisticos_cid_2;

    //Densidade populacional das cidades
    float densidade1, densidade2;

    //PIB per capita
    float pib_per_capita1, pib_per_capita2;

    //Super Poder
    float SuperPoder1, SuperPoder2;


     printf ("Olá! Seja bem vindo ao Super Trunfo\n");
     printf ("\n");

     printf ("Vamos cadastrar os dados?\n");

     printf ("Digite a letra do primeiro Estado: ");
     scanf (" %c\n",&estado_A);
  
     printf ("Digite o código da primeira carta: ");
     scanf ("%s\n",codigo_carta1);

     printf ("Digite o nome dessa cidade: ");
     scanf ("%s\n",nome_da_cid_1);

     printf ("Digite a quantidade de habitantes dessa cidade: ");
     scanf ("%lu",&populacao_cid_1);
     printf ("\n");

     printf ("Digite a área da cidade em km²: ");
     scanf ("%f\n",&area_cid_1);

     printf ("Digite o PIB da cidade: ");
     scanf ("%f\n",&pib_cid_1);

     printf ("Digite o Número de pontos turísticos dessa cidade: ");
     scanf ("%d\n",&num_pontos_turisticos_cid_1);
     printf ("\n");

     printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta\n");
     printf ("\n");

     printf ("Digite a letra do segundo Estado: ");
     scanf (" %c\n",&estado_B);

     printf ("Digite o código da segunda carta: ");
     scanf ("%s\n",codigo_carta2);

     printf ("Digite o nome dessa cidade: ");
     scanf ("%s\n",nome_da_cid_2);

     printf ("Digite a quantidade de habitantes dessa cidade: ");
     scanf ("%lu\n",&populacao_cid_2);

     printf ("Digite a área da cidade em km²: ");
     scanf ("%f\n",&area_cid_2);

     printf ("Digite o PIB da cidade: ");
     scanf ("%f\n",&pib_cid_2);

     printf ("Digite o Número de pontos turísticos dessa cidade: ");
     scanf ("%d\n",&num_pontos_turisticos_cid_2);
     printf ("\n");

     printf ("CADASTRO CONCLUÍDO");

     (densidade1 = populacao_cid_1/area_cid_1);
     (densidade2 = populacao_cid_2/area_cid_2);
     (pib_per_capita1 = pib_cid_1/populacao_cid_1);
     (pib_per_capita2 = pib_cid_2/populacao_cid_2);

     SuperPoder1 = (float)populacao_cid_1 + area_cid_1 + pib_cid_1 + (float)num_pontos_turisticos_cid_1 + pib_per_capita1 + (1.0f / densidade1);
     SuperPoder2 = (float)populacao_cid_2 + area_cid_2 + pib_cid_2 + (float)num_pontos_turisticos_cid_2 + pib_per_capita2 + (1.0f / densidade2);

     printf ("\n");
     printf ("\n");

     printf ("Carta 01:\n ");
     printf ("Estado: %c\n",estado_A);
     printf (" Código: %s\n",codigo_carta1);
     printf (" Nome: %s\n",nome_da_cid_1);
     printf (" População: %lu habitantes\n", populacao_cid_1);
     printf (" Área (em km²): %f km²\n",area_cid_1);
     printf (" PIB: %.2f bilhões de reais\n",pib_cid_1);
     printf (" Nº de pontos turísticos: %d\n", num_pontos_turisticos_cid_1);
     printf (" Densidade Populacional: %.2f hab./km²\n", densidade1);
     printf (" PIB per capita de %s: %.2f\n", nome_da_cid_1, pib_per_capita1);

     printf ("\n");
     printf ("\n");

    printf ("Carta 02:\n ");
     printf ("Estado: %c\n",estado_B);
     printf (" Código: %s\n",codigo_carta2);
     printf (" Nome: %s\n",nome_da_cid_2);
     printf (" População: %lu habitantes\n", populacao_cid_2);
     printf (" Área (em km²): %f km²\n",area_cid_2);
     printf (" PIB: %.2f bilhões de reais\n",pib_cid_2);
     printf (" Nº de pontos turísticos: %d\n", num_pontos_turisticos_cid_2);
     printf (" Densidade Populacional: %.2f hab./km²\n", densidade2);
     printf (" PIB per capita de %s: %.2f\n", nome_da_cid_2, pib_per_capita2);
     printf ("\n");

     printf ("COMPARAÇÃO DE CARTAS: \n");
     printf ("CRITÉRIOS: Valor (1) corresponde à primeira carta e Valor (0) corresponde à segunda carta \n");
     printf ("\n");
     printf ("População: Carta %d venceu\n", populacao_cid_1 > populacao_cid_2);
     printf ("Área: Carta %d venceu\n", area_cid_1 > area_cid_2);
     printf ("PIB: Carta %d venceu\n", pib_cid_1 > pib_cid_2);
     printf ("Pontos Turísticos: Carta %d venceu\n", num_pontos_turisticos_cid_1 > num_pontos_turisticos_cid_2);
     printf ("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2);
     printf ("PIB per capita: Carta %d venceu\n", pib_per_capita1 > pib_per_capita2);
     printf ("Super Poder: Carta %d venceu\n", SuperPoder1 > SuperPoder2);
     printf ("\n");

     return 0;


 }
