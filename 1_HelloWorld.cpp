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


enum badge
{
    bronze, // =0
    silver, // =1
    gold,   // =2
};

int main()
{
    badge userBadge{};
    userBadge = bronze;

    if (userBadge == 2)
    {
        cout << "PREMIUM" << endl;
    }
    else
    {
        cout << "PAS PREMIUM" << endl;
    }


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