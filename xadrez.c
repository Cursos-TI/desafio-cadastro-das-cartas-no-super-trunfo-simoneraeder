
#include <stdio.h>
 
int main() {
    printf("Desafio Xadrez, Novato!\n");

    int população, pontos_turisticos;
    float área, PIB;
    char país[50], estado[50];
    char cidade[30];
   
    
    printf("Digite o seu país: \n");
    scanf("%s", &país);
    
    printf("Digite o seu estado: \n");
    scanf("%s", &estado);
    
    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);
    
    printf("Digite a população: \n");
    scanf("%d", &população);
    
    printf("Digite quantos pontos_turísticos tem: \n");
    scanf("%d", &pontos_turisticos);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &área);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("país: %s - estado: %s - cidade: %s", país, estado, cidade);
    printf("população: %d - pontos_turisticos: %d", população, pontos_turisticos);
    printf("área: %f - PIB: %f", área, PIB);


    return 0;


}