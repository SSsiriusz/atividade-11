#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao = 0;

    char nome1[10], nome2[10], nome3[10], nome4[10], nome5[10];
    float nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10,
        nota11, nota12, nota13, nota14, nota15, nota16, nota17, nota18, nota19,
        nota20;

    while ((opcao != 1) && (opcao != 2) && (opcao != 3)) {
        system("cls");
        printf("Bem vindo ao meu sistema\n\n");
        printf("Menu\n");
        printf("----\n");
        printf("1-Cadastro de Notas/Alunos\n");
        printf("2-Alteracao de Notas/Alunos\n");
        printf("3-Sair\n");
        printf("Opcao:");
        scanf("%i", &opcao);

        if (opcao == 1) {
        	
            printf(" \nEscreva o primeiro nome: ");
            scanf("%s", nome1);
            printf("Escreva as notas do primeiro aluno:\n");
            scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
            float media1 = (nota1 + nota2 + nota3 + nota4) / 4;
            printf("A media total do primeiro aluno �: %f \n", media1);
            if (media1 < 4) {
                printf("Reprovado\n");
            } else if (media1 < 6) {
                printf("Recuperacao\n");
            } else {
                printf("Aprovado\n");
            }

            printf("\nEscreva o segundo nome:\n");
            scanf("%s", nome2);
            printf("Escreva as notas do segundo aluno:\n");
            scanf("%f%f%f%f", &nota5, &nota6, &nota7, &nota8);
            float media2 = (nota5 + nota6 + nota7 + nota8) / 4;
            if (media2 < 4) {
                printf("Reprovado\n");
            } else if (media2 < 6) {
                printf("Recuperacao\n");
            } else {
                printf("Aprovado\n");
            }

            printf("\nEscreva o terceiro nome:\n");
            scanf("%s", nome3);
            printf("Escreva as notas do terceiro aluno:\n");
            scanf("%f%f%f%f", &nota9, &nota10, &nota11, &nota12);
            float media3 = (nota9 + nota10 + nota11 + nota12) / 4;
            printf("A media total do terceiro aluno �: %f \n", media3);
            if (media3 < 4) {
                printf("Reprovado\n");
            } else if (media3 < 6) {
                printf("Recuperacao\n");
            } else {
                printf("Aprovado\n");
            }

            printf("\nEscreva o quarto nome:\n");
            scanf("%s", nome4);
            printf("Escreva a notas do quarto aluno:\n");
            scanf("%f%f%f%f", &nota13, &nota14, &nota15, &nota16);
            float media4 = (nota13 + nota14 + nota15 + nota16) / 4;
            printf("A media total do quarto aluno �: %f \n", media4);
            if (media4 < 4) {
                printf("Reprovado\n");
            } else if (media4 < 6) {
                printf("Recuperacao\n");
            } else {
                printf("Aprovado\n");
            }

            printf("\nEscreva o quinto nome:\n");
            scanf("%s", nome5);
            printf("Escreva a notas do quinto aluno:\n");
            scanf("%f%f%f%f", &nota17, &nota18, &nota19, &nota20);
            float media5 = (nota17 + nota18 + nota19 + nota20) / 4;
            printf("A media total do quinto aluno �: %f \n", media5);
            if (media5 < 4) {
                printf("Reprovado\n");
            } else if (media5 < 6) {
                printf("Recuperacao\n");
            } else {
                printf("Aprovado\n");
            }
        }
    }

    if (opcao == 2) {
	    printf(" \nEscreva o primeiro nome: ");
        scanf("%s", nome1);
        printf("Escreva as notas do primeiro aluno:\n");
        scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
        float media1 = (nota1 + nota2 + nota3 + nota4) / 4;
        printf("A media total do primeiro aluno �: %f \n", media1);
        if (media1 < 4) {
            printf("Reprovado\n");
        } else if (media1 < 6) {
            printf("Recuperacao\n");
        } else {
            printf("Aprovado\n");
        }

        printf("\nEscreva o segundo nome:\n");
        scanf("%s", nome2);
        printf("Escreva as notas do segundo aluno:\n");
        scanf("%f%f%f%f", &nota5, &nota6, &nota7, &nota8);
        float media2 = (nota5 + nota6 + nota7 + nota8) / 4;
        if (media2 < 4) {
            printf("Reprovado\n");
        } else if (media2 < 6) {
            printf("Recuperacao\n");
        } else {
            printf("Aprovado\n");
        }

        printf("\nEscreva o terceiro nome:\n");
        scanf("%s", nome3);
        printf("Escreva as notas do terceiro aluno:\n");
        scanf("%f%f%f%f", &nota9, &nota10, &nota11, &nota12);
        float media3 = (nota9 + nota10 + nota11 + nota12) / 4;
        printf("A media total do terceiro aluno �: %f \n", media3);
        if (media3 < 4) {
            printf("Reprovado\n");
        } else if (media3 < 6) {
            printf("Recuperacao\n");
        } else {
            printf("Aprovado\n");
        }

        printf("\nEscreva o quarto nome:\n");
        scanf("%s", nome4);
        printf("Escreva a notas do quarto aluno:\n");
        scanf("%f%f%f%f", &nota13, &nota14, &nota15, &nota16);
        float media4 = (nota13 + nota14 + nota15 + nota16) / 4;
        printf("A media total do quarto aluno �: %f \n", media4);
        if (media4 < 4) {
            printf("Reprovado\n");
        } else if (media4 < 6) {
            printf("Recuperacao\n");
        } else {
            printf("Aprovado\n");
        }

        printf("\nEscreva o quinto nome:\n");
        scanf("%s", nome5);
        printf("Escreva a notas do quinto aluno:\n");
        scanf("%f%f%f%f", &nota17, &nota18, &nota19, &nota20);
        float media5 = (nota17 + nota18 + nota19 + nota20) / 4;
        printf("A media total do quinto aluno �: %f \n", media5);
        
        if (media5 < 4) {
            printf("Reprovado\n");
        } else if (media5 < 6) {
            printf("Recuperacao\n");
        } else 
            printf("Aprovado\n");
        
	    if (opcao == 3) {
	        printf("\nAperter numero tres para sair do programa");
	    }
    }

    return 0;
}

    
