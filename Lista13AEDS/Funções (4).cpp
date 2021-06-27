#include "Personagens.h"
int Personagem::calculaEsquiva()
{
    //calcula a change de esquiva usando os pontos de agilidade.
    //retorna 1 caso o personagem tenha se esquivado.
    //retorna 0 caso o contrário.
    int esquiva = (rand() % 100) + 1;
    if(esquiva <= this->agilidade){return 1;}
    else{return 0;};
}
//******************************************************************************
int Personagem::ataqueArma()
{
    int danoArma = 0;
    danoArma += (this->arma->danoMin + (rand() % (this->arma->danoMax - this->arma->danoMin + 1)));
    danoArma = danoArma + (danoArma * (this->forca/100));
    printf("Você da %d de dano\n", danoArma);
    return danoArma;
}
//******************************************************************************
int Personagem::ataqueMagia()
{
    int danoMagia = 0;
    if(this->feitico->gastoMana <= this->mana){
        this->mana -= this->feitico->gastoMana;
        danoMagia += (this->feitico->dano * (this->magia/100));
        printf("Você da %d de dano\n", danoMagia);
        printf("Você perdeu %d de mana\n", this->feitico->gastoMana);
    }
    else{
        printf("Mana Insuficiente\n");
        printf("Sua mana está regenerando\n");
        this->regenerarMana();
    }
    return danoMagia;
}
//******************************************************************************
int Personagem::recebeDanoDeArma(int dano)
{
    if(calculaEsquiva() == 1){
        printf("Esquivou-Dano é 0\n");
        return 0;
    }
    int DanoDeArmaRecebido = dano - (dano * (this->armadura/100));
    if(DanoDeArmaRecebido > this->vida){this->vida = 0;}
    else{this->vida -= DanoDeArmaRecebido;}
    return DanoDeArmaRecebido;
}
//******************************************************************************
int Personagem::recebeDanoDeMagia(int dano)
{
   int DanoDeMagiaRecebido = dano - (dano * (this->resistencia/100));
   if(DanoDeMagiaRecebido > this->vida){this->vida = 0;}
   else{this->vida -= DanoDeMagiaRecebido;}
   return DanoDeMagiaRecebido;
}
//******************************************************************************
void Personagem::recebeCura()
{
    if(this->feitico->gastoMana <= this->mana){
         this->mana -= this->feitico->gastoMana;
         this->vida += this->feitico->cura;
         printf("Você recuperou %d pontos de vida\n", this->feitico->cura);
         printf("Você perdeu %d de mana\n", this->feitico->gastoMana);
          //Caso a vida já tenha atingido o seu valor máximo
          if (vida > maxvida){this->vida = maxvida;}
    }
    else{
        printf("Mana Insuficiente\n");
        printf("Sua mana está regenerando\n");
        this->regenerarMana();
    }
}
//******************************************************************************
void Personagem::regenerarMana()
{
    int regenera = 10;
    this->mana += regenera;
    //Caso a Mana atinja o seu valor máximo.
    if(mana > maxmana){this->mana = maxmana;}
}
//******************************************************************************
int Personagem::chanceLendaria()
{
    int chance = (rand() % 100) + 1;
    if(chance <= this->bencaoDeBulKathos){
        printf("você recebeu a benção de Bul-Kathos\n");
        return 1;
    }
    else{return 0;};
}
//******************************************************************************
int Personagem::ataquelendario()
{
    printf("Você voltou para a sua arma inicial\n");
    int dano = this->arma->danoMin + (rand() % (this->arma->danoMax - this->arma->danoMin + 1));
    int chanceDeCritico = (rand() % 100) + 1;
    if(chanceDeCritico <= this->arma->chanceDeAcertoCritico){
        dano += (dano * (this->arma->danoDeAcertoCritico/100));
        printf("Acerto crítico = %d de dano\n", dano);
    }
    else{printf("Você da %d de dano\n", dano);}
    return dano;
}
//******************************************************************************
int Personagem::recebeDanoLendario(int dano)
{
    if(calculaEsquiva() == 1){
       printf("Esquivou-Dano é 0\n");
       return 0;
    }
    
    int DanoDaArmaLendaria = dano - (dano * (this->armadura/100));
    if(DanoDaArmaLendaria > this->vida){this->vida = 0;}
    
    else{this->vida -= DanoDaArmaLendaria;}
    
    return DanoDaArmaLendaria;
}
