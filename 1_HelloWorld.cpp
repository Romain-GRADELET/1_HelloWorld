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
using namespace std;


enum badge
{
    bronze, // =0
    silver, // =1
    gold,   // =2
};

int main()
{
    int agesBase[10] = { 10 ,12 ,19 ,21 ,6 ,4 ,17 ,22 ,33 ,18 };

    array<int, 10> ages = { 10 ,12 ,19 ,21 ,6 ,4 ,17 ,22 ,33 ,18 };

    int nbMajeur{ 0 };

    for (int i = 0; i < ages.size(); i++)
    {
        if (ages[i] >= 18)
        {
            nbMajeur++;
        }
    }

    cout << "NB de majeur: " << nbMajeur << endl;

    cout << "Size de agesBase: " << end(agesBase) - begin(agesBase) << endl;

    return 0;
}

//int getNum() 
//{
//    int num{};
//    cout << "Saisir un nombre: ";
//    cin >> num;
//
//    if (num != 0)
//    {
//        return num;
//    }
//    else
//    {
//        cout << "Veuillez saisir un nombre différent de 0 \n";
//        getNum();
//    }
//}

//void acheter(int qte)
//{
//    cout << "qte = " << qte << endl;
//    cout << "type 2 = " << typeid(qte).name() << endl;
//
//    if ((qte * price) <= argent)
//    {
//        cout << "Achat OK \n";
//        argent -= (qte * price);
//        cout << "Il vous reste : " << argent << "euro \n";
//    }
//    else
//    {
//        cout << "Pas assez d'argent";
//
//    }
//}