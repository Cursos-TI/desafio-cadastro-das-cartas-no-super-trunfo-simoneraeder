#include <stdio.h>
 
int main() {

    printf("Desafio Super Trunfo, Aventureiro!\n Carta 1\n \t ");

    char pais[50] = "Brasil" ;
    char estado[50] = "Rio_de_Janeiro" ;
    char cidade[30] = "Petropolis" ;
    int populacao = 294983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    int numero_da_carta = 1 ;
    float quociente;

    printf("pais = %s \n",pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %d \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);
    
    printf("Numero da carta = %d \n", numero_da_carta);


    printf("Digite a populacao da carta 1:");

    scanf("%d", &populacao);

    printf("a população:%d\n", populacao);

    printf("Digite a area da carta 1:");

    scanf("%f", &area);

    printf("sua area em KM:%f\n", area);

    printf("digite o PIB da sua cidade:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);



quociente = (populacao / area) ;

printf("A densidade populacional da carta 1 é: %f\n", quociente);

quociente = (pib / populacao) ;

printf("O PIB per capita da carta 1 é: %f\n", quociente);
















    return 0 ;
}