#include <iostream>
#include <string>

class CompteBancaire
{
private:
    double solde {};

public:
    CompteBancaire(double valeur) : solde(valeur) {}

    double getSolde() const 
    {
        return solde;
    }

    void deposer(double sommeDeposer)
    {
        solde = solde + sommeDeposer;
    }

    void retirer(double sommeRetirer)
    {
        if(solde < sommeRetirer)
        {
            std::cout<< "Votre solde est insuffisant" <<std::endl;
        }else{
            solde = solde - sommeRetirer;
        }

    }

    void afficherSolde()
    {
        std::cout<< "Votre solde est de : " << solde <<std::endl;
    }

};

int main()
{
    int option;
    double sommeDeposer, sommeRetirer, solde;
    CompteBancaire compte(0);

    while(true)
    {
        std::cout<< "Bienvenue dans votre compte bancaire." <<std::endl;
        std::cout<< "1-Solde" <<std::endl;
        std::cout<< "2-Déposer" <<std::endl;
        std::cout<< "3-Retirer" <<std::endl;
        std::cout<< "4-Quitter" <<std::endl;
        std::cin>> option;

        if (option == 1)
        {
            solde = compte.getSolde();
            std::cout<< "Votre solde est de : "<< solde <<std::endl;
        }else if (option == 2)
        {
            std::cout<< "Entrez la somme à déposer"<<std::endl;
            std::cin >> sommeDeposer;
            compte.deposer(sommeDeposer);

        }else if (option == 3)
        {
            std::cout<< "Entrez la somme à retirer" <<std::endl;
            std::cin>> sommeRetirer;
            compte.retirer(sommeRetirer);
        }else if (option == 4)
        {
            break;
        }else{
            std::cout<< "Option non valide" <<std::endl;
        }
    }

    return 0;
}