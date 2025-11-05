#include <stdio.h>
#include <string.h>

#define MAX_DISCIPLINAS 10
#define MAX_NOME_DISCIPLINA 50

int main() {
    char disciplinas[MAX_DISCIPLINAS][MAX_NOME_DISCIPLINA];
    int num_alunos[MAX_DISCIPLINAS];
    int num_disciplinas = 0;
    char disciplina_atual[MAX_NOME_DISCIPLINA];

    printf("Insira as disciplinas. Digite 'fim' para parar.\n");
    while (num_disciplinas < MAX_DISCIPLINAS) {
        printf("Nova da disciplina: ");
        scanf("%49s", disciplina_atual);
        if (strcmp(disciplina_atual, "fim") == 0) {
            break;
        }
        strcpy(disciplinas[num_disciplinas], disciplina_atual);
        num_disciplinas++;
    }

    printf("\n--- Cadastro de Alunos pos Disciplina ---\n");
    for (int i = 0; i < num_disciplinas; i++) {
        printf("Numero de alunos matriculados em %s: ", disciplinas[i]);
        scanf("%d", &num_alunos[i]);
    }

    printf("\n--- Resumo das Disciplinas e Alunos Matriculados ---\n");
    for (int i = 0; i < num_disciplinas; i++) {
        printf("Disciplina: %s, Alunos: %d\n", disciplinas[i], num_alunos[i]);
    }

    int total_alunos = 0;
    for (int i = 0; i < num_disciplinas; i++) {
        total_alunos += num_alunos[i];
    }

    printf("\n Nº de disciplinas cadastradas: %d\n", num_disciplinas);
    printf("\n Nº de alunos cadastrados: %d\n", total_alunos);

    return 0;
}


