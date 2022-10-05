#include <stdio.h>
#include <stdlib.h>

int main()
{
    //usu�rio do GitHub - paulatayna

    float a;
    float b;
    float resultado;
    int escolha;

    // calculadora em C
    printf("Universidade LaSalle\nAn�lise e desenvolvimento de sistemas\nPaula Tayn� Silva - 202213311\n\n");

    // usuario escolhe o que deseja fazer
    printf("Escolha o que deseja fazer:\n");
    printf("1 - Adi��o\n");
    printf("2 - Subtra��o\n");
    printf("3 - Divis�o\n");
    printf("4 - Multiplica��o\n");
    printf("5 - Raiz quadrada\n");
    printf("6 - Pot�ncia\n");
    scanf("%d", &escolha);

    // se o usu�rio escolhe um valor inv�lido, mostra erro e finaliza o programa
    if(escolha > 6 || escolha <= 0)
    {
        printf("\nDeve escolher um dos n�meros acima\n");
        return 0;
    }

    // usuario escolhe o primeiro numero
    printf("\nEscolha o primeiro n�mero: ");
    scanf("%f", &a);


    // se o usu�rio escolhe raiz quadrada, n�o escolher� o segundo n�mero
    if (escolha != 5)
    {
            printf("\nEscolha o segundo n�mero: ");
            scanf("%f", &b);
    }

    // usando o switch case para fazer os c�lculos
    switch(escolha)
    {
        case 1:
            resultado = a+b;
            break;
        case 2:
            resultado = a-b;
            break;
        case 3:
            // se o usu�rio tenta dividir por 0 da erro e finaliza o programa
            if (b == 0)
            {
                printf("\nN�o � permitido dividir por 0\n");
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
