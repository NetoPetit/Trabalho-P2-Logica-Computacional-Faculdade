#include <stdio.h>
#include <stdlib.h>

struct filmes{
    char titulo[30];
    char categoria[10];
    float avaliacao;
    float duracao;
};

struct categorias{
    struct filmes acao;
    struct filmes comedia;
    struct filmes terror;
};

struct categorias avaliacaoFilme = {{"Duro de Matar", "Acao", 5.0, 2.0 }, 
{"Gente Grande", "Comedia", 4.2, 1.2}, {"A Freira", "Terror", 2.6, 1.3} };

int main()
{
     int categoria, filmeAcao;
     float nota;
    
    printf("  _____________________________\n");
    printf("||                             ||\n");
    printf("||     FILMES EM DESTAQUE      ||\n");
    printf("||_____________________________||\n");
    printf("\n");

    printf("1 - Acao\n2 - Comedia\n3 - Terror\n\n");
    
    printf("Escolha uma categoria: \n");
    scanf("%d", &categoria);
    printf("\n");
    
    if (categoria == 1 )
    {
       printf("Opcoes em destaque:\n");
       printf("\n");
       printf("1- Duro de Matar \n2- Bad Boys II \n3- O Protetor \n");
       printf("\n");

       printf("Escolha uma opcao: \n");
       scanf("%d", &filmeAcao);
       
        if (filmeAcao == 1)
        {
            printf("Titulo: %s \n", avaliacaoFilme.acao.titulo);
            printf("Categoria: %s \n", avaliacaoFilme.acao.categoria);
            printf("\n");

            printf("Sinopse: O policial de Nova York John McClane esta visitando sua "
            "familia no Natal. Ele participa de uma confraternizacao de fim de ano na "
            "sede da empresa japonesa em que a esposa trabalha. A festa e interrompida "
            "por terroristas que invadem o edificio de luxo. McClane nao demora a perceber "
            "que nao ha ninguem para salva-los, a nao ser ele proprio.\n");

            printf("\n");

            printf("De 1 a 5, qual nota voce daria a esse filme?");
            printf("\n");
            scanf("%f", &nota);

            if (nota >= 3)
            {
                printf("\n");
                printf("Que bom que gostou!\n" 
                "De acordo com sua classificacao, te indicamos esses filmes:\n\n"
                "1- Duro de matar II \n2- Velozes e Furiosos\n3- Bater ou Correr");
            }

            if (nota < 3)
            {
                printf("\n");
                printf("Que pena! Esperamos melhorar na proxima!\n" 
                "Mas vamos te indicar outros filmes:\n\n"
                "Duro de matar II \nVelozes e Furiosos\nBater ou Correr");
            }
            /*printf("Avaliacao: %2.2f \n", avaliacaoFilme.acao.avaliacao);
            printf("Duracao: %2.2f \n", avaliacaoFilme.acao.duracao);*/
        }
        
    }

    printf("\n");

    if ( categoria == 2)
    {
        printf("Titulo: %s \n", avaliacaoFilme.comedia.titulo);
        printf("Categoria: %s \n", avaliacaoFilme.comedia.categoria);
        printf("Avaliacao: %2.2f \n", avaliacaoFilme.comedia.avaliacao);
        printf("Duracao: %2.2f \n", avaliacaoFilme.comedia.duracao);
    }

    system("PAUSE");

}

