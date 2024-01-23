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

int main()
{
    int age { getNum() };

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
    }


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
