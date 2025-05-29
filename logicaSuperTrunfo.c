#include <stdio.h>

int main() {

    printf("=====SUPER TRUNFO=====\n"); //INICIO DO PROGRAMA

    //CORPO DAS CARTAS 1 E 2
    char estado[1];
    char codigoCarta[3];
    char nomeCidade[20];
    unsigned long int populacao;
    int pontosTuristicos;
    float pib, areaCidade, pibPerCapta, densidadePop;
    float superPoder = populacao + pontosTuristicos + pib + areaCidade + pibPerCapta + densidadePop;

    char estado2[1];
    char codigoCarta2[3];
    char nomeCidade2[20];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float pib2, areaCidade2, pibPerCapta2, densidadePop2;
    float superPoder2 = populacao2 + pontosTuristicos2 + pib2 + areaCidade2 + pibPerCapta2 + densidadePop2;

    //BLOCO DE CRIAÇÃO DA CARTA 1
    printf("Digite o estado de sua carta, escolha entre 'A' ate 'H'\n");
    scanf(" %c", &estado);
    printf("Digite o codigo da sua carta: (Estado + 2 Digitos)\nEx: 'A01'\n");
    scanf(" %s", &codigoCarta);
    printf("Digite o nome da cidade de sua carta:\n");
    scanf(" %[^\n]", nomeCidade);
    printf("Digite a populacao total de sua cidade:\n");
    scanf(" %lu", &populacao);
    printf("Digite a quantidade de pontos turisticos de sua cidade:\n");
    scanf(" %i", &pontosTuristicos);
    printf("Digite o PIB total de sua cidade:\n");
    scanf(" %f", &pib);
    printf("Digite a area total de sua cidade:\n ");
    scanf(" %f", &areaCidade);
    pibPerCapta = pib / populacao;
    densidadePop = populacao / areaCidade;

    //BLOCO DE SEPARAÇÃO PARA CRIAÇÃO DAS CARTAS
    printf("\n");
    printf("Vamos adicionar outra carta!\n\n");

    //BLOCO DE CRIAÇÃO DA CARTA 2
    printf("Digite o estado de sua carta, escolha entre 'A' ate 'H'\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da sua carta: (Estado + 2 Digitos)\nEx: 'A01'\n");
    scanf(" %s", &codigoCarta2);
    printf("Digite o nome da cidade de sua carta\n");
    scanf(" %[^\n]", &nomeCidade2);
    printf("Digite a populacao total de sua cidade:\n");
    scanf(" %lu", &populacao2);
    printf("Digite a quantidade de pontos turisticos de sua cidade:\n");
    scanf(" %i", &pontosTuristicos2);
    printf("Digite o PIB total de sua cidade:\n");
    scanf(" %f", &pib2);
    printf("Digite a area total de sua cidade:\n");
    scanf(" %f", &areaCidade2);
    pibPerCapta2 = pib2 / populacao2;
    densidadePop2 = populacao2 / areaCidade2;

    //BLOCO DE SEPARAÇÃO PARA COMEÇAR AS APRESENTAÇÕES
    printf("\n\n");
    printf("Estas foram as cartas que voce adicionou!\n\n");

    //APRESETAÇÃO DA CARTA 1
    printf("CARTA 1:\n ");
    printf("Estado: %s \n ", estado);
    printf("Codigo: %s \n ", codigoCarta);
    printf("Nome da Cidade: %s \n ", nomeCidade);
    printf("Populacao: %i \n ", populacao);
    printf("Area: %4.2f KM \n ", areaCidade);
    printf("PIB: R$ %3.2f MI \n ", pib);
    printf("Numero de pontos turisticos: %i \n ", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km2\n ", densidadePop);
    printf("PIB per Capita: %.2f R$\n ", pibPerCapta);

    //BLOCO DE SEPARAÇÃO ENTRE APRESENTAÇÕES DAS CARTAS
    printf("\n");
    printf("Sua segunda carta:\n\n");

    //APRESETAÇÃO DA CARTA 2
    printf("CARTA 2:\n ");
    printf("Estado: %s \n ", estado2);
    printf("Codigo: %s \n ", codigoCarta2);
    printf("Nome da Cidade: %s \n ", nomeCidade2);
    printf("Populacao: %i \n ", populacao2);
    printf("Area: %4.2f KM \n ", areaCidade2);
    printf("PIB: R$ %3.2f MI \n ", pib2);
    printf("Numero de pontos turisticos: %i \n ", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n ", densidadePop2);
    printf("PIB per Capita: %.2f R$\n ", pibPerCapta2);

    //MENU DE COMPARAÇÃO DAS CARTAS
    printf("\n");
    printf("=====MENU DE ESCOLHA=====\n");
    printf("1.POPULACAO\n2.AREA\n3.PIB\n4.PONTOS TURISTICOS\n5.DENSIDADE DEMOGRAFICA\n");
    int escolha,resultado;
    scanf("%i",&escolha);
    printf("\n");

    //COMPARAÇÃO DAS CARTAS
    switch (escolha) {
        case 1: //CASO A POPULAÇÃO SEJA COMPARADA
            printf("ATRIBUTO SENDO COMPARADO: POPULACAO\n");
            printf("Carta 1 - %s = %lu\n", nomeCidade, populacao);
            printf("Carta 2 - %s = %lu\n", nomeCidade2, populacao2);

            if (populacao > populacao2) {
                resultado = 1;
            }
            else if (populacao < populacao2) {
                resultado = 2;
            }
            else {
                resultado = 3;
            }
        break;
        case 2: //CASO A AREA SEJA COMPARADA
            printf("ATRIBUTO SENDO COMPARADO: AREA DA CIDADE\n");
            printf("Carta 1 - %s = %f\n", nomeCidade, areaCidade);
            printf("Carta 2 - %s = %f\n", nomeCidade2, areaCidade2);

            if (areaCidade > areaCidade2) {
                resultado = 1;
            }
            else if (areaCidade < areaCidade2) {
                resultado = 2;
            }
            else {
                resultado = 3;
            }
        break;
        case 3: //CASO O PIB SEJA COMPARADO
            printf("ATRIBUTO SENDO COMPARADO: PIB\n");
            printf("Carta 1 - %s = %f\n", nomeCidade, pib);
            printf("Carta 2 - %s = %f\n", nomeCidade2, pib2);

            if (pib > pib2) {
                resultado = 1;
            }
            else if (pib < pib2) {
                resultado = 2;
            }
            else {
                resultado = 3;
            }
        break;
        case 4: //CASO OS PONTOS TURISTICOS SEJAM COMPARADOS
            printf("ATRIBUTO SENDO COMPARADO: PONTOS TURISTICOS\n");
            printf("Carta 1 - %s = %i\n", nomeCidade, pontosTuristicos);
            printf("Carta 2 - %s = %i\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos > pontosTuristicos2) {
                resultado = 1;
            }
            else if (pontosTuristicos < pontosTuristicos2) {
                resultado = 2;
            }
            else {
                resultado = 3;
            }
        break;
        case 5: //CASO A DENSIDADE POPULACIONAL SEJA COMPARADA
            printf("ATRIBUTO SENDO COMPARADO: DENSIDADE POPULACIONAL\n");
            printf("Carta 1 - %s = %f\n", nomeCidade, densidadePop);
            printf("Carta 2 - %s = %f\n", nomeCidade2, densidadePop2);

            if (densidadePop < densidadePop2) {
                resultado = 1;
            }
            else if (densidadePop > densidadePop2) {
                resultado = 2;
            }
            else {
                resultado = 3;
            }
        break;
        default: //CASO NÃO SEJA ESCOLHIDO UM NUMERO DO MENU
            printf("Essa nao e uma opcao valida\n");
    }

    //APRESENTAÇÃO DO VENCEDOR
    printf("VENCEDOR DA RODADA!\n");
    if (resultado == 1) {
        printf("Parabens! A Carta 1 ganhou!");
    }
    else if (resultado == 2) {
        printf("Parabens! A Carta 2 ganhou!");
    }
    else {
        printf("Que inesperado! Houve um empate!");
    }

    return 0;
}
