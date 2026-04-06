#include <stdio.h>
#include <stdlib.h>

int main()
{
    int votos = 0;
    int candidato = 0;
    int votos1 = 0, votos2 = 0, votos3 = 0, votosBranco = 0, votosNulos = 0;
    int maiorVotos = 0;

    do
    {

        printf("Digite o numero do candidato: \n");
        printf("1- Bill Gates\n");
        printf("2- Steve Jobs\n");
        printf("3- Linus Torvalds\n");
        printf("0- Voto Em Branco\n");
        printf("9- Anular Voto\n");
        scanf("%d", &candidato);

        switch (candidato)
        {
        case 1:
            votos++;
            votos1++;
            break;
        case 2:
            votos++;
            votos2++;
            break;
        case 3:
            votos++;
            votos3++;
            break;
        case 0:
            votos++;
            votosBranco++;
            break;
        case 9:
            votos++;
            votosNulos++;
            break;
        default:
            break;
        }

    } while (votos < 10);

    printf("Total de votos: %d\n", votos);
    printf("Votos para Bill Gates: %d\n", votos1);
    printf("Votos para Steve Jobs: %d\n", votos2);
    printf("Votos para Linus Torvalds: %d\n", votos3);
    printf("Votos em Branco: %d\n", votosBranco);
    printf("Votos Nulos: %d\n", votosNulos);

    maiorVotos = votos1;
    if (votos2 > maiorVotos) maiorVotos = votos2;
    if (votos3 > maiorVotos) maiorVotos = votos3;

    int empate = (votos1 == maiorVotos) + (votos2 == maiorVotos) + (votos3 == maiorVotos);

    if (empate > 1) {
        printf("Houve um empate entre os candidatos.\n");
    } else if (votos1 == maiorVotos) {
        printf("O candidato vencedor e: Bill Gates\n");
    } else if (votos2 == maiorVotos) {
        printf("O candidato vencedor e: Steve Jobs\n");
    } else {
        printf("O candidato vencedor e: Linus Torvalds\n");
    }

    system("pause");
    system("cls");
}