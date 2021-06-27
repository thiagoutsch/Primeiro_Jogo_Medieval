#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
class Magia
{
    public:
    string nome;//nome da magia.
    int dano;
    int cura;
    int gastoMana;//gasto de mana.
};
//Magias de cura;
class Pocao_da_Vida : public Magia
{
    public:
    Pocao_da_Vida(){nome = "Poção da Vida";
    dano = 0;
    cura = 200;
    gastoMana = 12;}
};
class Cura : public Magia
{
    public:
    Cura(){nome = "Cura";
    dano = 0;
    cura = 400;
    gastoMana = 16;}
};
//Magias de dano;
class Halito_de_Fogo : public Magia
{
    public:
    Halito_de_Fogo(){nome = "Hálito de Fogo";
    dano = 400;
    cura = 0;
    gastoMana = 12;}
};
class Bio : public Magia
{
    public:
    Bio(){nome = "Bio";
    dano = 360;
    cura = 0;
    gastoMana = 14;}
};
class Flama_Gelada : public Magia
{
    public:
    Flama_Gelada(){nome = "Flama Gelada";
    dano = 320;
    cura = 0;
    gastoMana = 14;}
};
class Intoxicacao : public Magia
{
    public:
    Intoxicacao(){nome = "Intoxicação";
    dano = 280;
    cura = 0;
    gastoMana = 12;}
};
class Tempestade : public Magia
{
    public:
    Tempestade(){nome = "Tempestade";
    dano = 200;
    cura = 0;
    gastoMana = 12;}
};
