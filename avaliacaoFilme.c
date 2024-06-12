//Importando bibliotecas do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
struct filme{
    char titulo[30];
    char categoria[10];
    char sinopse[500];
    char dataLancamento[60];
    float avaliacao;
    int qtdAvaliacoes;
};
 
struct menu{
    struct filme um;
    struct filme dois;
    struct filme tres;
    struct filme quatro;
    struct filme cinco;
};
 
 
struct menu menuItens = {
    {"Duro de Matar", "Ação", "Sinopse: O policial de Nova York John McClane esta visitando sua familia no Natal. Ele participa de uma confraternizacao de fim de ano na sede da empresa japonesa em que a esposa trabalha. A festa e interrompida por terroristas que invadem o edificio de luxo. McClane nao demora a perceber que nao ha ninguem para salva-los, a nao ser ele proprio.", "Data de lançamento: 22 de dezembro de 1988 (Brasil)", 3.0, 2},
    {"Gente Grande", "Comédia", "Sinopse: A morte do treinador de basquete de infância de velhos amigos reúne a turma no mesmo lugar que celebraram um campeonato anos atrás. Os amigos, acompanhados de suas esposas e filhos, descobrem que idade não significa o mesmo que maturidade.", "Data de lançamento: 24 de setembro de 2010 (Brasil)", 5.0, 0},
    {"A Freira", "Terror", "Sinopse: Presa em um convento na Romênia, uma freira comete suicídio. Para investigar o caso, o Vaticano envia um padre assombrado e uma noviça prestes a se tornar freira. Arriscando suas vidas, a fé e até suas almas, os dois descobrem um segredo profano e se confrontam com uma força do mal que toma a forma de uma freira demoníaca e transforma o convento em um campo de batalha.", "Data de lançamento: 6 de setembro de 2018 (Brasil)", 2.6, 2},
    {"O Mundo Depois de Nós", "Suspense", "Sinopse: Amanda e Clay alugam uma casa de luxo para passar alguns dias tranquilos longe da cidade grande com seus filhos. Mas uma catástrofe misteriosa vira o país de ponta cabeça. G.H. e Ruth batem à sua porta afirmando que são os donos originais da mansão e pedem abrigo no lugar.", "Data de lançamento: 25 de outubro de 2023 (mundial)", 4.2, 4},
    {"Extraordinário", "Drama", "Sinopse: Auggie Pullman é um garoto que nasceu com uma deformidade facial e precisou passar por 27 cirurgias plásticas. Aos 10 anos, ele finalmente começa a frequentar uma escola regular, como qualquer outra criança, pela primeira vez. No quinto ano, ele precisa se esforçar para conseguir se encaixar em sua nova realidade.", "Data de lançamento: 7 de dezembro de 2017 (Brasil)", 2.6, 5}
};
 
//Funcao que chama a interrupção do programa
void goToExit(){
    //Funcao que interrompe o programa
    exit(0);
}
 
