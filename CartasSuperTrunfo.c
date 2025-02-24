#include <stdio.h>
 
int main() {

    printf("Desafio Super Trunfo, Mestre!\n\t");
    
    printf("**** Carta 1****\n ");

    
// Seguem as variáveis da Carta 1

    char pais[50] = "Brasil" ;
    char estado[50] = "Bahia" ;
    char cidade[30] = "Salvador" ;
    unsigned long int populacao = 294000 ;
    int pontos_turisticos = 10 ;
    float area = 791.0 ; 
    float pib = 15.0 ;
    float pib_per_capita = 0.0510;
    float densidade_populacional = 0.372;
    char codigo = "B01" ;
    float quociente;
    float soma;
  

    printf("País = %s \n",pais);

    printf("Estado = %s \n",estado);

    printf("Cidade = %s \n",cidade);

    printf("Populacão = %lumilhões \n",populacao);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos);

    printf("Área = %.1fkm² \n",area);

    printf("PIB = %.1fbilhões \n",pib);
    
    printf ("Código =  %[^\n]", codigo);

    printf("Digite a populacao da carta 1:");

    scanf("%d", &populacao);

    printf("a população:%lu\n", populacao);

    printf("Digite a area da carta 1:");

    scanf("%f", &area);

    printf("sua area em KM²:%f\n", area);

    printf("digite o PIB da carta 1:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

// A divisão para achar a Dens. Populacional e o PIB per Capita da carta 1

    quociente = (populacao / area) ;

    printf("A Densidade Populacional da carta 1 é: %f\n", quociente);

    quociente = (pib / populacao) ;

    printf("O PIB Per Capita da carta 1 é: %f\n\t", quociente);

 //A soma do Super Poder da carta 1

 soma = (populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional);

 printf("O super Poder da Carta 1 é: %f\n\t", soma);

  
    printf("****Carta 2****:\n");


// Seguem as variáveis da Carta 2

    char pais_2[50] = "Brasil" ;
    char estado_2[50] = "Distrito Federal" ;
    char cidade_2[30] = "Brasília";
    unsigned long int populacao_2 = 132000 ;
    int pontos_turisticos_2 = 20 ;
    float area_2 = 530.0; 
    float pib_2 = 45.0 ;
    float pib_per_capita_2 = 0.3409;
    float densidade_populacional_2 = 0.24905; 
    char codigo_2 = "D02" ;

    printf("País = %s \n",pais_2);

    printf("Estado = %s \n",estado_2);

    printf("Cidade = %s \n",cidade_2);

    printf("Populacão = %lumilhões \n",populacao_2);
    
    printf("Pontos turísticos = %d \n", pontos_turisticos_2);

    printf("Área = %.1fkm² \n",area_2);

    printf("PIB = %.1fbilhões \n",pib_2);
    
    printf("Código = %[^\n]", codigo_2);    


    printf("Digite a População da Carta 2:");

    scanf("%d", &populacao_2);

    printf("A População:%lu\n", populacao_2);

    printf("Digite a Área da carta 2:");

    scanf("%f", &area_2);

    printf("Sua área em KM²:%f\n", area_2);

    printf("Digite o PIB da carta 2:");

    scanf("%f", &pib_2);

    printf("o PIB da sua cidade:%f\n",pib_2);

// A divisão para achar a Dens. Populacional e o PIB per Capita da carta 2


    quociente = (populacao_2 / area_2) ;

    printf("A Densidade Populacional da carta 2 é: %f\n", quociente);

    quociente = (pib_2 / populacao_2) ;

    printf("O PIB Per Capita da carta 2 é: %f\n\t", quociente);

//A soma do Super Poder da carta 2

soma = (populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + densidade_populacional_2);

printf("O super Poder da Carta 2 é: %f\n\t", soma);


printf("Resposta 0 é Não, Resposta 1 é Sim\n\t");

  
float comparison = (float) pontos_turisticos >= pontos_turisticos_2;
printf(" Pontos Turísticos Bahia >= Pontos Turísticos DF : %1.f\n", comparison);  
printf("A carta 2 é maior que a carta 1\n\t");


 populacao = 20 ;
 populacao_2 = 10 ;

 printf("População da Bahia > Populaçao do DF %d\n", populacao > populacao_2);
 printf("A carta 1 é maior que a carta 2\n\t");


    return 0 ;
}