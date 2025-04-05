#include <stdio.h>
#include <string.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50] = "Larissa";
    

    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);

    printf ("Digite sua altura: \n");
    scanf ("%f", &altura);

    printf ("Digite sua Matricula: \n");
    scanf ("%d", &matricula) ;
    
        // Limpa o buffer de entrada
        while (getchar() != '\n'); // Consome todos os caracteres até a nova linha

    printf ("Digite o seu nome:\n ");
    fgets (nome, 49, stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha
    
    printf ("Nome do Aluno: %s - Matricula: %d\n", nome, matricula );
    printf ("Idade: %d - Altura do Aluno: %.2f\n", idade, altura);


return 0;
}