int main()
{
    // Setando local para correção de caracteres com acento
    setlocale(LC_ALL, "Portuguese");
    
    int opcaoEscolhida;
    
    printf("  _____________________________\n");
    printf("||                             ||\n");
    printf("||     FILMES EM DESTAQUE      ||\n");
    printf("||_____________________________||\n");
    printf("\n");
 
    printf("1. %s (%s) - Nota: %1.1f - Avaliações: %d  \n", menuItens.um.titulo, menuItens.um.categoria, menuItens.um.avaliacao, menuItens.um.qtdAvaliacoes);
    printf("2. %s (%s) - Nota: %1.1f - Avaliações: %d  \n", menuItens.dois.titulo, menuItens.dois.categoria, menuItens.dois.avaliacao, menuItens.dois.qtdAvaliacoes);
    printf("3. %s (%s) - Nota: %1.1f - Avaliações: %d  \n", menuItens.tres.titulo, menuItens.tres.categoria, menuItens.tres.avaliacao, menuItens.tres.qtdAvaliacoes);
    printf("4. %s (%s) - Nota: %1.1f - Avaliações: %d  \n", menuItens.quatro.titulo, menuItens.quatro.categoria, menuItens.quatro.avaliacao, menuItens.quatro.qtdAvaliacoes);
    printf("5. %s (%s) - Nota: %1.1f - Avaliações: %d  \n", menuItens.cinco.titulo, menuItens.cinco.categoria, menuItens.cinco.avaliacao, menuItens.cinco.qtdAvaliacoes);
    printf("6. Sair  \n");
    
    printf("\nQual a opção desejada?\n\n");
    
    scanf("%d", &opcaoEscolhida);
    
    if (opcaoEscolhida == 1) {
        printf("\n");
        printf("%s \n", menuItens.um.sinopse);
        printf("\n%s", menuItens.um.dataLancamento);


        int avaliacao;
        printf("\n\nInforme uma nota de 1 a 5 para o filme \n\n");
        scanf(" %d", &avaliacao);
        if(avaliacao > 0 && avaliacao <= 5) {
            float notaAnterior = menuItens.um.avaliacao * menuItens.um.qtdAvaliacoes;
            menuItens.um.qtdAvaliacoes++;
            float novaNota = (notaAnterior + avaliacao) / menuItens.um.qtdAvaliacoes;
            if (novaNota > 5) {
                menuItens.um.avaliacao = 5;
            } else {
                menuItens.um.avaliacao = novaNota;
            }
        }
    } else if (opcaoEscolhida == 2) {
        printf("\n");
        printf("%s \n", menuItens.dois.sinopse);
        printf("\n%s", menuItens.dois.dataLancamento);
        
        int avaliacao;
        printf("\n\nInforme uma nota de 1 a 5 para o filme \n\n");
        scanf(" %d", &avaliacao);
        if(avaliacao > 0 && avaliacao <= 5) {
            float notaAnterior = menuItens.dois.avaliacao * menuItens.dois.qtdAvaliacoes;
            menuItens.dois.qtdAvaliacoes++;
            float novaNota = (notaAnterior + avaliacao) / menuItens.dois.qtdAvaliacoes;
            if (novaNota > 5) {
                menuItens.dois.avaliacao = 5;
            } else {
                menuItens.dois.avaliacao = novaNota;
            }
        }
    } else if (opcaoEscolhida == 3) {
        printf("\n");
        printf("%s \n", menuItens.tres.sinopse);
        printf("\n%s", menuItens.tres.dataLancamento);
        
        int avaliacao;
        printf("\n\nInforme uma nota de 1 a 5 para o filme \n\n");
        scanf(" %d", &avaliacao);
        if(avaliacao > 0 && avaliacao <= 5) {
            float notaAnterior = menuItens.tres.avaliacao * menuItens.tres.qtdAvaliacoes;
            menuItens.tres.qtdAvaliacoes++;
            float novaNota = (notaAnterior + avaliacao) / menuItens.tres.qtdAvaliacoes;
            if (novaNota > 5) {
                menuItens.tres.avaliacao = 5;
            } else {
                menuItens.tres.avaliacao = novaNota;
            }
        }
    } else if (opcaoEscolhida == 4) {
        printf("\n");
        printf("%s \n", menuItens.quatro.sinopse);
        printf("\n%s", menuItens.quatro.dataLancamento);
        
        int avaliacao;
        printf("\n\nInforme uma nota de 1 a 5 para o filme \n\n");
        scanf(" %d", &avaliacao);
        if(avaliacao > 0 && avaliacao <= 5) {
            float notaAnterior = menuItens.quatro.avaliacao * menuItens.quatro.qtdAvaliacoes;
            menuItens.quatro.qtdAvaliacoes++;
            float novaNota = (notaAnterior + avaliacao) / menuItens.quatro.qtdAvaliacoes;
            if (novaNota > 5) {
                menuItens.quatro.avaliacao = 5;
            } else {
                menuItens.quatro.avaliacao = novaNota;
            }
        }
    } else if (opcaoEscolhida == 5) {
        printf("\n");
        printf("%s \n", menuItens.cinco.sinopse);
        printf("\n%s", menuItens.cinco.dataLancamento);
        
        int avaliacao;
        printf("\n\nInforme uma nota de 1 a 5 para o filme \n\n");
        scanf(" %d", &avaliacao);
        if(avaliacao > 0 && avaliacao <= 5) {
            float notaAnterior = menuItens.cinco.avaliacao * menuItens.cinco.qtdAvaliacoes;
            menuItens.cinco.qtdAvaliacoes++;
            float novaNota = (notaAnterior + avaliacao) / menuItens.cinco.qtdAvaliacoes;
            if (novaNota > 5) {
                menuItens.cinco.avaliacao = 5;
            } else {
                menuItens.cinco.avaliacao = novaNota;
            }
        }
    } else if (opcaoEscolhida == 6) {
        goToExit();
    } else {
        printf("A opção informada é inválida, tente novamente! \n");
        system("PAUSE");
    }
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    main();
 
    system("PAUSE");
 
}