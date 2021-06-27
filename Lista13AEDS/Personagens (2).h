#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include "Armas.h"
#include "Magia.h"
using namespace std;
class Personagem 
{
    public:
    //Atributos.
    string nome;
    int vida;
    int mana;
    int maxmana;//maximo de mana.
    int maxvida;//maximo de vida.
    int forca;//Força física.
    float magia;//Força mágica.
    float armadura;//resistencia física.
    float resistencia;//resistencia magica.
    float agilidade;//chance de desvio.
    Arma *arma;//Arma do Personagem.
    Magia *feitico;//Magia usada pelo Personagem.
    float bencaoDeBulKathos = 20;
    //Função construtora.
    Personagem(){nome = "";
    vida = 0;
    mana = 0;
    maxmana = 0;
    maxvida = 0;
    forca = 0;
    magia = 0;
    armadura = 0;
    resistencia = 0;
    agilidade = 0;};
    //Funções.
    int calculaEsquiva();
    int ataqueArma();
    int ataqueMagia();
    int recebeDanoDeArma(int dano);
    int recebeDanoDeMagia(int dano);
    void recebeCura();
    void regenerarMana();
    //Voto Solene de Bul-Kathos;
    int chanceLendaria();
    int ataquelendario();
    int recebeDanoLendario(int dano);
};
//******************************************************************************
//Humanos.
class Guerreiro : public Personagem
{
    //Guerreiro 4.000 30 100 20 80 20 20
    public:
    Guerreiro(){nome = "Guerreiro";
    vida = 4000;
    mana = 30;
    maxmana = 30;
    maxvida = 4000;
    forca = 100;
    magia = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
    arma = new Porrete();}
};
class Ladrao : public Personagem
{
    //Ladrão 2.800 50 50 30 40 50 80
    public:
    Ladrao(){nome = "Ladrão";
    vida = 2800;
    mana = 50;
    maxmana = 50;
    maxvida = 2800;
    forca = 50;
    magia = 30;
    armadura = 40;
    resistencia = 50;
    agilidade = 80;
    arma = new Cajado();}
};
class Mago : public Personagem
{
    //Mago 2.500 100 40 100 30 80 40
    public:
    Mago(){nome = "Mago";
    vida = 2500;
    mana = 100;
    maxmana = 100;
    maxvida = 2500;
    forca = 40;
    magia = 100;
    armadura = 30;
    resistencia = 80;
    agilidade = 40;
    arma = new Cajado();}
};
class Paladino : public Personagem
{
    //Paladino 3.200 80 60 50 60 60 60
    public:
    Paladino(){nome = "Paladino";
    vida = 3200;
    mana = 80;
    maxmana = 80;
    maxvida = 3200;
    forca = 60;
    magia = 50;
    armadura = 60;
    resistencia = 60;
    agilidade = 60;
    arma = new Besta();}
};
//Inumanos.
class Animal : public Personagem
{
    //Animal 3.200 30 80 20 80 20 50
    public:
    Animal(){nome = "Animal";
    vida = 3200;
    mana = 30;
    maxmana = 30;
    maxvida = 3200;
    forca = 80;
    magia = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 50;
    arma = new Garra_Letal();}
};
class Troll : public Personagem
{
    //Troll 2.800 20 100 20 80 20 20
    public:
    Troll(){nome = "Troll";
    vida = 2800;
    mana = 20;
    maxmana = 20;
    maxvida = 2800;
    forca = 100;
    magia = 20;
    armadura = 80;
    resistencia = 20;
    agilidade = 20;
    arma = new Cajado();}
};
class Dragao : public Personagem
{
    //Dragão 3.000 40 100 20 50 50 30
    public:
    Dragao(){nome = "Dragão";
    vida = 3000;
    mana = 40;
    maxmana = 40;
    maxvida = 3000;
    forca = 100;
    magia = 20;
    armadura = 50;
    resistencia = 50;
    agilidade = 30;
    arma = new Garra_Letal();}
};
class Zumbi : public Personagem
{
    //Zumbi 2.500 20 40 20 40 80 50
    public:
    Zumbi(){nome = "Zumbi";
    vida = 2500;
    mana = 20;
    maxmana = 20;
    maxvida = 2500;
    forca = 40;
    magia = 20;
    armadura = 40;
    resistencia = 80;
    agilidade = 50;
    arma = new Cajado();}
};
