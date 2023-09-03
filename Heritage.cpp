#include <iostream>
#include <string>

class Animal
{
public:
    std::string nom {};
    std::string espece {};

};

class Chien : public Animal
{
public:
    std::string nomChien {};
    std::string poids {};

    void infoChien()
    {
        std::cout<< "Animal : " << nom <<std::endl;
        std::cout<< "Espèce : " << espece <<std::endl;
        std::cout<< "Nom : " << race <<std::endl;
        std::cout<< "Poids : " << poids <<std::endl;
    }
};

class Oiseau : public Animal
{
public:
    std::string taille {};

    void infoBird()
    {
        std::cout<< "Animal : " << nom <<std::endl;
        std::cout<< "Espèce : " << espece <<std::endl;
        std::cout<< "Taille : " << taille <<std::endl;
    }
};

class Chat : public Animal
{
public:
    std::string nomChat {};
    std::string sexe {};

    void infoChat()
    {
        std::cout<< "Animal : " << nom <<std::endl;
        std::cout<< "Espèce : " << espece <<std::endl;
        std::cout<< "Nom : " << nomChat <<std::endl;
        std::cout<< "Sexe : " << sexe <<std::endl;
    }
};



int main()
{
    Chien dagobert{"Chien", "Berger allemand", "Dagobert", "25kg"};
    dagobert.infoChien();

    Oiseau titi{"Oiseau", "Canari", "15cm"};
    titi.infoBird();

    Chat sylvestre{"Chat","Chat domestique","Sylvestre","Mâle"};
    sylvestre.infoChat();
    
    return 0;
}