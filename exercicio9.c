/*A disciplina “Complexidade de algoritmos” realiza 5 avaliações por semestre.
Desenvolva algoritmo que determine o desvio padrão das avaliações de um
determinado aluno.*/

int main (void) {
  
    float av1, av2, av3, av4, av5, soma, media, variancia, dp;

    printf("\nInforme abaixo as notas das 5 avaliações de um aluno:\n");

    printf("\nNota 1: ");
    scanf("%f", &av1);
    printf("Nota 2: ");
    scanf("%f", &av2);
    printf("Nota 3: ");
    scanf("%f", &av3);
    printf("Nota 4: ");
    scanf("%f", &av4);
    printf("Nota 5: ");
    scanf("%f", &av5);

    soma = av1 + av2 + av3 + av4 + av5;
    media = soma / 5.0;

    variancia = (pow(av1 - media, 2.0) + pow(av2 - media, 2.0) + pow(av3 - media, 2.0) + pow(av4 - media, 2.0) + pow(av5 - media, 2.0)) / 5.0;

    dp = sqrt(variancia);

    printf("\nDesvio padrão das avaliações: %f\n", dp);
  
    return 0;
}
