
#include <stdio.h>
 
int main() {

    printf("Desafio Super Trunfo, Novato!\n \t");
    printf("****Carta 1 ****\n");

    char pais[50] = "Brasil" ;
    char estado[50] = "Rio_de_Janeiro" ;
    char cidade[30] = "Petrópolis" ;
    int populacao = 294983 ;
    int pontos_turisticos = 20 ;
    float area = 791.1 ; 
    float pib = 15.6 ;
    int numero_da_carta = 1 ;

   printf("País = %s \n",pais);

    printf("Estado = %s \n",estado);

    printf("Cidade = %s \n",cidade);

    printf("Populacão = %dmilhões \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Área = %.1fkm² \n",area);

    printf("PIB = %.1fbilhões \n",pib);
    
    printf("Número da carta = %d \n", numero_da_carta);


   
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

   
    printf("Qual é a sua carta?\n\t");

    printf("Digite o nome do seu país:");
    
    scanf("%s", &pais);

    printf("Seu país é: %s\n", pais);

    printf("Digite o nome do seu estado:");
    
    scanf("%s", &estado);

    printf("Seu estado é: %s\n", estado);

    printf("Digite o nome da sua cidade:");

    scanf("%s", &cidade);

    printf("O nome da cidade:%s\n", cidade);

    printf("Digite a populacao da sua cidade:");

    scanf("%d", &populacao);

    printf("A população:%dBilhões\n", populacao);

    printf("Digite os pontos turisticos da sua cidade:");

    scanf("%d",&pontos_turisticos);

    printf("O número total de pontos turísticos:%d\n",pontos_turisticos);

    printf("Digite a área da sua cidade:");

    scanf("%f", &area);

    printf("Sua área em KM²:%f\n", area);

    printf("digite o PIB da sua cidade:");

    scanf("%fBilhões", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    printf("Digite o número da carta:");
  
    scanf("%d", &numero_da_carta);

    printf("O número da sua carta:%d\n\t", numero_da_carta);

    
    printf("A carta escolhida foi...\n");
     
    
    printf("País = %s \n", pais);

    printf("Estado = %s \n",estado);

    printf("Cidade = %s \n",cidade);

    printf("Populacão = %dMilhões \n",populacao);

    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Área = %.1fkm² \n",area);

    printf("PIB = %.1fBilhões \n",pib);

    printf("NÚmero da carta = %d \n\t",numero_da_carta);

    printf("Parabéns você ganhou o Super Trunfo\n");






    

    return 0;


}