/*********************************************/
    //int age = 10; // - ~32 000 à ~32 000
    //unsigned int monUint = 50; // 0 à 65 000

    //float price = 5.2;
    //double price2 = 5.22;

    //bool estVrai = true; // (ou false)

    //char charactère = 'a';

    //std::string texte = "Mon texte";
/*********************************************/
    // Retour à la ligne 
    // "\n" ou << std::endl
/*********************************************/

#include <iostream>
#include "./math.h"
#include <array>
#include <string>
using namespace std;


enum badge
{
    bronze, // =0
    silver, // =1
    gold,   // =2
};

/***** Prototype *****/



/*********************/

int main()
{
    int nombre{ 5 };
    int* monPointeur, val;

    val = 10;
    monPointeur = &val;

    cout << "monPointeur = " << *monPointeur << endl;

    //cout << "nb = " << nombre << endl;
    // & va permettre d'obtenir l'adresse memoire
    //cout << "adresse memoire = " << &nombre << endl;

    return 0;
}
