
#include <iostream>

/*********************************************/
int age = 10; // - ~32 000 à ~32 000
unsigned int monUint = 50; // 0 à 65 000

float price = 5.2;
double price2 = 5.22;

bool estVrai = true; // (ou false)

char charactère = 'a';

std::string texte = "Mon texte";
/*********************************************/

int main()
{
    std::cout << "saisir un nombre :  ";
    
    int nb{};

    std::cin >> nb;

    std::cout << "Vous avez saisi : " << nb << "\n";
    std::cout << "le double de : " << nb << " est : " << nb*2 << "\n";

    return 0;

}
