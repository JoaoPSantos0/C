#include <stdio.h>
#include <stdlib.h>

/**
 * Os nomes dos cursos e dos alunos devem ter espaço suficiente apenas para armazenar os caracteres
que formam os nomes e o caractere delimitador da string. Para isso, seu programa deve ler inicial-
mente os nomes (de cursos e de alunos) em um buffer que é uma string com 1000 caracteres. Para
cada nome lido deve ser alocado um espaço para ele mais o ’\0’ no elemento do vetor onde esse nome
será armazenado. Calcule a mensalidade a ser paga pelo aluno e imprima as informações em um boleto
de pagamento com as seguintes informações: nome do aluno, nome do curso, total de créditos que o aluno
cursa, valor do crédito do curso e o valor final da mensalidade a pagar. Ao final, seu programa deve
liberar todos os espaços alocados para armazenar os nomes de cursos e de alunos.
*/
typedef struct 
{
    int codCurso;
    double credito;
    char nomeCurso[100];
}Curso;

typedef struct{
    char nomeAluno[500];
    int codCurso1;
    int creditosUsando;
}Aluno;


int main(){
    int n, m, i, j;
    scanf("%d",&n);
    Curso x[n];
    for(i = 0; i<n; i++){
        scanf("%d", &x->codCurso);
        scanf("%lf%*c", &x->credito);
        scanf("%[^\n]%*c", &x->nomeCurso);
    }

    scanf("%d",&m);
    Aluno y[m];
    for(j = 0; j<m; j++){
        scanf("%[^\n]%*c", &y->nomeAluno);
        scanf("%d", &y->codCurso1);
        scanf("%d", &y->creditosUsando);
    }
    
}