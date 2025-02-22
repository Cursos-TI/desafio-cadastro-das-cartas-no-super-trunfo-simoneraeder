#include <stdio.h>
 
int main() {

    printf("Desafio Super Trunfo, Aventureiro!\n\t");
    
    printf("**** Carta 1****\n ");

    char pais[50] = "Brasil" ;
    char estado[50] = "Rio_de_Janeiro" ;
    char cidade[30] = "Petropolis" ;
    int populacao = 294983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    int numero_da_carta = 1 ;
    float quociente;

    printf("País = %s \n",pais);

    printf("Estado = %s \n",estado);

    printf("Cidade = %s \n",cidade);

    printf("Populacão = %dmilhões \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Área = %.1fkm² \n",area);

    printf("PIB = %.1fbilhões \n",pib);
    
    printf("Número da carta = %d \n", numero_da_carta);


    printf("Digite a populacao da carta 1:");

    scanf("%d", &populacao);

    printf("a população:%d\n", populacao);

    printf("Digite a area da carta 1:");

    scanf("%f", &area);

    printf("sua area em KM²:%f\n", area);

    printf("digite o PIB da carta 1:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    quociente = (populacao / area) ;

    printf("A Densidade Populacional da carta 1 é: %f\n", quociente);

    quociente = (pib / populacao) ;

    printf("O PIB Per Capita da carta 1 é: %f\n\t", quociente);


 
    printf("****Carta 2****:\n");

    char pais_2[50] = "Uruguai" ;
    char estado_2[50] = "Montevideu" ;
    char cidade_2[30] = "Homonima";
    int populacao_2 = 1325968 ;
    int pontos_turisticos_2 = 10 ;
    float area_2 = 530.1 ; 
    float pib_2 = 45.6 ;
    int numero_da_carta_2 = 2 ;

    printf("País = %s \n",pais_2);

    printf("Estado = %s \n",estado_2);

    printf("Cidade = %s \n",cidade_2);

    printf("Populacão = %dmilhões \n",populacao_2);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos_2);

    printf("Área = %.1fkm² \n",area_2);

    printf("PIB = %.1fbilhões \n",pib_2);
    
    printf("Número da carta = %d \n", numero_da_carta_2);    


    printf("Digite a População da Carta 2:");

    scanf("%d", &populacao_2);

    printf("A População:%d\n", populacao_2);

    printf("Digite a Área da carta 2:");

    scanf("%f", &area_2);

    printf("Sua área em KM²:%f\n", area_2);

    printf("Digite o PIB da carta 2:");

    scanf("%f", &pib_2);

    printf("o PIB da sua cidade:%f\n",pib_2);

    quociente = (populacao_2 / area_2) ;

    printf("A Densidade Populacional da carta 2 é: %f\n", quociente);

    quociente = (pib_2 / populacao_2) ;

    printf("O PIB Per Capita da carta 2 é: %f\n\t", quociente);













    return 0 ;
}