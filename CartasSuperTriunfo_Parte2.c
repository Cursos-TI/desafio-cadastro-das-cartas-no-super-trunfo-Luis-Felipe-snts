  #include <stdio.h>
    int main () {

        //Estado
        char estado_1 [50], estado_2 [50];

        //Código da Carta
        char codigo1 [50], codigo2 [50];

        //Nome da cidade
        char cidade_1 [50], cidade_2 [50];

        //População
        int populacao_1, populacao_2;

        //Área
        float area_1, area_2;

        //PIB
        float pib_1, pib_2;

        //Número de pontos turísticos
        int num_pontos_turisticos_1, num_pontos_turisticos_2;

        //Densidade Populacional
        float densidade_pop_1, densidade_pop_2;

        //PIB per capita
        float pib_per_capita_1, pib_per_capita_2;

        printf ("\n");
        printf ("Olá! Seja bem vindo ao Super Trunfo\n");
        printf ("\n");

        printf ("Vamos cadastrar os dados?\n");
        printf ("\n");

        printf ("Digite a sigla do estado a que pertence a primeira cidade:");
        scanf (" %s",&estado_1);
        printf ("\n");

        printf ("Digite o código da primeira carta: ");
        scanf ("%s",codigo1);
        printf ("\n");

        printf ("Digite o nome da cidade: ");
        scanf ("%s",cidade_1);
        printf ("\n");

        printf ("Digite a quantidade de habitantes dessa cidade: ");
        scanf ("%d",&populacao_1);
        printf ("\n");

        printf ("Digite a área da cidade em km²: ");
        scanf ("%f",&area_1);
        printf ("\n");

        printf ("Digite o PIB da cidade: ");
        scanf ("%f",&pib_1);
        printf ("\n");

        printf ("Digite o Número de pontos turísticos dessa cidade: ");
        scanf ("%d",&num_pontos_turisticos_1);
        printf ("\n");


        printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta\n");

        printf ("\n");

        printf ("Digite a sigla do estado a que pertence a segunda cidade: ");
        scanf (" %s",&estado_2);
        printf ("\n");

        printf ("Digite o código da segunda carta: ");
        scanf ("%s",codigo2);
        printf ("\n");

        printf ("Digite o nome da cidade: ");
        scanf ("%s",cidade_2);
        printf ("\n");

        printf ("Digite a quantidade de habitantes dessa cidade: ");
        scanf ("%lu",&populacao_2);
        printf ("\n");

        printf ("Digite a área da cidade em km²: ");
        scanf ("%f",&area_2);
        printf ("\n");

        printf ("Digite o PIB da cidade: ");
        scanf ("%f",&pib_2);
        printf ("\n");

        printf ("Digite o Número de pontos turísticos dessa cidade: ");
        scanf ("%d",&num_pontos_turisticos_2);
        printf ("\n");

        printf ("\n");

        printf ("CADASTRO CONCLUÍDO\n");
        printf ("\n");

        (densidade_pop_1 = populacao_1/area_1);
        (densidade_pop_2 = populacao_2/area_2);
        (pib_per_capita_1 = pib_1/populacao_1);
        (pib_per_capita_2 = pib_2/populacao_2);

        printf (" COMPARAÇÃO DE CARTAS (Atributo: População)\n");
        printf (" Qual cidade é mais populosa?");
        if (populacao_1 > populacao_2) {
            printf ("\n");
            printf ("\n");
            printf (" %s (%s) é a cidade mais populosa\n", cidade_1, estado_1);
            printf ("\n");
            printf (" Carta 01 - %s: %d habitantes", cidade_1, populacao_1);
            printf ("\n");
            printf (" Carta 02 - %s: %d habitantes", cidade_2, populacao_2);
            printf ("\n");
            printf (" CARTA 01 (%s) venceu!", codigo1);

        } else {
            printf ("\n");
            printf ("\n");
            printf (" %s (%s) é a cidade mais populosa\n", cidade_2, estado_2);
            printf ("\n");
            printf (" Carta 01 - %s: %d habitantes", cidade_1, populacao_1);
            printf ("\n");
            printf (" Carta 02 - %s: %d habitantes", cidade_2, populacao_2);
            printf ("\n");
            printf (" CARTA 02 (%s) venceu!", codigo2);
            printf ("\n");
        }

        return 0;
    }
