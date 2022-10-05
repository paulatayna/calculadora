#include <stdio.h>
#include <stdlib.h>

int main()
{
    //usuário do GitHub - paulatayna

    float a;
    float b;
    float resultado;
    int escolha;

    // calculadora em C
    printf("Universidade LaSalle\nAnálise e desenvolvimento de sistemas\nPaula Tayná Silva - 202213311\n\n");

    // usuario escolhe o que deseja fazer
    printf("Escolha o que deseja fazer:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("5 - Raiz quadrada\n");
    printf("6 - Potência\n");
    scanf("%d", &escolha);

    // se o usuário escolhe um valor inválido, mostra erro e finaliza o programa
    if(escolha > 6 || escolha <= 0)
    {
        printf("\nDeve escolher um dos números acima\n");
        return 0;
    }

    // usuario escolhe o primeiro numero
    printf("\nEscolha o primeiro número: ");
    scanf("%f", &a);


    // se o usuário escolhe raiz quadrada, não escolherá o segundo número
    if (escolha != 5)
    {
            printf("\nEscolha o segundo número: ");
            scanf("%f", &b);
    }

    // usando o switch case para fazer os cálculos
    switch(escolha)
    {
        case 1:
            resultado = a+b;
            break;
        case 2:
            resultado = a-b;
            break;
        case 3:
            // se o usuário tenta dividir por 0 da erro e finaliza o programa
            if (b == 0)
            {
                printf("\nNão é permitido dividir por 0\n");
                return 0;
            }
            resultado = a/b;
            break;
        case 4:
            resultado = a*b;
            break;
        case 5:
            resultado = sqrt(a);
            break;
        case 6:
            resultado = pow(a, b);
            break;
    }

    // mostra o resultado
    printf("\nResultado: %f", resultado);
    return 0;
}
