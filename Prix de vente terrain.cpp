#include <iostream>

int main(){
    int type;
    double cote,longueur,largeur,base,hauteur,prix_metre_carre,resultat;

    std::cout<< "Choisissez le type de terrain" << std::endl;
    std::cout<< "1-Carre" << std::endl;
    std::cout<< "2-Rectangle" << std::endl;
    std::cout<< "3-Triangle" << std::endl;
    std::cin >> type;

    if(type == 1){
        std::cout<< "Entrez la longueur du côté" << std::endl;
        std::cin >> cote;
        std::cout<< "Entrez le prix du mètre carré" << std::endl;
        std::cin >> prix_metre_carre;
        std::cout << "Le prix de vente du terrain est de: " << prix_metre_carre*(cote*4) << "fcfa"<< std::endl;
    }else if(type == 2){
        std::cout<< "Entrez la longueur" << std::endl;
        std::cin >> longueur;
        std::cout<< "Entrez la largeur" << std::endl;
        std::cin >> largeur;
        std::cout<< "Entrez le prix du mètre carré" << std::endl;
        std::cin >> prix_metre_carre;
        std::cout << "Le prix de vente du terrain est de: " << prix_metre_carre*(longueur*largeur) << "fcfa"<< std::endl;
    }else if(type == 3){
        std::cout<< "Entrez la base" << std::endl;
        std::cin >> base;
        std::cout<< "Entrez la hauteur" << std::endl;
        std::cin >> hauteur;
        std::cout<< "Entrez le prix du mètre carré" << std::endl;
        std::cin >> prix_metre_carre;
        resultat = prix_metre_carre*((base*hauteur)/2);
        std::cout << "Le prix de vente du terrain est de: " << resultat << "fcfa"<< std::endl;
    }else{
        std::cout<< "Issou" <<std::endl;
    }

    return 0;

}
