#include <iostream>
#include <string>

class Vehicule
{
public:
    std::string marque {};
    std::string annee {};
    std::string modele {};
    std::string type {};

};

class Moto : public Vehicule
{
public:
    std::string couleur {};

    void infoMoto()
    {
        std::cout<< "Modèle : " << modele <<std::endl;
        std::cout<< "Marque : " << marque <<std::endl;
        std::cout<< "Annee : " << annee <<std::endl;
        std::cout<< "Type : " << type <<std::endl;
        std::cout<< "Couleur : " << couleur <<std::endl;
    }
};

class Voiture : public Vehicule
{
public:
    std::string carburant {};

    void infoVoiture()
    {
        std::cout<< "Modèle : " << modele <<std::endl;
        std::cout<< "Marque : " << marque <<std::endl;
        std::cout<< "Annee : " << annee <<std::endl;
        std::cout<< "Type : " << type <<std::endl;
        std::cout<< "Carburant : " << carburant <<std::endl;
    }
};

int main()
{
    Moto moto1{"YAMAHA", "2020", "SPEED", "Tout terrain", "Bleu cobalt"};
    moto1.infoMoto();

    std::cout<<std::endl;

    Voiture voiture1{"PEUGEOT", "1991", "SR 205", "Urbain", "Essence sans plomb"};
    voiture1.infoVoiture();

    return 0;
}