#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// cria uma estrutura 'carta' com os atributos necessários
struct carta {
    char estado;
    int codigoCarta;
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
};

// cria a função que irá preencher a carta com os dados digitados pelo usuário
struct carta preencheDadosCarta(int numeroCarta) {
    // cria instância da carta a ser preenchida
    struct carta cartaPreenchida;
    // cria uma variável de confirmação (a carta só será salva após esta variável ser atribuída com o valor 'S')
    char confirmacao;

    // cria um laço de repetição onde somente será encerrado após o usuário confirmar o preenchimento da carta
    do {
        // indica qual carta será preenchida (de acordo com o número passado por parâmetro)
        if(numeroCarta == 1) {
            printf("\n\nVamos começar preenchendo os dados da %dª carta\n", numeroCarta);
        } else {
            printf("\n\nPreencha os dados da %dª carta\n", numeroCarta);
        }
        printf("_____________________________________________________________\n\n");
        
        // solicita o preenchimento do atributo 'estado'
        printf("Digite a sigla do estado: ");
        scanf(" %c", &cartaPreenchida.estado);

        // solicita o preenchimento do atributo 'nomeCidade'
        printf("Digite o nome da cidade: ");
        scanf(" %s", cartaPreenchida.nomeCidade);

        // solicita o preenchimento do atributo 'populacao'
        printf("Digite a quantidade habitantes da cidade: ");
        scanf(" %d", &cartaPreenchida.populacao);

        // solicita o preenchimento do atributo 'area'
        printf("Digite a área da cidade (em km²): ");
        scanf(" %f", &cartaPreenchida.area);

        // solicita o preenchimento do atributo 'pib'
        printf("Digite o pib da cidade: ");
        scanf(" %f", &cartaPreenchida.pib);

        // solicita o preenchimento do atributo 'numeroPontosTuristicos'
        printf("Digite a quantidade de pontos turísticos da cidade: ");
        scanf(" %d", &cartaPreenchida.numeroPontosTuristicos);

        //exibe as informações preenchidas
        printf("\n-------------------------------------------------------------\n");
        printf("------- Confira logo abaixo as informações preenchidas ------\n");
        printf("------- e confirme se estiver de acordo. --------------------\n");
        printf("-------------------------------------------------------------\n\n");
        printf("Sigla do estado: %c\n", cartaPreenchida.estado);
        printf("Nome da cidade: %s\n", cartaPreenchida.nomeCidade);
        printf("Quantidade habitantes da cidade: %d\n", cartaPreenchida.populacao);
        printf("Área da cidade (em km²): %.2f\n", cartaPreenchida.area);
        printf("PIB da cidade: %.2f\n", cartaPreenchida.pib);
        printf("Quantidade de pontos turísticos da cidade: %d\n", cartaPreenchida.numeroPontosTuristicos);

        //solicita a confirmação do usuário
        printf("\nconfirmar [s/n]: ");
        scanf(" %c", &confirmacao);
    } while(confirmacao != 'S' && confirmacao != 's');

    // exibe a informação de preenchimento confirmado
    printf("\npreenchimento confirmado\n");

    // devolve a carta preenchida
    return cartaPreenchida;
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // cria a instância da carta 1
    struct carta carta1;
    // cria a instância da carta 2
    struct carta carta2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // exibe o título do sistema
    printf("=============================================================\n");
    printf("========== Seja bem vindo ao super trunfo - países ==========\n");
    printf("=============================================================\n");
    
    //realiza o preenchimento e exibe os dados da 1ª carta
    carta1 = preencheDadosCarta(1);

    //realiza o preenchimento e exibe os dados da 2ª carta
    carta2 = preencheDadosCarta(2);

    // preenche o código das cartas
    carta1.codigoCarta = carta1.estado + '01';
    carta2.codigoCarta = carta1.estado == carta2.estado ? carta2.estado + "02" : carta2.estado + "01";

    return 0;
}