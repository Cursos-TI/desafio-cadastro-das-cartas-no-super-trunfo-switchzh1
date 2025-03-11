#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char nome[50];     // Nome da cidade
    char estado;       // Código do estado (A-H)
    int cidade;        // Código da cidade (1-4)
    int populacao;     // População da cidade
    float area;        // Área da cidade
    float pib;         // PIB da cidade
    int pontosturisticos;  // Número de pontos turísticos
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta) {
    printf("\n=== Cadastro de Carta ===\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);
    printf("Digite o código do estado (A-H): ");
    scanf(" %c", &carta->estado);
    printf("Digite o código da cidade (1-4): ");
    scanf("%d", &carta->cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosturisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("\n=== Dados da Carta ===\n");
    printf("Nome da Cidade: %s\n", carta.nome);
    printf("Código da Cidade: %c%02d\n", carta.estado, carta.cidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosturisticos);
}

// Função principal
int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro das duas cartas
    cadastrarCarta(&carta1);
    cadastrarCarta(&carta2);

    // Exibição dos dados cadastrados
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}
