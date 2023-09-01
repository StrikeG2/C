#include <iostream>
#include <sstream>
#include <string>

bool isNumber(const std::string& s) {
    std::istringstream ss(s);
    double d;
    return (ss >> d) && (ss >> std::ws).eof();
}

int main(){
    std::string nb1;
    std::string nb2;
    bool choose = false;
    int choix;

    while(true){
        std::cout << "Entrez un nombre" << std::endl;
        std::cin >> nb1;
        if(isNumber(nb1)){
            break;
        }
    }
    while(true){
        std::cout << "Entrez un 2ème nombre" << std::endl;
        std::cin >> nb2;
        if(isNumber(nb2)){
            break;
        }
    }

    while (choose == false){
        std::cout << "Choisissez le numéro de l'opération" << std::endl;
        std::cout << "1-Addition" << std::endl;
        std::cout << "2-Soustraction" << std::endl;
        std::cout << "3-Multiplication" << std::endl;
        std::cout << "4-Division" << std::endl;

        std::cin >> choix;
        while (choix < 1 || choix > 4){
            std::cout << "Entrez un nombre valide" << std::endl;
            std::cin >> choix;
        }
        choose = true;
    }

    if(choix == 1){
        int result = std::stoi(nb1) + std::stoi(nb2);
        std::cout << "Le résultat est: " << std::endl;
        std::cout << result << std::endl;
    }
    if(choix == 2){
        int result = std::stoi(nb1)- std::stoi(nb2);
        std::cout << "Le résultat est: " << std::endl;
        std::cout << result << std::endl;
    }
    if(choix == 3){
        int result = std::stoi(nb1)* std::stoi(nb2);
        std::cout << "Le résultat est: " << std::endl;
        std::cout << result << std::endl;
    }
    if(choix == 4){
        double result = static_cast<double>(std::stoi(nb1))/ std::stoi(nb2);
        std::cout << "Le résultat est: " << std::endl;
        std::cout << result << std::endl;
    }
    return 0;
}
