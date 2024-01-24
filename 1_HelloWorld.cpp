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
using namespace std;


int getNum();
void acheter(int qte);

int argent{ 500 };
int stock{ 3 };
int price{ 50 };
bool isOnline = true;

int main()
{
    int num{};
    
    etapePremiere:

    cout << "Choisir un nombre différent de 0 " << endl;
    cin >> num;

        if (num == 0)
        {
            cout << "Erreur" << endl;
            goto etapePremiere;
        }
        else
        {
            cout << "Bravo";
        }









   /* int age { getNum() };

    switch (age)
    {
    case 10 :
        cout << "10 ans";
        return;
    case 20:
        cout << "20 ans";
        return;
    default:
        cout << "autres";
        return;
    }

    if (age >= 18)
    {
        cout << "Est majeur";
    }
    else
    {
        cout << "Est mineur";
    }*/


    /*int num1 { getNum() };
    int num2 { getNum() };

    cout << "Calcul : " << num1 << " / " << num2 << " = " << Divide(num1, num2);*/

    return 0;
}

int getNum() 
{
    int num{};
    cout << "Saisir un nombre: ";
    cin >> num;

    if (num != 0)
    {
        return num;
    }
    else
    {
        cout << "Veuillez saisir un nombre différent de 0 \n";
        getNum();
    }
}

void acheter(int qte)
{
    cout << "qte = " << qte << endl;
    cout << "type 2 = " << typeid(qte).name() << endl;

    if ((qte * price) <= argent)
    {
        cout << "Achat OK \n";
        argent -= (qte * price);
        cout << "Il vous reste : " << argent << "euro \n";
    }
    else
    {
        cout << "Pas assez d'argent";

    }
}