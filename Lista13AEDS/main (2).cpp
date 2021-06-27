/*Lista 13.
Alunos: 
Gabriel Alejandro Figueiro Galindo.
Thiago Utsch Andrade*/
#include "Personagens.h"
using namespace std;
void Menu()
{
    printf("GUERRA MEDIEVAL \n");
    printf ("========================================= \n");
    printf ("Como funciona? \n\n");
    printf (" -Guerra Medieval é um jogo RPG por turnos que consiste em dar dano no adversário ");
    printf ("até que ele perca toda sua vida. \n");
    printf (" Nele, temos diversas classes como: Guerreiro, Mago, Zumbi, entre outras. \n\n\n");
}
//******************************************************************************
void Status1(Personagem *p1)
{
    printf("\nStatus do Player 1\n");
    cout << "Classe:" << p1->nome << "\n";
    printf("Vida:%d/%d\n", p1->vida, p1->maxvida);
    printf("Mana:%d/%d\n", p1->mana, p1->maxmana);
}
//******************************************************************************
void Status2(Personagem *p2)
{
    printf("\nStatus do Player 2\n");
    cout << "Classe:" << p2->nome << "\n";
    printf("Vida:%d/%d\n", p2->vida, p2->maxvida);
    printf("Mana:%d/%d\n", p2->mana, p2->maxmana);
}
//******************************************************************************
void ListaDeMagias1(Personagem *p1, Personagem *p2, int p1_personagem)
{
    int op1 = 0;//Magia escolhida;
    if(p1_personagem == 1){
        printf("1-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Tempestade();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 2){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Intoxicacao();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 3){
        printf("1-Poção da Vida\n");
        printf("2-Bio\n");
        printf("3-Cura\n");
        printf("4-Intoxicação\n");
        printf("5-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Pocao_da_Vida();
            p1->recebeCura();
            break;
            case 2:
            p1->feitico = new Bio();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            case 3:
            p1->feitico = new Cura();
            p1->recebeCura();
            break;
            case 4:
            p1->feitico = new Intoxicacao();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            case 5:
            p1->feitico = new Tempestade();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 4){
        printf("1-Poção da Vida\n");
        printf("2-Flama Gelada\n");
        printf("3-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Pocao_da_Vida();
            p1->recebeCura();
            break;
            case 2:
            p1->feitico = new Flama_Gelada();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            case 3:
            p1->feitico = new Tempestade();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 5){
        printf("1-Bio\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Bio();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 6){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Intoxicacao();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 7){
        printf("1-Hálito de Fogo\n");
        printf("2-Flama Gelada\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Halito_de_Fogo();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            case 2:
            p1->feitico = new Flama_Gelada();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 8){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->feitico = new Intoxicacao();
            p2->recebeDanoDeMagia(p1->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
}
//******************************************************************************
void ListaDeMagias2(Personagem *p2, Personagem *p1, int p2_personagem)
{
    int op2 = 0;//Magia escolhida;
    if(p2_personagem == 1){
        printf("1-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Tempestade();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 2){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Intoxicacao();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 3){
        printf("1-Poção da Vida\n");
        printf("2-Bio\n");
        printf("3-Cura\n");
        printf("4-Intoxicação\n");
        printf("5-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Pocao_da_Vida();
            p2->recebeCura();
            break;
            case 2:
            p2->feitico = new Bio();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            case 3:
            p2->feitico = new Cura();
            p2->recebeCura();
            break;
            case 4:
            p2->feitico = new Intoxicacao();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            case 5:
            p2->feitico = new Tempestade();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 4){
        printf("1-Poção da Vida\n");
        printf("2-Flama Gelada\n");
        printf("3-Tempestade\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Pocao_da_Vida();
            p2->recebeCura();
            break;
            case 2:
            p2->feitico = new Flama_Gelada();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            case 3:
            p2->feitico = new Tempestade();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 5){
        printf("1-Bio\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Bio();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 6){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Intoxicacao();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 7){
        printf("1-Hálito de Fogo\n");
        printf("2-Flama Gelada\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Halito_de_Fogo();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            case 2:
            p2->feitico = new Flama_Gelada();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 8){
        printf("1-Intoxicação\n");
        printf("Escolha a Magia: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->feitico = new Intoxicacao();
            p1->recebeDanoDeMagia(p2->ataqueMagia());
            break;
            default:
            printf("Opção inválida\n");
        }
    }
}
//******************************************************************************
void ListaDeArmas1(Personagem *p1, int p1_personagem)
{
    int op1 = 0;//arma escolhida;
    if(p1_personagem == 1){
        printf("1-Espada barroca\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Espada_Barroca();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 2){
        printf("1-Besta\n");
        printf("2-Esfera de Ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Besta();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            case 2:
            p1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 3){
        printf("1-Tridente Sagrado\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 4){
        printf("1-Tridente Sagrado\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 5){
        printf("1-Esfera de ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 6){
        printf("1-Porrete\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Porrete();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 7){
        printf("1-Esfera de ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p1_personagem == 8){
        printf("1-Porrete\n");
        printf("2- Garra Letal\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op1);
        switch(op1){
            case 1:
            p1->arma = new Porrete();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            case 2:
            p1->arma = new Garra_Letal();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
}
//******************************************************************************
void ListaDeArmas2(Personagem *p2,int p2_personagem)
{
    int op2 = 0;//arma escolhida;
    if(p2_personagem == 1){
        printf("1-Espada barroca\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Espada_Barroca();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 2){
        printf("1-Besta\n");
        printf("2-Esfera de Ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Besta();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            case 2:
            p2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 3){
        printf("1-Tridente Sagrado\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 4){
        printf("1-Tridente Sagrado\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 5){
        printf("1-Esfera de ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 6){
        printf("1-Porrete\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Porrete();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 7){
        printf("1-Esfera de ataque\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    else if(p2_personagem == 8){
        printf("1-Porrete\n");
        printf("2- Garra Letal\n");
        printf("Escolha uma nova arma: ");
        scanf("%d", &op2);
        switch(op2){
            case 1:
            p2->arma = new Porrete();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            case 2:
            p2->arma = new Garra_Letal();
            cout << "Nova arma: " << p2->arma->nome << "\n";
            break;
            default:
            printf("Opção inválida\n");
        }
    }
}
//******************************************************************************
int Jogo(Personagem *p1, Personagem *p2, int p1_personagem, int p2_personagem)
{
    int rodadas = 0;
    printf("\nInício do jogo\n");
    int escolha1, escolha2;
    do{
        printf("\nRodada-%d\n", rodadas + 1);
        rodadas++;
        escolha1 = 0;
        escolha2 = 0;
        //Checar quem ganhou.
        if(p1->vida == 0){
            printf("\nJogador 2 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
        else if(p2->vida == 0){
            printf("\nJogador 1 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
        //Jogador 1;
        Status1(p1);
        printf("\nVez do player 1\n");
        printf("1-Usar arma\n");
        if(p1->mana != 0){printf("2-Usar magia\n");}
        printf("3-Trocar de arma\n");
        if(p1->chanceLendaria() == 1){printf("4-Usar Voto Solene de Bul-Kathos\n");}
        printf("Escolha a sua ação: ");
        scanf("%d", &escolha1);
        if(escolha1 == 1){
            cout << "Player 1 utilizou arma: " << p1->arma->nome << "\n";
            p2->recebeDanoDeArma(p1->ataqueArma());
        }
        else if(escolha1 == 2){
            printf("Selecione a magia\n");
            ListaDeMagias1(p1, p2, p1_personagem);
        }
        else if(escolha1 == 3){
            printf("Selecione a arma\n");
            ListaDeArmas1(p1, p1_personagem);
        }
        else if(escolha1 == 4){
            p1->arma = new BulKathos();
            p2->recebeDanoLendario(p1->ataquelendario());
            switch(p1_personagem){
                case 1:
                p1->arma = new Porrete();
                break;
                case 2:
                p1->arma = new Cajado();
                break;
                case 3:
                p1->arma = new Cajado();
                break;
                case 4:
                p1->arma = new Besta();
                break;
                case 5:
                p1->arma = new Garra_Letal();
                break;
                case 6:
                p1->arma = new Cajado();
                break;
                case 7:
                p1->arma = new Garra_Letal();
                break;
                case 8:
                p1->arma = new Cajado();
                break;
            }
        }
        else{printf("Opção inválida\n");}
        if(escolha1 != 2){
            printf("Sua mana está regenerando\n");
            p1->regenerarMana();
        }
        //Checar quem ganhou.
        if(p1->vida == 0){
            printf("\nJogador 2 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
        else if(p2->vida == 0){
            printf("\nJogador 1 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
        //Jogador 2;
        Status2(p2);
        printf("\nVez do player 2\n");
        printf("1-Usar arma\n");
        if(p1->mana != 0){printf("2-Usar magia\n");}
        printf("3-Trocar de arma\n");
        if(p2->chanceLendaria() == 1){printf("4-Usar Voto Solene de Bul-Kathos\n");}
        printf("Escolha a sua ação: ");
        scanf("%d", &escolha2);
        if(escolha2 == 1){
            cout << "Player 2 utilizou arma: " << p2->arma->nome << "\n";
            p1->recebeDanoDeArma(p2->ataqueArma());
        }
        else if(escolha2 == 2){
            printf("Selecione a magia\n");
            ListaDeMagias2(p2, p1, p2_personagem);
        }
        else if(escolha2 == 3){
            printf("Selecione a arma\n");
            ListaDeArmas2(p2, p2_personagem);
        }
        else if(escolha2 == 4){
            p2->arma = new BulKathos();
            p1->recebeDanoLendario(p2->ataquelendario());
            switch(p2_personagem){
                case 1:
                p2->arma = new Porrete();
                break;
                case 2:
                p2->arma = new Cajado();
                break;
                case 3:
                p2->arma = new Cajado();
                break;
                case 4:
                p2->arma = new Besta();
                break;
                case 5:
                p2->arma = new Garra_Letal();
                break;
                case 6:
                p2->arma = new Cajado();
                break;
                case 7:
                p2->arma = new Garra_Letal();
                break;
                case 8:
                p2->arma = new Cajado();
                break;
            }
        }
        else{printf("Opção inválida\n");}
        if(escolha2 != 2){
            printf("Sua mana está regenerando\n");
            p2->regenerarMana();
        }
        //Checar quem ganhou.
        if(p1->vida == 0){
            printf("\nJogador 2 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
        else if(p2->vida == 0){
            printf("\nJogador 1 ganhou\n");
            printf("\nFim de Jogo\n");
            return 0;
        }
    }
    while(rodadas != 100);
    //Caso não tenha um vencedor após 100;
    if(p1->vida < p2->vida){
        printf("\nJogador 2 ganhou\n");
        printf("\nFim de Jogo\n");
        return 0;
    }
    else if(p2->vida < p1->vida){
        printf("\nJogador 1 ganhou\n");
        printf("\nFim de Jogo\n");
        return 0;
    }
    else{
        printf("\nEmpate\n");
        printf("Fim de Jogo\n");
        return 0;
    }
}
//******************************************************************************
void ListaDePersonagens()
{
    printf("Lista de Personagens\n");
    printf("\n");
    printf("Humanos:\n");
    printf("1-Guerreiro\n");
    printf("2-Ladrão\n");
    printf("3-Mago\n");
    printf("4-Paladino\n");
    printf("\n");
    printf("Inumanos:\n");
    printf("5-Animal\n");
    printf("6-Troll\n");
    printf("7-Dragão\n");
    printf("8-Zumbi\n");
}
//******************************************************************************
void selecaoDePersonagem()
{
    Personagem *p1;
    Personagem *p2;
    int p1_personagem;//Personagem escolhido do Player1.
    int p2_personagem;//Personagem escolhido do Player2.
    ListaDePersonagens();//Exibe as opções de Personagens.
    while(p1_personagem <= 0 || 8 < p1_personagem){//Jogador 1;
        printf("\nPlayer 1-Escolha o seu Personagem: ");
        scanf("%d", &p1_personagem);
        switch(p1_personagem){
            case 1:
            printf("Player 1 escolheu Guerreiro\n");
            p1 = new Guerreiro();
            break;
            case 2:
            printf("Player 1 escolheu Ladrão\n");
            p1 = new Ladrao();
            break;
            case 3:
            printf("Player 1 escolheu Mago\n");
            p1 = new Mago();
            break;
            case 4:
            printf("Player 1 escolheu Paladino\n");
            p1 = new Paladino();
            break;
            case 5:
            printf("Player 1 escolheu Animal\n");
            p1 = new Animal();
            break;
            case 6:
            printf("Player 1 escolheu Troll\n");
            p1 = new Troll();
            break;
            case 7:
            printf("Player 1 escolheu Dragão\n");
            p1 = new Dragao();
            break;
            case 8:
            printf("Player 1 escolheu Zumbi\n");
            p1 = new Zumbi();
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    while(p2_personagem <= 0 || 8 < p2_personagem){//Jogador 2;
        printf("\nPlayer 2-Escolha o seu Personagem: ");
        scanf("%d", &p2_personagem);
          switch(p2_personagem){
            case 1:
            printf("Player 2 escolheu Guerreiro\n");
            p2 = new Guerreiro();
            break;
            case 2:
            printf("Player 2 escolheu Ladrão\n");
            p2 = new Ladrao();
            break;
            case 3:
            printf("Player 2 escolheu Mago\n");
            p2 = new Mago();
            break;
            case 4:
            printf("Player 2 escolheu Paladino\n");
            p2 = new Paladino();
            break;
            case 5:
            printf("Player 2 escolheu Animal\n");
            p2 = new Animal();
            break;
            case 6:
            printf("Player 2 escolheu Troll\n");
            p2 = new Troll();
            break;
            case 7:
            printf("Player 2 escolheu Dragão\n");
            p2 = new Dragao();
            break;
            case 8:
            printf("Player 2 escolheu Zumbi\n");
            p2 = new Zumbi();
            break;
            default:
            printf("Opção inválida\n");
        }
    }
    Jogo(p1, p2, p1_personagem, p2_personagem);//Começo do Jogo;
}
//******************************************************************************
int main()
{
    srand(time(0));
    //Menu.
    Menu();
    //Seleção de Personagem.
    selecaoDePersonagem();
    return 0;
}
