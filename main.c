#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char titulo[100];
    int paginas;
    int ano;

    printf("Digite o título do livro: ");
    scanf(" %[^\n]", titulo);

    printf("Digite o número de páginas: ");
    scanf("%d", &paginas);

    printf("Digite o ano de publicação: ");
    scanf("%d", &ano);

    printf("\nLivro cadastrado:\n");
    printf("Título: %s\n", titulo);
    printf("Páginas: %d\n", paginas);
    printf("Ano: %d\n", ano);

    return 0;
}
