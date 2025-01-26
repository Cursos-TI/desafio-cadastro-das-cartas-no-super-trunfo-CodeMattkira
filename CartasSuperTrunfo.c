#include <stdio.h>

int main() {
  
   // CRIAÇÃO DAS VARIÁVEIS QUE VÃO RECEBER AS INFORMAÇÕES DAS CARTAS

    char estado[30];
    char codigocarta[30];
    char nomecidade[30];
    float populacao;
    int areakm;
    float pib;
    int numturisticos;
    
    // CRIAÇÃO DA ENTRADA DE DADOS (INFORMAÇÕES) DAS CARTAS

    printf("Olá, seja bem vindo a criação das cartas do jogo. A seguir será solicitado informações que serão adicionadas a cada carta do jogo. Vamos começar! \n");
    
    printf("Primeiro, digite o estado: ");
    scanf("%s", &estado);

    printf("Agora digite o código da carta: ");
    scanf("%s", &codigocarta);

    printf("Agora digite o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Agora digite a população: ");
    scanf("%f", &populacao);

    printf("Agora digite a área em km²: ");
    scanf("%d", &areakm);

    printf("Agora digite o pib: ");
    scanf("%f", &pib);

    printf("Agora digite o número de pontos turísticos: ");
    scanf("%d", &numturisticos);

   // IMPRIMINDO NA TELA OS DADOS DA CARTA CADASTRADA
    
    printf("Dados da carta cadastrada:\n Estado: %s\n Código da carta: %s\n Nome da Cidade: %s\n População: %.2f milhões\n Área em Km²: %d km²\n Pib: R$ %.2f Bilhões\n Números Pontos Turísticos: %d \n", estado, codigocarta, nomecidade, populacao, areakm, pib, numturisticos);
    
    return 0;

}
