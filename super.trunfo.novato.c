
#include <stdio.h>
 
int main() {

    printf("Desafio Super Trunfo, Novato!\n \t Carta 1:\n");

    char pais[50] = "Brasil" ;
    char estado[50] = "Rio_de_Janeiro" ;
    char cidade[30] = "Petropolis" ;
    int populacao = 294983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    int numero_da_carta = 1 ;

    printf("pais = %s \n",pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %d \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);
    
    printf("Numero da carta = %d \n", numero_da_carta);

   
    printf("Desafio Super Trunfo, Novato!\n \t Carta 2:\n");

    char pais[50] = "Uruguai" ;
    char estado[50] = "Montevideu" ;
    char cidade[30] = "Homonima";
    int populacao = 1325968 ;
    int pontos_turisticos = 10 ;
    float area = 530.1 ; 
    float pib = 45.6 ;
    int numero_da_carta = 2 ;



    printf("pais = %s \n",pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %d \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);
    
    printf("Numero da carta = %d \n", numero_da_carta);






    

   
    printf("Qual é a sua carta?\n\t");

    printf("Digite o nome do seu pais:");
    
    scanf("%s", &pais);

    printf("seu pais é: %s\n", pais);

    printf("Digite o nome do seu estado:");
    
    scanf("%s", &estado);

    printf("seu estado é: %s\n", estado);

    printf("Digite o nome da sua cidade:");

    scanf("%s", &cidade);

    printf("o nome da cidade:%s\n", cidade);

    printf("Digite a populacao da sua cidade:");

    scanf("%d", &populacao);

    printf("a população:%d\n", populacao);

    printf("Digite os pontos turisticos da sua cidade:");

    scanf("%d",&pontos_turisticos);

    printf("o numero total de pontos turísticos:%d\n",pontos_turisticos);

    printf("Digite a area da sua cidade:");

    scanf("%f", &area);

    printf("sua area em KM:%f\n", area);

    printf("digite o PIB da sua cidade:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    printf("Digite o numero da carta:");
  
    scanf("%d", &numero_da_carta);

    printf("numero da sua carta:%d\n", numero_da_carta);

    




    printf("A carta escolhida foi...\n\t");
     
    
    printf("pais = %s \n", pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %d \n",populacao);

    printf("pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);

    printf("numero da carta = %d \n",numero_da_carta);

    printf("Parabéns você ganhou o Super Trunfo\n");



    

    return 0;


}