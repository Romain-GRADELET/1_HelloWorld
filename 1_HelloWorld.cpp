
#include <iostream>

int age = 10; // - ~32 000 à ~32 000
unsigned int monUint = 50; // 0 à 65 000

float price = 5.2;
double price2 = 5.22;

bool estVrai = true; // (ou false)

char charactère = 'a';

std::string texte = "Mon texte";


int main()
{
    std::cout << "age 1 = ";
    std::cout << age;
    std::cout << "\n";
    
    std::cout << texte;
    std::cout << "\n";

    age = 5;
    std::cout << "age 2 = ";
    std::cout << age;

    // system("PAUSE");
    return 0;

}

bool isAdmin()
{
    return true;
}


int add(int nombre) 
{
    return nombre + 5;
}

void afficher()
{
    std::cout << "Message";
}