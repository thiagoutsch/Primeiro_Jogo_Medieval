#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
class Arma
{
    public:
    string nome;//nome da arma.
    int danoMin;//dano mínumo da arma.
    int danoMax;//dano máximo da arma.
    float chanceDeAcertoCritico;
    float danoDeAcertoCritico;
};
//******************************************************************************
class Garra_Letal : public Arma
{
    public:
    Garra_Letal(){nome = "Garra Letal";
    danoMin = 100;
    danoMax = 300;}
};
class Tridente_Sagrado : public Arma
{
    public:
    Tridente_Sagrado(){nome = "Tridente Sagrado";
    danoMin = 220;
    danoMax = 420;}
};
class Espada_Barroca : public Arma
{
    public:
    Espada_Barroca(){nome = "Espada Barroca";
    danoMin = 300;
    danoMax = 500;}
};
class Porrete : public Arma
{
    public:
    Porrete(){nome = "Porrete";
    danoMin = 180;
    danoMax = 380;}
};
class Cajado : public Arma
{
    public:
    Cajado(){nome = "Cajado";
    danoMin = 50;
    danoMax = 200;}
};
class Besta : public Arma
{
    public:
    Besta(){nome = "Besta";
    danoMin = 220;
    danoMax = 420;}
};
class Esfera_de_ataque : public Arma
{
    public:
    Esfera_de_ataque(){nome = "Esfera de ataque";
    danoMin = 200;
    danoMax = 400;}
};
class BulKathos : public Arma
{
    public:
    //Função construtora.
    BulKathos(){nome = "BulKathos";
    //float bencaoDeBulKathos = 20;
    danoMin = 500;
    danoMax = 900;
    chanceDeAcertoCritico = 30;
    danoDeAcertoCritico = 100;}
    //Funções.
};

