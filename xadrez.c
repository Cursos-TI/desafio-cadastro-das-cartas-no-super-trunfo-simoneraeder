
#include <stdio.h>
 
int main() {
    printf("Desafio Super Trunfo, Novato!\n Minha carta é:\n");

    char pais[50] = "Brasil" ;
    char estado[50] = "Rio_de_Janeiro" ;
    char cidade[30] = "Petropolis" ;
    float populacao = 294.983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    int numero_da_carta = 1 ;

    printf("pais = %s \n",pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %1.fmilhões \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);
    
    printf("Numero da carta = %d \n", numero_da_carta);

    
   
    printf("Qual é a sua carta?\n");

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

    scanf("%f", &populacao);

    printf("a população:%f\n", populacao);

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


    printf("A carta escolhida foi...\n");
     
    
    printf("pais = %s \n", pais);

    printf("estado = %s \n",estado);

    printf("cidade = %s \n",cidade);

    printf("Populacão = %1.fmilhões \n",populacao);

    printf("pontos turísticos = %d \n", pontos_turisticos);

    printf("Area = %.1f \n",area);

    printf("PIB = %.1fmilhões \n",pib);

    printf("numero da carta = %d \n",numero_da_carta);

    printf("Parabéns você ganhou o Super Trunfo\n");

    return 0;


}