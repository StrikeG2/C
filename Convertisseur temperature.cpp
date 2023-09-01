#include <iostream>
#include <sstream>

bool isNumber(const std::string& s){
    std::istringstream ss(s);
    double d;
    return (ss >> d) && (ss >> std::ws).eof();
}

int main(){
    int unite;
    std::string valeur;
    char degreeSymbol = 248;

    std::cout << "Choisissez le type de conversion" << std::endl;
    std::cout << "1-Fahrenheit en Celsius" << std::endl;
    std::cout << "2-Celsius en Fahrenheit" << std::endl;

    while(true){
        std::cin >> unite;
        if(unite == 1 || unite == 2){
            while(true){
                std::cout << "Entrez la valeur" << std::endl;
                std::cin >> valeur;
                if (isNumber(valeur)){
                    break;
                }
            }
            break;
        }
        else{
            std::cout << "Choisissez le type de conversion" << std::endl;
            std::cout << "1-Fahrenheit en Celsius" << std::endl;
            std::cout << "2-Celsius en Fahrenheit" << std::endl;
        }
    }

    if(unite == 1){
        std::cout << "En Celsius : " << (std::stod(valeur) - 32)/1.8 << degreeSymbol << "C" << std::endl;
    }
    if(unite == 2){
        std::cout << "En Fahrenheit : " << (std::stod(valeur) * 1.8) + 32 << degreeSymbol << "F" << std::endl;
    }

    return 0;

}
